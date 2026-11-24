typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800DAEC8;
extern s32 D_800DAECC;

s32 func_8007F028(void) {
    s32 var_s0;

    var_s0 = 1;
    func_80025398();
    D_800DAECC = 0;
    D_800DAEC8 = func_800341C0();
    func_8005E29C(func_800804F8());
    func_8005FDF4(func_800804F8());
    func_80099AB8();
    if (func_8007F1A8() & 0xFF) {
        func_800C0300();
    } else {
        var_s0 = 0;
    }
    if (((u32) (func_80021120() & 0xFF) >= 2U) && !(func_8001CB10() & 0xFF) && (func_80021298() & 0xFF)) {
        func_80025378(0x1B5E0);
        return var_s0;
    }
    func_80025454();
    return var_s0;
}
