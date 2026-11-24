typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
s32 VSync_v3(M2C_UNK);                              /* extern */
extern u8 D_8004BC88;
extern s32 D_8004BC8C;
extern s32 D_8004BC90;
extern u32 D_8004BC94;
extern u32 D_8004BC98;
extern M2C_UNK func_800474E8;

s32 func_80047408(void) {
    s32 temp_s0;
    s32 temp_v1;
    u32 temp_v1_2;

    temp_s0 = VSync_v3(-1);
    if (D_8004BC88 == 0) {
        D_8004BC8C = temp_s0;
        D_8004BC90 = temp_s0;
        D_8004BC94 = 0;
        D_8004BC98 = 0;
        D_8004BC88 = 1;
        func_8003408C(&func_800474E8, 0);
    }
    temp_v1 = temp_s0 - D_8004BC90;
    if (temp_v1 != 0) {
        temp_v1_2 = D_8004BC94 + temp_v1;
        D_8004BC94 = temp_v1_2;
        if (temp_v1_2 < (u32) D_8004BC98) {
            D_8004BC94 = D_8004BC98;
        } else {
            D_8004BC98 = temp_v1_2;
        }
    }
    D_8004BC90 = temp_s0;
    return (D_8004BC94 * 5) / 3;
}
