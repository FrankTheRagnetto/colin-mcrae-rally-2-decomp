typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern u8 D_8004A028;
extern u8 D_8004A029;
extern M2C_UNK D_8004A02C;
extern s32 D_8004A06C;
extern s32 D_8004A070;
extern s32 D_8004A074;

void func_80039E58(void) {
    if ((D_8004A028 == 0) && (D_8004A029 != 0)) {
        func_80039A94(&D_8004A02C, D_8004A06C, D_8004A070, D_8004A074, 1);
        D_8004A029 = 0;
    }
}
