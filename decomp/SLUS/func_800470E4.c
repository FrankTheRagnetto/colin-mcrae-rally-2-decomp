typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
void func_800470E4(void *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(arg0, s32 *, 0x1B4) = arg1;
    M2C_FIELD(arg0, s32 *, 0x1B8) = arg2;
    M2C_FIELD(arg0, s32 *, 0x1BC) = arg3;
    M2C_FIELD(arg0, s32 *, 0x1C0) = arg4;
}
