typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_800DADF4;

void func_8007ED54(u8 *arg0, s32 arg1) {
    s32 *temp_v1;
    s32 temp_v0;

    if (arg1 > 0) {
        temp_v1 = (__typeof__(D_800DADF4) *)((char *)(__typeof__(D_800DADF4) *)((char *)&D_800DADF4 + (*arg0 * 4)));
        temp_v0 = *temp_v1 + arg1;
        *temp_v1 = temp_v0;
        if (temp_v0 > 0x10000) {
            *temp_v1 = 0x10000;
        }
    }
}
