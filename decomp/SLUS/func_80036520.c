typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
void func_80036520(void *arg0, s32 arg1) {
    s32 var_a1;

    var_a1 = arg1;
    if (var_a1 == 0xFF) {
        var_a1 = 0;
    }
    M2C_FIELD(arg0, u16 *, 6) = (u16) ((M2C_FIELD(arg0, u16 *, 6) & 0xFF9F) | (var_a1 << 5));
}
