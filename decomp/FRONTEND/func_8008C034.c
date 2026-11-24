typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_80071B54;
extern M2C_UNK D_80084F58;
extern M2C_UNK D_8008B054;
extern M2C_UNK D_800A3638;
extern M2C_UNK D_800A39D8;
extern M2C_UNK func_80085384;

void func_8008C034(void) {
    func_80046734(&D_800A39D8, 0, 0x190, 0, &D_800A3638, 0, 1, 0, 1);
    func_8004681C(&D_800A39D8, 0, -1, 0xA, 0, 0, 0, 0, 0);
    func_8004681C(&D_800A39D8, 0, -1, 5, 0, 0, 0, 0, 1);
    func_80046B24(&D_800A39D8, 0, 0x67, &D_80084F58, -1);
    func_800470E4(&D_800A39D8, &func_80085384 + 0xC, &D_8008B054, &D_80071B54, 0);
    func_800470FC(&D_800A39D8, 0);
}
