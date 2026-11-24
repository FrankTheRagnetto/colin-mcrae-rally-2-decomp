typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8007C5BC;
extern M2C_UNK D_80085BC4;
extern M2C_UNK D_80085CC8;
extern M2C_UNK D_8009C06C;
extern M2C_UNK D_8009C5DC;

void func_80087434(void) {
    func_80046734(&D_8009C5DC, 0, 0x14D, 0, &D_8009C06C, 0, 1, 0, 0);
    func_80046B24(&D_8009C5DC, 0, 0x27, 0, -1);
    func_80046B24(&D_8009C5DC, 0, 0x28, 0, -1);
    func_80046B24(&D_8009C5DC, 0, 0x29, 0, -1);
    func_80046B24(&D_8009C5DC, 0, 0x2A, 0, -1);
    func_80046B24(&D_8009C5DC, 0, 0x2B, 0, -1);
    func_80046B24(&D_8009C5DC, 0, 0x2C, 0, -1);
    func_80046B24(&D_8009C5DC, 0, 0x2D, 0, -1);
    func_80046B24(&D_8009C5DC, 0, 0x2E, 0, -1);
    func_800470E4(&D_8009C5DC, &D_80085BC4, &D_80085CC8, &D_8007C5BC, 0);
    func_800470FC(&D_8009C5DC, 0);
    M2C_FIELD(&D_8009C5DC, s32 *, 0x14) = (s32) (M2C_FIELD(&D_8009C5DC, s32 *, 0x14) | 0x80000);
    M2C_FIELD(&D_8009C5DC, s32 *, 0x28) = (s32) (M2C_FIELD(&D_8009C5DC, s32 *, 0x28) | 0x80000);
    M2C_FIELD(&D_8009C5DC, s32 *, 0x3C) = (s32) (M2C_FIELD(&D_8009C5DC, s32 *, 0x3C) | 0x80000);
    M2C_FIELD(&D_8009C5DC, s32 *, 0x50) = (s32) (M2C_FIELD(&D_8009C5DC, s32 *, 0x50) | 0x80000);
    M2C_FIELD(&D_8009C5DC, s32 *, 0x64) = (s32) (M2C_FIELD(&D_8009C5DC, s32 *, 0x64) | 0x80000);
    M2C_FIELD(&D_8009C5DC, s32 *, 0x78) = (s32) (M2C_FIELD(&D_8009C5DC, s32 *, 0x78) | 0x80000);
    M2C_FIELD(&D_8009C5DC, s32 *, 0x8C) = (s32) (M2C_FIELD(&D_8009C5DC, s32 *, 0x8C) | 0x80000);
    M2C_FIELD(&D_8009C5DC, s32 *, 0xA0) = (s32) (M2C_FIELD(&D_8009C5DC, s32 *, 0xA0) | 0x80000);
}
