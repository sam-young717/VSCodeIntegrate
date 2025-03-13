#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/Timer/clock.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/Timer/clock.c");

EXTERN_C_LINKAGE void TestSuite_clock_c_ddc1abe9_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_clock_c_ddc1abe9_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_clock_c_ddc1abe9);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_clock_c_ddc1abe9_testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_clock_c_ddc1abe9_testSuiteTearDown);
CPPTEST_TEST(TestSuite_clock_c_ddc1abe9_test_display_time_1);
CPPTEST_TEST(TestSuite_clock_c_ddc1abe9_test_set_time_1);
CPPTEST_TEST(TestSuite_clock_c_ddc1abe9_test_set_time_2);
CPPTEST_TEST(TestSuite_clock_c_ddc1abe9_test_set_time_3);
CPPTEST_TEST(TestSuite_clock_c_ddc1abe9_test_set_time_4);
CPPTEST_TEST(TestSuite_clock_c_ddc1abe9_test_set_time_5);
CPPTEST_TEST_SUITE_END();
        

void TestSuite_clock_c_ddc1abe9_test_display_time_1(void);
void TestSuite_clock_c_ddc1abe9_test_set_time_1(void);
void TestSuite_clock_c_ddc1abe9_test_set_time_2(void);
void TestSuite_clock_c_ddc1abe9_test_set_time_3(void);
void TestSuite_clock_c_ddc1abe9_test_set_time_4(void);
void TestSuite_clock_c_ddc1abe9_test_set_time_5(void);
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_clock_c_ddc1abe9);

void TestSuite_clock_c_ddc1abe9_testSuiteSetUp(void);
void TestSuite_clock_c_ddc1abe9_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_clock_c_ddc1abe9_testSuiteTearDown(void);
void TestSuite_clock_c_ddc1abe9_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_clock_c_ddc1abe9_setUp(void);
void TestSuite_clock_c_ddc1abe9_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_clock_c_ddc1abe9_tearDown(void);
void TestSuite_clock_c_ddc1abe9_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_display_time_1 */
/* CPPTEST_TEST_CASE_CONTEXT void display_time(void) */
void TestSuite_clock_c_ddc1abe9_test_display_time_1()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        display_time();
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_display_time_1 */

/* CPPTEST_TEST_CASE_BEGIN test_set_time_1 */
/* CPPTEST_TEST_CASE_CONTEXT void set_time(time_t) */
void TestSuite_clock_c_ddc1abe9_test_set_time_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (new_time) */ 
    time_t _new_time  = cpptestLimitsGetMaxLong();
    {
        /* Tested function call */
        set_time(_new_time);
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_set_time_1 */

/* CPPTEST_TEST_CASE_BEGIN test_set_time_2 */
/* CPPTEST_TEST_CASE_CONTEXT void set_time(time_t) */
void TestSuite_clock_c_ddc1abe9_test_set_time_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (new_time) */ 
    time_t _new_time  = cpptestLimitsGetMinLong();
    {
        /* Tested function call */
        set_time(_new_time);
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_set_time_2 */

/* CPPTEST_TEST_CASE_BEGIN test_set_time_3 */
/* CPPTEST_TEST_CASE_CONTEXT void set_time(time_t) */
void TestSuite_clock_c_ddc1abe9_test_set_time_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (new_time) */ 
    time_t _new_time  = -1L;
    {
        /* Tested function call */
        set_time(_new_time);
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_set_time_3 */

/* CPPTEST_TEST_CASE_BEGIN test_set_time_4 */
/* CPPTEST_TEST_CASE_CONTEXT void set_time(time_t) */
void TestSuite_clock_c_ddc1abe9_test_set_time_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (new_time) */ 
    time_t _new_time  = 1L;
    {
        /* Tested function call */
        set_time(_new_time);
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_set_time_4 */

/* CPPTEST_TEST_CASE_BEGIN test_set_time_5 */
/* CPPTEST_TEST_CASE_CONTEXT void set_time(time_t) */
void TestSuite_clock_c_ddc1abe9_test_set_time_5()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (new_time) */ 
    time_t _new_time  = 0L;
    {
        /* Tested function call */
        set_time(_new_time);
        /* Post-condition check */
    }
}
/* CPPTEST_TEST_CASE_END test_set_time_5 */
