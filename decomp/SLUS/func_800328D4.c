typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s8 D_80049E88;
extern s8 D_80049E89;

void func_800328D4(s8 arg0, s8 arg1) {
    D_80049E88 = arg0;
    D_80049E89 = arg1;
}
