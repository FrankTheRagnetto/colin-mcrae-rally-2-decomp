typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_80098848;
extern s32 D_8009884C;
extern s32 D_80098854;
extern s32 D_800A3D70;

void func_8008CE68(void) {
    s32 temp_v0;
    s32 var_s0;
    void *temp_s0;

    temp_s0 = func_80030AA0(D_80098854);
    D_80098848 = D_8009884C;
    func_80030998();
    var_s0 = M2C_FIELD(temp_s0, s32 *, 8);
    if (D_80098854 == 1) {
        var_s0 |= M2C_FIELD(func_80030AA0(0), s32 *, 8) & 0x1000;
    }
    temp_v0 = func_80045E28(D_80098848, var_s0);
    if (temp_v0 != 0) {
        D_800A3D70 = func_800665E4();
        D_8009884C = temp_v0;
    }
}
