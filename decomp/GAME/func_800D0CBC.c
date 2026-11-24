typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"

s32 func_800D0CBC(s32 arg0, s32 arg1) {
    if ((!(func_800212B0() & 0xFF) || !(func_8001CE08() & 0xFF)) && (!(func_8001CAE0() & 0xFF) || ((func_8001CAE0() & 0xFF) == 1) || ((func_8001CAE0() & 0xFF) == 2) || ((func_8001CAE0() & 0xFF) == 3))) {
        if (arg0 != arg1) {
            return (func_80021298() & 0xFF) != 0;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
        return 1;
    }
    return 1;
}
