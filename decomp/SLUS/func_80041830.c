typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 *D_8004B744;

void func_80041830(void) {
    *D_8004B744 = (*D_8004B744 & 0xF0FFFFFF) | 0x22000000;
}
