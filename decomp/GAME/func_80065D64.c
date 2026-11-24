typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_800613FC;
extern M2C_UNK D_8006155C;
extern M2C_UNK D_800616B8;
extern M2C_UNK D_80063014;
extern M2C_UNK D_800D91AC;
extern M2C_UNK D_800D954C;

void func_80065D64(void) {
    func_80046734(&D_800D954C, 0, 0, 0, &D_800D91AC, 0, 1, 0, 1);
    func_8004681C(&D_800D954C, 0, 0x19, 0xB, 0xA, 0, 0, 0, 0);
    func_8004681C(&D_800D954C, 0, 0x1A, 0xB, 0xA, 0, 0, 0, 1);
    if (func_80091F90() & 0xFF) {
        func_8004681C(&D_800D954C, 0, 0x1B, 0xB, 0xA, 0, 0, 0, 2);
    }
    func_8004681C(&D_800D954C, 0, 0x1C, 2, 0, 0, 0, 0, 3);
    func_80046D4C(&D_800D954C, 0, 0x3B, &D_800D91AC, 0, 4);
    func_800470E4(&D_800D954C, &D_800613FC, &D_8006155C, &D_80063014, &D_800616B8);
    func_800470FC(&D_800D954C, 0);
}
