#include "cpptest.h"

/* CPPTEST_TEST_SUITE_CODE_BEGIN AdditionalIncludes */
/* CPPTEST_TEST_SUITE_CODE_END AdditionalIncludes */

CPPTEST_CONTEXT("/Timer/stdinout.c");
CPPTEST_TEST_SUITE_INCLUDED_TO("/Timer/stdinout.c");

EXTERN_C_LINKAGE void TestSuite_stdinout_c_3579475a_testSuiteBegin(void);
EXTERN_C_LINKAGE int TestSuite_stdinout_c_3579475a_callTest(const char*);

CPPTEST_TEST_SUITE(TestSuite_stdinout_c_3579475a);
        CPPTEST_TEST_SUITE_SETUP(TestSuite_stdinout_c_3579475a_testSuiteSetUp);
        CPPTEST_TEST_SUITE_TEARDOWN(TestSuite_stdinout_c_3579475a_testSuiteTearDown);
CPPTEST_TEST(TestSuite_stdinout_c_3579475a_test_get_input_digit_1);
CPPTEST_TEST(TestSuite_stdinout_c_3579475a_test_print_string_1);
CPPTEST_TEST(TestSuite_stdinout_c_3579475a_test_print_string_2);
CPPTEST_TEST(TestSuite_stdinout_c_3579475a_test_print_string_3);
CPPTEST_TEST(TestSuite_stdinout_c_3579475a_test_print_string_4);
CPPTEST_TEST_SUITE_END();
        

void TestSuite_stdinout_c_3579475a_test_get_input_digit_1(void);
void TestSuite_stdinout_c_3579475a_test_print_string_1(void);
void TestSuite_stdinout_c_3579475a_test_print_string_2(void);
void TestSuite_stdinout_c_3579475a_test_print_string_3(void);
void TestSuite_stdinout_c_3579475a_test_print_string_4(void);
CPPTEST_TEST_SUITE_REGISTRATION(TestSuite_stdinout_c_3579475a);

void TestSuite_stdinout_c_3579475a_testSuiteSetUp(void);
void TestSuite_stdinout_c_3579475a_testSuiteSetUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteSetUp */
}

void TestSuite_stdinout_c_3579475a_testSuiteTearDown(void);
void TestSuite_stdinout_c_3579475a_testSuiteTearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestSuiteTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestSuiteTearDown */
}

void TestSuite_stdinout_c_3579475a_setUp(void);
void TestSuite_stdinout_c_3579475a_setUp(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseSetUp */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseSetUp */
}

void TestSuite_stdinout_c_3579475a_tearDown(void);
void TestSuite_stdinout_c_3579475a_tearDown(void)
{
/* CPPTEST_TEST_SUITE_CODE_BEGIN TestCaseTearDown */
/* CPPTEST_TEST_SUITE_CODE_END TestCaseTearDown */
}


/* CPPTEST_TEST_CASE_BEGIN test_get_input_digit_1 */
/* CPPTEST_TEST_CASE_CONTEXT int get_input_digit(void) */
void TestSuite_stdinout_c_3579475a_test_get_input_digit_1()
{
    /* Pre-condition initialization */
    {
        /* Tested function call */
        int _return  = get_input_digit();
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
    }
}
/* CPPTEST_TEST_CASE_END test_get_input_digit_1 */

/* CPPTEST_TEST_CASE_BEGIN test_print_string_1 */
/* CPPTEST_TEST_CASE_CONTEXT int print_string(char *) */
void TestSuite_stdinout_c_3579475a_test_print_string_1()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (str) */ 
    char _str_0 [1];
    char * _str  = (char * )cpptestMemset((void*)&_str_0, 0, (1 * sizeof(char)));
    {
        /* Tested function call */
        int _return  = print_string(_str);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _str", ( _str ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_print_string_1 */

/* CPPTEST_TEST_CASE_BEGIN test_print_string_2 */
/* CPPTEST_TEST_CASE_CONTEXT int print_string(char *) */
void TestSuite_stdinout_c_3579475a_test_print_string_2()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (str) */ 
    char _str_0 [16];
    char * _str  = (char * )cpptestMemset((void*)&_str_0, 0, (16 * sizeof(char)));
    {
        /* Tested function call */
        int _return  = print_string(_str);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _str", ( _str ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_print_string_2 */

/* CPPTEST_TEST_CASE_BEGIN test_print_string_3 */
/* CPPTEST_TEST_CASE_CONTEXT int print_string(char *) */
void TestSuite_stdinout_c_3579475a_test_print_string_3()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (str) */ 
    char _str_0 [256];
    char * _str  = (char * )cpptestMemset((void*)&_str_0, 0, (256 * sizeof(char)));
    {
        /* Tested function call */
        int _return  = print_string(_str);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _str", ( _str ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_print_string_3 */

/* CPPTEST_TEST_CASE_BEGIN test_print_string_4 */
/* CPPTEST_TEST_CASE_CONTEXT int print_string(char *) */
void TestSuite_stdinout_c_3579475a_test_print_string_4()
{
    /* Pre-condition initialization */
    /* Initializing argument 1 (str) */ 
    char * _str  = 0 ;
    {
        /* Tested function call */
        int _return  = print_string(_str);
        /* Post-condition check */
        CPPTEST_POST_CONDITION_INTEGER("int _return", ( _return ));
        CPPTEST_POST_CONDITION_MEM_BUFFER("char * _str", ( _str ), sizeof(char));
    }
}
/* CPPTEST_TEST_CASE_END test_print_string_4 */
