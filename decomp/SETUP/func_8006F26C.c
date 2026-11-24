typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8005B5D0;
extern M2C_UNK D_8006E298;
extern M2C_UNK D_8006EE00;
extern M2C_UNK D_8006EE74;
extern M2C_UNK D_8006EE98;
extern M2C_UNK D_8006EEC0;
extern M2C_UNK D_8006EF1C;
extern M2C_UNK D_8007C200;
extern M2C_UNK func_8006D548;
extern M2C_UNK func_8006ED40;
extern M2C_UNK func_8006F080;

void func_8006F26C(void) {
    func_80046734(&D_8007C200, 0, -1, 0, &D_8007C200, 0, 1, 0, 0);
    func_8004681C(&D_8007C200, 0, 0x48, func_80067558(), 0, 0, 0, &D_8006EE74, 0);
    func_8004681C(&D_8007C200, 0, 0x47, 7, 0, 1, 0, &func_8006ED40 + 0x2C, 1);
    func_8004681C(&D_8007C200, 0, 0x46, 0xB, 0, 1, 0, &D_8006EE00, 2);
    func_8004681C(&D_8007C200, 0, 0x3C, 1, 0, 0, 0, &D_8006EE98, 3);
    if (!(func_8001CAE0() & 0xFF)) {
        func_80046B24(&D_8007C200, 0, 0xCF, &func_8006F080 + 0xC, -1);
    }
    func_8004681C(&D_8007C200, 0, 0x84, 2, 1, 1, 0, &D_8006EEC0, 5);
    func_800470E4(&D_8007C200, 0, &D_8006E298, &func_8006D548 + 0x128, &D_8006EF1C);
    func_800470FC(&D_8007C200, 0);
    func_8006EC14();
    func_8006DD34();
    func_8006DD3C();
    func_80039A94(&D_8005B5D0, (func_8001CBD0() << 0x10) / 100, 0x20, 0xA, 1);
    func_80046E80(&D_8007C200, 0, 0, 0, 0);
}
