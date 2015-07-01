#include "CException.h"
#include "ErrorObject.h"
#include "Main.h"
#include "unity.h"


void setUp(void){}



void tearDown(void){}



void test_doThings(void){

  ErrorObject *err;



  { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = ((void *)0); if (_setjmp(NewFrame) == 0) { if (1) {

    doThings();

    UnityFail( ("Expect ERR_DUNNO_WHAT_HAPPEN to be thrown." " But none thrown."), (_U_UINT)17);

                                          ;

  }else { } CExceptionFrames[MY_ID].Exception = ((void *)0); } else { err = CExceptionFrames[MY_ID].Exception; err=err; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != ((void *)0)) {

    UnityAssertEqualString((const char*)("Hey! Something is really wrong here."), (const char*)(err->errorMsg), (((void *)0)), (_U_UINT)20)

                                            ;

    UnityAssertEqualNumber((_U_SINT)((ERR_DUNNO_WHAT_HAPPEN)), (_U_SINT)((err->errorCode)), (((void *)0)), (_U_UINT)21, UNITY_DISPLAY_STYLE_INT);

    freeError(err);

  }

}



void test_specialAdd_given_minus_5_and_11_should_return_6() {

  int result = specialAdd(-5, 11);

  UnityAssertEqualNumber((_U_SINT)((6)), (_U_SINT)((result)), (((void *)0)), (_U_UINT)28, UNITY_DISPLAY_STYLE_INT);

}



void test_specialAdd_given_7_and_18_should_throw_ERR_NUMBER_NOT_NEGATIVE() {

  ErrorObject *result;



  { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = ((void *)0); if (_setjmp(NewFrame) == 0) { if (1) {

    specialAdd(7, 18);

    UnityFail( ("Expect ERR_NUMBER_NOT_NEGATIVE to be thrown." " But none thrown."), (_U_UINT)37);

                                          ;

  }else { } CExceptionFrames[MY_ID].Exception = ((void *)0); } else { result = CExceptionFrames[MY_ID].Exception; result=result; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != ((void *)0)) {

    UnityAssertEqualString((const char*)("Hey! Something is really wrong here."), (const char*)(result->errorMsg), (((void *)0)), (_U_UINT)40)

                                               ;

    UnityAssertEqualNumber((_U_SINT)((ERR_NUMBER_NOT_NEGATIVE)), (_U_SINT)((result->errorCode)), (((void *)0)), (_U_UINT)41, UNITY_DISPLAY_STYLE_INT);

    freeError(result);

  }

}



void test_specialAdd_given_minus_5_and_51_should_throw_ERR_NUMBER_TOO_LARGE(){

  ErrorObject *result;



  { jmp_buf *PrevFrame, NewFrame; unsigned int MY_ID = (0); PrevFrame = CExceptionFrames[(0)].pFrame; CExceptionFrames[MY_ID].pFrame = (jmp_buf*)(&NewFrame); CExceptionFrames[MY_ID].Exception = ((void *)0); if (_setjmp(NewFrame) == 0) { if (1) {

    specialAdd(-5, 51);

    UnityFail( ("Expect ERR_NUMBER_TOO_LARGE to be thrown." " But none thrown."), (_U_UINT)52);

                                          ;

  }else { } CExceptionFrames[MY_ID].Exception = ((void *)0); } else { result = CExceptionFrames[MY_ID].Exception; result=result; } CExceptionFrames[MY_ID].pFrame = PrevFrame; } if (CExceptionFrames[(0)].Exception != ((void *)0)) {

    UnityAssertEqualString((const char*)("Hey! Something is really wrong here."), (const char*)(result->errorMsg), (((void *)0)), (_U_UINT)55)

                                               ;

    UnityAssertEqualNumber((_U_SINT)((ERR_NUMBER_TOO_LARGE)), (_U_SINT)((result->errorCode)), (((void *)0)), (_U_UINT)56, UNITY_DISPLAY_STYLE_INT);

    freeError(result);

  }

}
