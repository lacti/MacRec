#pragma once

#define CONCAT2(a, b) a ## b
#define CONCAT(a, b) CONCAT2(a, b)

#define REPEAT_0(m)
#define REPEAT_1(m) m(0)
#define REPEAT_2(m) REPEAT_1(m), m(1)
#define REPEAT_3(m) REPEAT_2(m), m(2)
#define REPEAT_4(m) REPEAT_3(m), m(3)
#define REPEAT_5(m) REPEAT_4(m), m(4)
// ...
#define REPEAT(c, m) CONCAT(REPEAT_, c)(m)
#define REPEAT_PARAM(n) class T ## n
#define REPEAT_VAR(n) T ## n
#define REPEAT_NONE(n) none

#define SUB_50 5
#define SUB_51 4
#define SUB_52 3
#define SUB_53 2
#define SUB_54 1
#define SUB_55 0
#define SUB_40 4
#define SUB_41 3
#define SUB_42 2
#define SUB_43 1
#define SUB_44 0
#define SUB_30 3
#define SUB_31 2
#define SUB_32 1
#define SUB_33 0
#define SUB_20 2
#define SUB_21 1
#define SUB_22 0
#define SUB_10 1
#define SUB_11 0
#define SUB_00 0
#define SUB(a, b) CONCAT(CONCAT(SUB_, a), b)

#define COMMA_IF_NONZERO_0
#define COMMA_IF_NONZERO_1 ,
#define COMMA_IF_NONZERO_2 ,
#define COMMA_IF_NONZERO_3 ,
#define COMMA_IF_NONZERO_4 ,
#define COMMA_IF_NONZERO_5 ,
#define COMMA_IF_NONZERO(n) CONCAT(COMMA_IF_NONZERO_, n)
