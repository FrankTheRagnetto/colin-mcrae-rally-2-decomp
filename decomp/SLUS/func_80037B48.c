typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
void func_80037B48(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x37) = 0x43;
    M2C_FIELD(arg0, void **, 0x2C) = (void *) (arg0 + 0x24);
    M2C_FIELD(arg0, s8 *, 0x24) = arg1;
    M2C_FIELD(arg0, s8 *, 0x36) = 1;
}
