#if !defined(IS_REPEATING)
#define SIZE 3
template <class R
    COMMA_IF_NONZERO(SIZE)
    REPEAT(SIZE, REPEAT_PARAM)>
struct test
{};
#define TARGET "test.h"
#define LIMIT SUB(SIZE, 1)
#include "repeater.h"
#else
template <class R
    COMMA_IF_NONZERO(CURRENT)
    REPEAT(CURRENT, REPEAT_PARAM)>
struct test<R
    COMMA_IF_NONZERO(CURRENT)
    REPEAT(CURRENT, REPEAT_VAR)
    COMMA_IF_NONZERO(SUB(SIZE, CURRENT))
    REPEAT(SUB(SIZE, CURRENT), REPEAT_NONE)>
{};
#endif