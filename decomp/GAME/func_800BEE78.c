typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"

void func_800BEE78(void **arg0, M2C_UNK arg1) {
    void *temp_a0;

    if (!(func_800A50F0(&arg0) & 0xFF)) {
        func_800A514C(&arg0, arg1, 1);
        if ((M2C_FIELD(func_800A3060(arg1), u8 *, 0xB1C) == 0) && (func_80021120() == 1)) {
            temp_a0 = *arg0;
            M2C_FIELD(temp_a0, s32 *, 8) = (s32) (M2C_FIELD(temp_a0, s32 *, 8) + 0x03E80000);
        }
    }
}
