typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_800DA4FC;
extern M2C_UNK D_800DA500;
extern M2C_UNK D_800DA504;
extern M2C_UNK D_800DA514;

void func_8007413C(void) {
    func_800342B0(0x190);
    M2C_FIELD(&D_800DA504, s8 *, 0) = 4;
    M2C_FIELD(&D_800DA504, s8 *, 1) = 5;
    M2C_FIELD(&D_800DA504, s8 *, 2) = 6;
    M2C_FIELD(&D_800DA504, s8 *, 3) = 7;
    M2C_FIELD(&D_800DA514, s32 *, 0) = 0x8000;
    M2C_FIELD(&D_800DA514, s32 *, 4) = 0x8000;
    M2C_FIELD(&D_800DA514, s32 *, 8) = 0x8000;
    M2C_FIELD(&D_800DA514, s32 *, 0xC) = 0x3333;
    M2C_FIELD(&D_800DA500, s8 *, 0) = 0x16;
    M2C_FIELD(&D_800DA500, s8 *, 1) = 0x14;
    M2C_FIELD(&D_800DA500, s8 *, 2) = 0x15;
    M2C_FIELD(&D_800DA500, s8 *, 3) = 0x12;
    M2C_FIELD(&D_800DA4FC, s8 *, 0) = 1;
    M2C_FIELD(&D_800DA4FC, s8 *, 1) = 2;
}
