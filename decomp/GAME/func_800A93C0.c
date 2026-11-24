typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"

void func_800A93C0(s32 arg0, s32 arg1) {
    s32 temp_v0;
    void *temp_v0_2;

    temp_v0 = func_8001E908((func_8006E7E0() + arg0) & 0xFF);
    if (temp_v0 != 0) {
        temp_v0_2 = temp_v0 + (arg1 * 4);
        M2C_FIELD(temp_v0_2, s32 *, 0x80) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 0x60) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 0x70) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 0x20) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 0) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 0x10) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 0x50) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 0x40) = 0;
        M2C_FIELD(temp_v0_2, s32 *, 0x30) = 0;
        func_8001EC9C(arg0 + (func_8006E7E0() & 0xFF));
        func_800A72EC(arg0, arg1, 0, 0);
    }
}
