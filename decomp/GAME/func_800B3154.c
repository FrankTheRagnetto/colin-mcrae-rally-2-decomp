typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800D71C8;
extern u8 D_800E11CC;

void func_800B3154(void) {
    if (!(func_80047EA4(&D_800E11CC) & 0xFF) && (D_800D71C8 == 0)) {
        func_80047BC8(&D_800E11CC, 0, 0xC8, 0, 0, 0x10000, 1);
    }
    if (func_80047EA4(&D_800E11CC) & 0xFF) {
        D_800D71C8 = func_800479E8(D_800E11CC);
    }
}
