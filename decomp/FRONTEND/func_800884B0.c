typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8006BE1C;
extern M2C_UNK D_80080EE0;
extern M2C_UNK D_80081B0C;
extern M2C_UNK D_80084258;
extern M2C_UNK D_8008431C;
extern M2C_UNK D_800A01AC;
extern M2C_UNK D_800A037C;

void func_800884B0(void) {
    s32 var_s1;

    func_80046734(&D_800A037C, 0, 0x163, 0, &D_800A01AC, 0, 1, 0, 1);
    var_s1 = 0;
    do {
        func_800469A0(&D_800A037C, 0, -1, 0xA, 0, 0, 0, &D_80081B0C, -1);
        var_s1 += 1;
    } while (var_s1 < 3);
    func_80046C38(&D_800A037C, 0, 0x103, 0, 0);
    func_800470E4(&D_800A037C, &D_80084258, &D_80080EE0, &D_8006BE1C, &D_8008431C);
    func_800470FC(&D_800A037C, 0);
}
