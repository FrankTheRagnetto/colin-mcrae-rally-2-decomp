typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_8004B33C;
extern s32 D_8004B344;

void func_8003D7CC(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        D_8004B344 = arg1;
        D_8004B33C = arg0;
        return;
    }
    D_8004B344 = 0;
    D_8004B33C = 0;
}
