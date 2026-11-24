typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"

void func_800CCDE0(s32 arg0, M2C_UNK arg1) {
    if (func_800C9FE8() & 0xFF) {
        func_800CCF40(arg0, arg1);
    }
    if (func_800CA054(arg0) & 0xFF) {
        func_800CCF9C(arg0, arg1);
    }
}
