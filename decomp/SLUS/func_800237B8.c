typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
void func_800237B8(void *arg0, void *arg1) {
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    M2C_FIELD(arg0, s32 *, 4) = (s32) M2C_FIELD(arg1, s32 *, 4);
    temp_v0 = (M2C_FIELD(arg0, s32 *, 0) & ~0xF) | (M2C_FIELD(arg1, s32 *, 0) & 0xF);
    M2C_FIELD(arg0, s32 *, 0) = temp_v0;
    temp_v0_2 = (temp_v0 & ~0xF0) | ((u8) M2C_FIELD(arg1, s32 *, 0) & 0xF0);
    M2C_FIELD(arg0, s32 *, 0) = temp_v0_2;
    temp_v0_3 = (temp_v0_2 & ~0x300) | (M2C_FIELD(arg1, s32 *, 0) & 0x300);
    M2C_FIELD(arg0, s32 *, 0) = temp_v0_3;
    M2C_FIELD(arg0, s32 *, 0) = (s32) ((temp_v0_3 & ~0x3C00) | (M2C_FIELD(arg1, s32 *, 0) & 0x3C00));
}
