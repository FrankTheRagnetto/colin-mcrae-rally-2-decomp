typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s8 D_80049E7C;

s32 func_80032814(void) {
    s32 var_s0;

    var_s0 = func_80030D6C();
    if (var_s0 > 0) {
        do {
            var_s0 -= 1;
            func_80030D38();
        } while (var_s0 > 0);
    }
    D_80049E7C = 0;
    return 1;
}
