typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800E4204;
extern s32 D_800E4208;
extern s32 D_800E424C;
extern s32 D_800E4250;

void func_800D6894(s32 *arg0, s32 *arg1, s32 *arg2, s32 *arg3) {
    *arg0 = D_800E4204;
    *arg1 = D_800E4208;
    *arg2 = D_800E424C << 0x10;
    *arg3 = D_800E4250 << 0x10;
}
