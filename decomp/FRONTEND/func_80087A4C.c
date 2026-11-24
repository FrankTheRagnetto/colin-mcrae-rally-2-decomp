typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8006AF90;
extern M2C_UNK D_8008009C;
extern M2C_UNK D_8009CD1C;
extern M2C_UNK D_8009F32C;
extern M2C_UNK func_80083944;
extern M2C_UNK func_80085FD4;

void func_80087A4C(s32 arg0) {
    func_80046734(&D_8009F32C, 0, 0x40, 0, &D_8009CD1C, 0, 1, 0, 0);
    func_80046B24(&D_8009F32C, 0, 0xAE, &D_8008009C, -1);
    func_80046B24(&D_8009F32C, 0, 0xAF, &D_8008009C, -1);
    func_80046B24(&D_8009F32C, 0, 0xB0, &D_8008009C, -1);
    func_80046B24(&D_8009F32C, 0, 0xB1, &D_8008009C, -1);
    func_80046B24(&D_8009F32C, 0, 0xB2, &D_8008009C, -1);
    func_80046B24(&D_8009F32C, 0, 0xB3, &D_8008009C, -1);
    func_80046B24(&D_8009F32C, 0, 0xB4, &D_8008009C, -1);
    func_80046B24(&D_8009F32C, 0, 0xB5, &D_8008009C, -1);
    func_800470E4(&D_8009F32C, &func_80083944, &func_80085FD4, &D_8006AF90, 0);
    func_800470FC(&D_8009F32C, 0);
    M2C_FIELD(&D_8009F32C, s8 *, 0x1B) = (s8) (arg0 - 1);
}
