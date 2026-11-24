typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern void *D_80049A00;

void func_80025140(s8 arg0, s8 arg1) {
    M2C_FIELD(D_80049A00, s8 *, 0x4158) = arg0;
    M2C_FIELD(D_80049A00, s8 *, 0x4159) = arg1;
}
