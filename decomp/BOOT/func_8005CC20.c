typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 *D_8005D028;
extern s32 *D_8005D02C;
extern s32 *D_8005D030;
extern s32 *D_8005D054;

void func_8005CC20(s32 arg0, u32 arg1) {
    func_8005CD40();
    *D_8005D054 |= 0x88;
    *D_8005D030 = 0;
    *D_8005D028 = arg0;
    *D_8005D02C = ((arg1 >> 5) << 0x10) | 0x20;
    *D_8005D030 = 0x01000200;
}
