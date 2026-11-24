typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800E1D34;

void func_800C2ED8(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 var_v1;

    var_v1 = 0;
    switch (arg1) {                                 /* irregular */
    case 0:
        var_v1 = func_80034280() % 2;
        break;
    case 2:
        var_v1 = 2;
        break;
    }
    func_800C2B58(arg0, D_800E1D34 + var_v1, 0x10000, arg2);
}
