#!/usr/bin/env python3
import datetime
import json
import os
import pathlib

import semver

_API_COMPATIBILITY_PATH = pathlib.Path(__file__).absolute().parents[3] / "src" / "api-compatibility.json"
_ENTERPRISE_RELEASES_PATH = pathlib.Path(os.environ["ENTERPRISE_RELEASES_PATH"])
_RELEASE_FILE_PATH = _ENTERPRISE_RELEASES_PATH / "releases.json"
_FIRST_SUPPORTED_RELEASE = semver.VersionInfo.parse("2.22.0") # Versions older than this did not include Code Scanning.

def main():
	api_compatibility_data = json.loads(_API_COMPATIBILITY_PATH.read_text())

	releases = json.loads(_RELEASE_FILE_PATH.read_text())

	# Remove GHES version using a previous version numbering scheme.
	if "11.10" in releases:
		del releases["11.10"]

	oldest_supported_release = None
	newest_supported_release = semver.VersionInfo.parse(api_compatibility_data["maximumVersion"] + ".0")

	for release_version_string, release_data in releases.items():
		release_version = semver.VersionInfo.parse(release_version_string + ".0")
		if release_version < _FIRST_SUPPORTED_RELEASE:
			continue

		if release_version > newest_supported_release:
			feature_freeze_date = datetime.date.fromisoformat(release_data["feature_freeze"])
			if feature_freeze_date < datetime.date.today() + datetime.timedelta(weeks=2):
				newest_supported_release = release_version

		if oldest_supported_release is None or release_version < oldest_supported_release:
			end_of_life_date = datetime.date.fromisoformat(release_data["end"])
			# The GHES version is not actually end of life until the end of the day specified by
			# `end_of_life_date`. Wait an extra week to be safe.
			is_end_of_life = datetime.date.today() > end_of_life_date + datetime.timedelta(weeks=1)
			if not is_end_of_life:
				oldest_supported_release = release_version

	api_compatibility_data = {
		"minimumVersion": f"{oldest_supported_release.major}.{oldest_supported_release.minor}",
		"maximumVersion": f"{newest_supported_release.major}.{newest_supported_release.minor}",
	}
	_API_COMPATIBILITY_PATH.write_text(json.dumps(api_compatibility_data, sort_keys=True) + "\n")

if __name__ == "__main__":
	main()
