typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8007338C;
extern M2C_UNK D_8008A2C4;
extern M2C_UNK D_8008AFEC;
extern M2C_UNK D_8008B010;
extern M2C_UNK D_800A2EF8;
extern M2C_UNK D_800A3468;

void func_8008C674(void) {
    func_80046734(&D_800A3468, 0, 0x26, 0, &D_800A2EF8, 0, 1, 0, 1);
    func_80046B24(&D_800A3468, 0, 0xD2, &D_8008B010, 1);
    func_80046B24(&D_800A3468, 0, 0xD1, &D_8008B010, 0);
    func_800470E4(&D_800A3468, &D_8008A2C4, &D_8008AFEC, &D_8007338C, 0);
    func_800470FC(&D_800A3468, 0);
}
