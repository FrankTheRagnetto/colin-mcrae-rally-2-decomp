typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
void func_80092BD4(void *arg0, void *arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x2C) > 0x77FFF) {
        M2C_FIELD(arg0, u8 *, 0x3A) = (u8) M2C_FIELD(arg1, u8 *, 0x2E);
    }
}
