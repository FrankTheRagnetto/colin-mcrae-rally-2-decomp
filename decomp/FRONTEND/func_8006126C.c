typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
s32 func_8006126C(u32 arg0) {
    s32 var_a1;
    s32 var_v1;
    u32 var_a0;

    var_a0 = arg0;
    var_a1 = 0;
    var_v1 = 0x1F;
    do {
        if (var_a0 & 1) {
            var_a1 += 1;
        }
        var_v1 -= 1;
        var_a0 = var_a0 >> 1;
    } while (var_v1 >= 0);
    return var_a1 & 0xFF;
}
