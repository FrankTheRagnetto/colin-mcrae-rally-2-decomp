typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern void *D_80049A00;
extern M2C_UNK D_800D71A4;
extern M2C_UNK D_800DED5C;

void func_800B33C0(void) {
    M2C_FIELD(&D_800DED5C, s16 *, 0) = 0;
    M2C_FIELD(&D_800DED5C, s16 *, 2) = 0;
    M2C_FIELD(&D_800DED5C, u16 *, 4) = (u16) M2C_FIELD(D_80049A00, u16 *, 4);
    M2C_FIELD(&D_800DED5C, u16 *, 6) = (u16) M2C_FIELD(D_80049A00, u16 *, 6);
    func_8001C434(0);
    func_80036394(D_80049A00 + 0x38, &D_800DED5C, &D_800D71A4, 0);
    func_80036394(D_80049A00 + 0x38, &D_800DED5C, &D_800D71A4, 0);
}
