typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_8005AD68;
extern s32 D_8005AD6C;
extern s32 D_8005AD70;
extern s32 D_8005AD74;
extern s32 D_8005AD78;

void func_800472C8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    D_8005AD74 = arg0;
    D_8005AD68 = arg1;
    D_8005AD70 = arg2;
    D_8005AD78 = arg3;
    D_8005AD6C = arg4;
}
