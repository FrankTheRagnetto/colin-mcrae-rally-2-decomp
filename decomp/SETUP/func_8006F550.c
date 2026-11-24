typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8006DD84;
extern M2C_UNK D_8006EF1C;
extern M2C_UNK D_8007C200;
extern M2C_UNK D_8007C5A0;
extern M2C_UNK func_8006ED40;

void func_8006F550(void) {
    func_80046734(&D_8007C5A0, 0, -1, 0, &D_8007C200, 0, 1, 0, 0);
    func_800470E4(&D_8007C5A0, 0, &func_8006ED40 + 0x24, &D_8006DD84, &D_8006EF1C);
    func_800470FC(&D_8007C5A0, 0);
    func_80046E80(&D_8007C5A0, 0, 0, 0, 1);
}
