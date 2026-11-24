typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_80074F50;
extern M2C_UNK D_80082A2C;
extern M2C_UNK D_80085740;
extern M2C_UNK D_8009D28C;
extern M2C_UNK D_8009E84C;
extern M2C_UNK func_8008618C;

void func_80089F6C(void) {
    s32 var_s1;

    func_80046734(&D_8009E84C, 0, 0x131, 0, &D_8009D28C, 0, 1, 0, 1);
    var_s1 = 0;
    do {
        func_8004681C(&D_8009E84C, 0, var_s1 + 0x132, 2, 0, 0, 0, &func_8008618C + 0x10, -1);
        var_s1 += 1;
    } while (var_s1 < 8);
    func_800470E4(&D_8009E84C, &D_80082A2C, 0, &D_80074F50, &D_80085740);
    func_800470FC(&D_8009E84C, 0);
}
