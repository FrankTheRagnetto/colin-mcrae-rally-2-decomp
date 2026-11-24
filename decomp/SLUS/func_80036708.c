typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s8 D_80049F00;
extern s32 D_80049F04;
extern s32 D_80049F08;

void func_80036708(s8 arg0, s32 arg1, s32 arg2) {
    D_80049F00 = arg0;
    D_80049F04 = arg1;
    D_80049F08 = arg2;
}
