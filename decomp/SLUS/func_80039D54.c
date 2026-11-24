typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern u8 D_8004A01C;
extern u8 D_8004A028;
extern s8 D_8004A029;
extern M2C_UNK D_8005A05C;
extern M2C_UNK func_80039984;

void func_80039D54(void) {
    s32 temp_v0;

    if (D_8004A028 != 0) {
        temp_v0 = func_8003F97C(0);
        if (temp_v0 != &func_80039984) {
            func_8003F97C(temp_v0);
        }
        M2C_FIELD(&D_8005A05C, s32 *, 0) = 0x2C0;
        M2C_FIELD(&D_8005A05C, s32 *, 0x18) = 1;
        M2C_FIELD(&D_8005A05C, s16 *, 0x10) = 0;
        M2C_FIELD(&D_8005A05C, s16 *, 0x12) = 0;
        func_8003A900(&D_8005A05C);
        D_8004A01C &= 0x80;
        func_8003A3B0(0xE, &D_8004A01C, 0);
    }
    D_8004A028 = 0;
    D_8004A029 = 0;
}
