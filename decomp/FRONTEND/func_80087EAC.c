typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8006B604;
extern M2C_UNK D_80084388;
extern M2C_UNK D_800843B0;
extern M2C_UNK D_8009CD1C;
extern M2C_UNK D_8009FA6C;
extern M2C_UNK D_800A13CC;

void func_80087EAC(void) {
    func_80046734(&D_8009FA6C, 0, 0x41, 0, &D_8009CD1C, 0, 1, 0, 1);
    func_80046D4C(&D_8009FA6C, 0, 0x42, &D_800A13CC, &D_800843B0, -1);
    func_80046D4C(&D_8009FA6C, 0, 0xB9, &D_800A13CC, &D_800843B0, -1);
    func_80046D4C(&D_8009FA6C, 0, 0xBA, &D_800A13CC, &D_800843B0, -1);
    func_80046D4C(&D_8009FA6C, 0, 0xBB, &D_800A13CC, &D_800843B0, -1);
    func_800470E4(&D_8009FA6C, &D_80084388, 0, &D_8006B604, 0);
    func_800470FC(&D_8009FA6C, 0);
}
