/* AUTOGENERATED FILE. DO NOT EDIT. */

/*=======Test Runner Used To Run Each Test Below=====*/
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
    CEXCEPTION_T e; \
    Try { \
      setUp(); \
      TestFunc(); \
    } Catch(e) { TEST_ASSERT_EQUAL_HEX32_MESSAGE(CEXCEPTION_NONE, e, "Unhandled Exception!"); } \
  } \
  if (TEST_PROTECT()) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

/*=======Automagically Detected Files To Include=====*/
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>
#include "CException.h"

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

/*=======External Functions This Runner Calls=====*/
extern void setUp(void);
extern void tearDown(void);
extern void test_FindErrorsValues(void);
extern void test_FindPIDValue(void);
extern void test_FindPIDValueWithPIDIntegrate(void);
extern void test_FindPIDValueWithPIDIntegrateAndAvoidPIDValueOver90(void);
extern void test_FindPIDValueWithPIDInReset(void);


/*=======Test Reset Option=====*/
void resetTest(void);
void resetTest(void)
{
  tearDown();
  setUp();
}


/*=======MAIN=====*/
int main(void)
{
  UnityBegin("test_PIDMath.c");
  RUN_TEST(test_FindErrorsValues, 13);
  RUN_TEST(test_FindPIDValue, 24);
  RUN_TEST(test_FindPIDValueWithPIDIntegrate, 38);
  RUN_TEST(test_FindPIDValueWithPIDIntegrateAndAvoidPIDValueOver90, 61);
  RUN_TEST(test_FindPIDValueWithPIDInReset, 85);

  return (UnityEnd());
}