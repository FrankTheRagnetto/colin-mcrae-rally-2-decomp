typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
void func_800A945C(void *arg0) {
    u32 temp_v0;

    temp_v0 = M2C_FIELD(arg0, u32 *, 0x34);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) (M2C_FIELD(arg0, s32 *, 0x14) + ((s32) (temp_v0 + (temp_v0 >> 0x1F)) >> 1));
}
