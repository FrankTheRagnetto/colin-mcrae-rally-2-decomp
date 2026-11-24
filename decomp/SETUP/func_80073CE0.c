typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8007CD80;

void func_80073CE0(s32 arg0, s32 arg1, s32 arg2) {
    void *temp_s0;

    temp_s0 = (__typeof__(D_8007CD80) *)((char *)(__typeof__(D_8007CD80) *)((char *)&D_8007CD80 + (arg0 * 0x14)));
    M2C_FIELD(temp_s0, s32 *, 8) = func_80047408();
    M2C_FIELD(temp_s0, s32 *, 4) = arg1;
    M2C_FIELD(temp_s0, s32 *, 0) = 0;
    M2C_FIELD(temp_s0, s32 *, 0xC) = 1;
    M2C_FIELD(temp_s0, s32 *, 0x10) = arg2;
}
