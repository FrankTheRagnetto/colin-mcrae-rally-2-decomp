typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK *D_800D724C;
extern s8 D_800D7252;
extern M2C_UNK D_800E1558;
extern M2C_UNK D_800E1728;
extern M2C_UNK func_800FA668;
extern M2C_UNK func_800FAC08;
extern M2C_UNK func_800FC13C;
extern M2C_UNK func_800FC14C;

void func_800F8ACC(void) {
    D_800D724C = &D_800E1558;
    func_80046734(&D_800E1558, 0, 0, 0, 0, 0, 1, 0, 1);
    func_80046B24(&D_800E1558, 0, 0x13, &func_800FC13C, 0);
    func_80046D4C(&D_800E1558, 0, 0x63, &D_800E1728, 0, 1);
    func_800470E4(&D_800E1558, 0, 0, &func_800FAC08, 0);
    func_800470FC(&D_800E1558, 0);
    func_80046734(&D_800E1728, 0, 0, 0, 0, 0, 1, 0, 1);
    func_80046B24(&D_800E1728, 0, 0x72, &func_800FC14C, 0);
    func_80046D4C(&D_800E1728, 0, 0x73, &D_800E1558, 0, 1);
    func_800470E4(&D_800E1728, 0, 0, &func_800FA668, 0);
    func_800470FC(&D_800E1728, 0);
    D_800D7252 = 1;
}
