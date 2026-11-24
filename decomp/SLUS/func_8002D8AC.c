typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
void func_8002D8AC(void *arg0, s8 arg1, s32 arg2) {
    M2C_FIELD(arg0, s8 *, 0xB4) = arg1;
    M2C_FIELD(arg0, s32 *, 0x10) = arg2;
}
