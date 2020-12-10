#include <R.h>
#include <Rinternals.h>
#include <R_ext/Rdynload.h>
#include <R_ext/Visibility.h>

/* .Call calls */
extern SEXP R_get_native_enc(SEXP, SEXP, SEXP);

static const R_CallMethodDef CallEntries[] = {
  {"R_get_native_enc", (DL_FUNC) &R_get_native_enc, 0},
  {NULL, NULL, 0}
};

attribute_visible void R_init_icu(DllInfo *dll) {
  R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
  R_useDynamicSymbols(dll, FALSE);
}
