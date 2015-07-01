#include <malloc.h>
#include "ErrorObject.h"
#include "CException.h"

void ThrowError(char *message, ErrorCode errCode){
  ErrorObject *errorObj = malloc(sizeof(ErrorObject));
  errorObj->errorMsg = message;
  errorObj->errorCode = errCode;
  Throw(errorObj);
}

void freeError(ErrorObject *errorObj){
  free(errorObj);
}
