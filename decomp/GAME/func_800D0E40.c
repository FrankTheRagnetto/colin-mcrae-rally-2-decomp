typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"

s32 func_800D0E40(void) {
    if (!(func_8001CAE0() & 0xFF) || ((func_8001CAE0() & 0xFF) == 1) || ((func_8001CAE0() & 0xFF) == 2) || ((func_8001CAE0() & 0xFF) == 3)) {
        return (func_80021298() & 0xFF) != 0;
    }
    return 1;
}
