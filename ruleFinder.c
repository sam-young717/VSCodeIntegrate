#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ruleFinder.h"

int main() {
    char selection[256];
    printf("Select a child to find it's parent:\n");
    fgets(selection, sizeof(selection), stdin);
    selection[strcspn(selection, "\n")] = '\0'; 
    if(!parse(selection) == 1){
        printf("%s is already a parent!\n", selection);
    }
}

int parse(const char *selection){
    const char *filename = "rulemap.xml"; 
    FILE *file = fopen(filename, "r");
    char line[512];
    char newID[512]; 
    char ID[512];

    while (fgets(line, sizeof(line), file)) {
        if (sscanf(line, " <clone newId=\"%[^\"]\" id=\"%[^\"]\"", newID, ID) == 2 || sscanf(line, " <clone id=\"%[^\"]\" newId=\"%[^\"]\"", ID, newID) == 2) {
            if (strcmp(newID, selection) == 0) {
                printf("Parent rule found: %s\n", ID);
                return 1;
            }
        }
    }
    fclose(file);
}