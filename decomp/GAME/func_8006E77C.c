typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s8 D_800D6BF1;
extern u8 D_800D6BF2;

void func_8006E77C(s32 arg0) {
    if (arg0 & 0xFF) {
        D_800D6BF1 = 1;
    }
    D_800D6BF2 += 1;
}
