#include <malloc.h>
#include "unity.h"
#include "Main.h"
#include "ErrorObject.h"
#include "CException.h"

void setUp(void){}

void tearDown(void){}

void test_doThings(void){
  ErrorObject *err;
  
  Try {
    doThings();
    TEST_FAIL_MESSAGE("Expect ERR_DUNNO_WHAT_HAPPEN to be thrown."   \
                      " But none thrown.");
  }Catch(err) {
    TEST_ASSERT_EQUAL_STRING("Hey! Something is really wrong here.", \
                              err->errorMsg);
    TEST_ASSERT_EQUAL(ERR_DUNNO_WHAT_HAPPEN, err->errorCode);                        
    freeError(err);
  }
}

void test_specialAdd_given_minus_5_and_11_should_return_6() {
  int result = specialAdd(-5, 11);
  TEST_ASSERT_EQUAL(6, result);
}

void test_specialAdd_given_7_and_18_should_throw_ERR_NUMBER_NOT_NEGATIVE() {
  ErrorObject *result;
  
  Try {
    specialAdd(7, 18);
    TEST_FAIL_MESSAGE("Expect ERR_NUMBER_NOT_NEGATIVE to be thrown."   \
                      " But none thrown.");
  }Catch(result) {
    TEST_ASSERT_EQUAL_STRING("Hey! Something is really wrong here.", \
                              result->errorMsg);
    TEST_ASSERT_EQUAL(ERR_NUMBER_NOT_NEGATIVE, result->errorCode);                        
    freeError(result);
  }  
}

void test_specialAdd_given_minus_5_and_51_should_throw_ERR_NUMBER_TOO_LARGE(){
  ErrorObject *result;
  
  Try {
    specialAdd(-5, 51);
    TEST_FAIL_MESSAGE("Expect ERR_NUMBER_TOO_LARGE to be thrown."   \
                      " But none thrown.");
  }Catch(result) {
    TEST_ASSERT_EQUAL_STRING("Hey! Something is really wrong here.", \
                              result->errorMsg);
    TEST_ASSERT_EQUAL(ERR_NUMBER_TOO_LARGE, result->errorCode);                        
    freeError(result);
  }  
}