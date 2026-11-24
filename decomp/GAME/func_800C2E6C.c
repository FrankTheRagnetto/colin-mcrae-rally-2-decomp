typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800E1D2C;

void func_800C2E6C(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 var_v1;

    if (arg1 >= 0xCCD) {
        var_v1 = func_80015140(arg1, 0xA0000) >> 0x10;
        if (var_v1 >= 0xA) {
            var_v1 = 9;
        }
        func_800C2B58(arg0, D_800E1D2C + var_v1, 0x10000, arg2);
    }
}
