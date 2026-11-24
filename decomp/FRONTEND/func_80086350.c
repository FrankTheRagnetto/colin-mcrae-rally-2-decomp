typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_80078BD8;
extern M2C_UNK D_800837C8;
extern M2C_UNK D_80083E08;
extern M2C_UNK D_80085E74;
extern M2C_UNK D_8009B58C;
extern M2C_UNK D_8009B75C;

void func_80086350(void) {
    s32 var_s0;

    func_80046734(&D_8009B58C, 0, 1, 0, 0, 0, 1, 0, 0);
    func_80046D4C(&D_8009B58C, 0, 6, &D_8009B75C, 0, 0);
    func_80046D4C(&D_8009B58C, 0, 7, &D_8009B75C, 0, 1);
    func_80046D4C(&D_8009B58C, 0, 0xA, &D_8009B75C, 0, 4);
    func_800470E4(&D_8009B58C, &D_800837C8, &D_80085E74, &D_80078BD8, &D_80083E08);
    func_800470FC(&D_8009B58C, 0);
    if ((func_8001CA9C() & 0xFF) != 6) {
        var_s0 = 0;
        func_80046F58(&D_8009B58C, func_80089E28());
        if (M2C_FIELD(&D_8009B58C, s8 *, 6) > 0) {
            do {
                func_80046F60(&D_8009B58C, var_s0, func_80089E28());
                var_s0 += 1;
            } while (var_s0 < M2C_FIELD(&D_8009B58C, s8 *, 6));
        }
        func_80034004(func_8001CA9C() & 0xFF);
    }
}
