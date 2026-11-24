typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8006DC54;
extern M2C_UNK D_80084974;
extern M2C_UNK D_80084A1C;
extern M2C_UNK D_80084AB4;
extern M2C_UNK D_80084B84;
extern M2C_UNK D_800A071C;
extern M2C_UNK D_800A08EC;

void func_80088800(void) {
    func_80046734(&D_800A08EC, 0, 0x8D, 0, &D_800A071C, 0, 1, 0, 1);
    func_8004681C(&D_800A08EC, 0, -1, 0xFF, 0x64, 1, 0, 0, 0);
    func_8004681C(&D_800A08EC, 0, -1, 0xC, 0, 1, 0, 0, 1);
    func_8004681C(&D_800A08EC, 0, -1, 0x1F, 0, 1, 0, 0, 2);
    func_80046B24(&D_800A08EC, 0, 0x67, &D_80084974, -1);
    func_800470E4(&D_800A08EC, &D_80084AB4, &D_80084A1C, &D_8006DC54, &D_80084B84);
    func_800470FC(&D_800A08EC, 0);
}
