typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_80069B50;
extern M2C_UNK D_8009BCCC;
extern M2C_UNK D_8009CB4C;

void func_80089364(void) {
    func_80046734(&D_8009CB4C, 0, 0x84, 0, &D_8009BCCC, 0, 1, 0, 1);
    func_80046B24(&D_8009CB4C, 0, 0x82, 0, 0);
    func_800470E4(&D_8009CB4C, 0, 0, &D_80069B50, 0);
    func_800470FC(&D_8009CB4C, 0);
}
