#define R_NO_REMAP
#include <R.h>
#include <Rinternals.h>

#include <unicode/utypes.h>
#include <unicode/ucnv.h>

const char* lookup_native_enc(){
  UErrorCode status = U_ZERO_ERROR;
  UConverter* conv = ucnv_open(NULL, &status);
  return ucnv_getName(conv, &status);
}

SEXP R_get_native_enc(){
  return Rf_mkString(lookup_native_enc());
}
