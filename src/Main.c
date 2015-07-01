#include <malloc.h>
#include "Main.h"
#include "ErrorObject.h"
#include "CException.h"

int shouldFail = 1;

void doThings(){
//  ErrorObject *err;
 
//  Try{
    doSomething();
//  } Catch(err)
//  {
//   printf("Error: %s\n", err->errorMsg);
//    freeError(err);
//  }
}
  
int doSomething(){
  if(shouldFail){
    ThrowError("Hey! Something is really wrong here.", \
               ERR_DUNNO_WHAT_HAPPEN);
  }
  return 1;
}

/**
 * Add two numbers. The first number must be negative.
 * The second number must be positive no more than 50.
 */
int specialAdd(int negVal, int posVal){
  int result;
  
  if(negVal>0){
    ThrowError("Hey! Something is really wrong here.", \
               ERR_NUMBER_NOT_NEGATIVE);
  }
  
  if(posVal<0){
    ThrowError("Hey! Something is really wrong here.", \
               ERR_NUMBER_NOT_POSITIVE);
  }
  
  if(posVal>50){
    ThrowError("Hey! Something is really wrong here.", \
               ERR_NUMBER_TOO_LARGE);
  }
  
  else
    result = negVal + posVal;
  return result;
               
}
