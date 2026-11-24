typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"

void func_800B7E5C(s32 arg0) {
    if (((func_8001CAE0() & 0xFF) == 6) || ((func_8001CAE0() & 0xFF) == 5) || (func_80021298() & 0xFF)) {
        func_800F7AAC(arg0);
        return;
    }
    func_800B4EA8(arg0);
}
