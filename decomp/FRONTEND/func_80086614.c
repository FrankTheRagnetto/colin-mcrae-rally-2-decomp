typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_8007061C;
extern M2C_UNK D_800828C4;
extern M2C_UNK D_80084180;
extern M2C_UNK D_80084554;
extern M2C_UNK D_800845E0;
extern M2C_UNK D_800846A8;
extern M2C_UNK D_800862C8;
extern M2C_UNK D_8009B75C;
extern M2C_UNK D_8009B92C;
extern M2C_UNK D_800A037C;

void func_80086614(void) {
    s32 var_s0;

    func_80046734(&D_8009B92C, 0, 0xB, 0, &D_8009B75C, 0, 1, 0, 1);
    func_80046D4C(&D_8009B92C, 0, 0xEB, &D_800A037C, &D_800846A8, -1);
    func_80046B24(&D_8009B92C, 0, 0xCF, &D_800845E0, -1);
    var_s0 = 0;
    do {
        func_80046B24(&D_8009B92C, 0, -1, &D_80084554, -1);
        var_s0 += 1;
    } while (var_s0 < 4);
    func_800470E4(&D_8009B92C, &D_800828C4, &D_800862C8, &D_8007061C, &D_80084180);
    func_800470FC(&D_8009B92C, 0);
}
