typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"

void func_80099F44(s32 arg0, M2C_UNK arg1, s32 arg2, s32 arg3) {
    func_80099F80(arg0 & 0xFF, 0xF0000, arg1, 3, arg2, arg3 & 0xFF);
}
