typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_800703BC;
extern M2C_UNK D_80080CC0;
extern M2C_UNK D_80081D18;
extern M2C_UNK D_80084180;
extern M2C_UNK D_80084428;
extern M2C_UNK D_800846A8;
extern M2C_UNK D_800A01AC;
extern M2C_UNK D_800A037C;
extern M2C_UNK func_80081EE8;

void func_80088374(void) {
    s32 var_s0;

    func_80046734(&D_800A01AC, 0, 0x21, 0, 0, 0, 1, 0, 1);
    func_80046D4C(&D_800A01AC, 0, 0xEB, &D_800A037C, &D_800846A8, -1);
    func_80046B24(&D_800A01AC, 0, 0xCF, &D_80081D18, 0);
    func_80046B24(&D_800A01AC, 0, 0xCE, &func_80081EE8, 0);
    var_s0 = 0;
    do {
        func_80046B24(&D_800A01AC, 0, -1, &D_80084428, -1);
        var_s0 += 1;
    } while (var_s0 < 4);
    func_800470E4(&D_800A01AC, &D_80080CC0, 0, &D_800703BC, &D_80084180);
    func_800470FC(&D_800A01AC, 0);
}
