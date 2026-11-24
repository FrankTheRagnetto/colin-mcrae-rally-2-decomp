typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_80077914;
extern M2C_UNK D_80085684;
extern M2C_UNK D_800857A4;
extern M2C_UNK D_800858A4;
extern M2C_UNK D_8009D28C;
extern M2C_UNK D_8009D9CC;

void func_80086C4C(void) {
    func_80046734(&D_8009D9CC, 0, 0x15, 0, &D_8009D28C, 0, 1, 0, 1);
    func_8004681C(&D_8009D9CC, 0, 0x5E, 0xB, 0xA, 0, 0, 0, 0);
    func_8004681C(&D_8009D9CC, 0, 0x5F, 0xB, 0xA, 0, 0, 0, 1);
    func_8004681C(&D_8009D9CC, 0, 0x60, 0xB, 0xA, 0, 0, 0, 2);
    func_8004681C(&D_8009D9CC, 0, 0x61, 2, 0, 0, 0, 0, 3);
    func_80046D4C(&D_8009D9CC, 0, 0x67, M2C_FIELD(&D_8009D9CC, s32 *, 8), 0, 4);
    func_800470E4(&D_8009D9CC, &D_80085684, &D_800858A4, &D_80077914, &D_800857A4);
    func_800470FC(&D_8009D9CC, 0);
}
