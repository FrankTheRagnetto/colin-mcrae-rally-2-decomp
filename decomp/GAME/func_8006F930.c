typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"

void func_8006F930(s32 arg0) {
    if (func_800C9FC4() & 0xFF) {
        if (func_800C9FE8(arg0) & 0xFF) {
            func_8006F46C(arg0);
        }
        if (func_800CA00C(arg0) & 0xFF) {
            func_800E8664(arg0);
        }
        if (func_800CA054(arg0) & 0xFF) {
            func_8006F9B4(arg0);
        }
    }
}
