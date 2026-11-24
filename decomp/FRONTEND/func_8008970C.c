typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8007CFC8;
extern M2C_UNK D_80085CEC;
extern M2C_UNK D_80085DF0;
extern M2C_UNK D_80086208;
extern M2C_UNK D_8009DB9C;
extern M2C_UNK D_8009E2DC;

void func_8008970C(void) {
    func_80046734(&D_8009E2DC, 0, 0x14E, 0, &D_8009DB9C, 0, 1, 0, 0);
    func_80046B24(&D_8009E2DC, 0, 0xD2, &D_80086208, -1);
    func_80046B24(&D_8009E2DC, 0, 0xD1, &D_80086208, -1);
    func_800470E4(&D_8009E2DC, &D_80085CEC, &D_80085DF0, &D_8007CFC8, 0);
    func_800470FC(&D_8009E2DC, 0);
}
