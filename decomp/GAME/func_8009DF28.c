typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800D6EC4;

void func_8009DF28(void *arg0) {
    if (func_80015140(0x80000, D_800D6EC4) < M2C_FIELD(arg0, s32 *, 0)) {
        M2C_FIELD(arg0, s32 *, 0) = func_80015140(0x80000, D_800D6EC4);
    } else if (M2C_FIELD(arg0, s32 *, 0) < -func_80015140(0x80000, D_800D6EC4)) {
        M2C_FIELD(arg0, s32 *, 0) = (s32) -func_80015140(0x80000, D_800D6EC4);
    }
    if (func_80015140(0x40000, D_800D6EC4) < M2C_FIELD(arg0, s32 *, 4)) {
        M2C_FIELD(arg0, s32 *, 4) = func_80015140(0x40000, D_800D6EC4);
    } else if (M2C_FIELD(arg0, s32 *, 4) < -func_80015140(0x40000, D_800D6EC4)) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) -func_80015140(0x40000, D_800D6EC4);
    }
    if (func_80015140(0x80000, D_800D6EC4) < M2C_FIELD(arg0, s32 *, 8)) {
        M2C_FIELD(arg0, s32 *, 8) = func_80015140(0x80000, D_800D6EC4);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 8) < -func_80015140(0x80000, D_800D6EC4)) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) -func_80015140(0x80000, D_800D6EC4);
    }
}
