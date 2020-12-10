#ifndef UCNV_H
#define UCNV_H

#include <unicode/utypes.h>
#include <unicode/ucnv-err.h>

UConverter* ucnv_open(const char *converterName, UErrorCode *err);

const char* ucnv_getName(const UConverter *converter, UErrorCode *err);

#endif
