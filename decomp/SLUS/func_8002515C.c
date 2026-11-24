typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
s32 VSync_v3(M2C_UNK);                              /* extern */
extern s32 D_800499F0;
extern s32 D_800499F8;

void func_8002515C(s32 arg0) {
    D_800499F8 = arg0;
    D_800499F0 = VSync_v3(-1);
}
