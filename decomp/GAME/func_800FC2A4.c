typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
s32 func_800FC2A4(u32 *arg0) {
    u32 temp_a0;

    temp_a0 = *arg0;
    if (((temp_a0 & 0x1F) == 0x1F) || (((temp_a0 >> 5) & 0x1F) == 0x1F)) {
        return 1;
    }
    return 0;
}
