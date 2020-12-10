#include <unicode/uvernum.h>
#ifdef U_ICU_VERSION_MAJOR_NUM
#if U_ICU_VERSION_MAJOR_NUM < 55
#error Your version of libicu is too old!
#endif
#endif
