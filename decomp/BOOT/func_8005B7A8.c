typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"

void func_8005B7A8(u8 *arg0) {
    s32 var_s0;

    var_s0 = 0;
    if (*arg0 != 0) {
        do {
            func_8003440C(arg0, var_s0 & 0xFF, 0, 2);
            var_s0 += 1;
        } while ((u32) (var_s0 & 0xFF) < (u8) *arg0);
    }
}
