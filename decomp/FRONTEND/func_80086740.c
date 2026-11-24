typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_800691E8;
extern M2C_UNK D_80086248;
extern M2C_UNK D_80086268;
extern M2C_UNK D_8009B92C;
extern M2C_UNK D_8009BCCC;
extern M2C_UNK D_8009BE9C;
extern M2C_UNK D_8009C06C;
extern M2C_UNK D_8009CB4C;

void func_80086740(void) {
    func_80046734(&D_8009BCCC, 0, 0x59, 0, &D_8009B92C, 0, 1, 0, 1);
    func_80046D4C(&D_8009BCCC, 0, 0x5A, &D_8009BE9C, 0, -1);
    func_80046D4C(&D_8009BCCC, 0, 0x82, &D_8009C06C, 0, -1);
    func_80046D4C(&D_8009BCCC, 0, 0x84, &D_8009CB4C, 0, -1);
    func_80046B24(&D_8009BCCC, 0, 0x169, &D_80086248, -1);
    func_800470E4(&D_8009BCCC, &D_80086268, 0, &D_800691E8, 0);
    func_800470FC(&D_8009BCCC, 0);
}
