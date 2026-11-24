typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s8 D_8004BC81;
extern s32 D_8005AD5C;
extern s8 D_8005AD60;
extern s8 D_8005AD62;

void func_800472A0(void) {
    D_8004BC81 = 0;
    D_8005AD60 = 1;
    D_8005AD62 = 0;
    D_8005AD5C = 0;
}
