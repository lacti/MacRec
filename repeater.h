#if !defined(IS_REPEATING)
#define IS_REPEATING 1
#include "repeater.h"
#else
#if !defined(CURRENT)
#   define CURRENT 0
#   include "repeater.h"
#elif CURRENT <= LIMIT
#   include TARGET
#   if CURRENT == 0
#       undef CURRENT
#       define CURRENT 1
#   elif CURRENT == 1
#       undef CURRENT
#       define CURRENT 2
#   elif CURRENT == 2
#       undef CURRENT
#       define CURRENT 3
#   elif CURRENT == 3
#       undef CURRENT
#       define CURRENT 4
#   elif CURRENT == 5
#       undef CURRENT
#   endif
#   include "repeater.h"
#else
#   undef IS_REPEATING
#endif
#endif