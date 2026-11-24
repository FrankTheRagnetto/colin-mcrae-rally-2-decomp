typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8006AF90;
extern M2C_UNK D_8008009C;
extern M2C_UNK D_80085EE4;
extern M2C_UNK D_8009EBEC;
extern M2C_UNK D_8009F4FC;
extern M2C_UNK func_80085FD4;

void func_800875EC(s32 arg0) {
    func_80046734(&D_8009EBEC, 0, 0x1C, 0, &D_8009F4FC, 0, 1, 0, 0);
    func_80046B24(&D_8009EBEC, 0, 0xAE, &D_8008009C, -1);
    func_80046B24(&D_8009EBEC, 0, 0xAF, &D_8008009C, -1);
    func_80046B24(&D_8009EBEC, 0, 0xB0, &D_8008009C, -1);
    func_80046B24(&D_8009EBEC, 0, 0xB1, &D_8008009C, -1);
    func_800470E4(&D_8009EBEC, &D_80085EE4, &func_80085FD4, &D_8006AF90, 0);
    func_800470FC(&D_8009EBEC, 0);
    M2C_FIELD(&D_8009EBEC, s8 *, 0x1B) = (s8) (arg0 - 1);
}
