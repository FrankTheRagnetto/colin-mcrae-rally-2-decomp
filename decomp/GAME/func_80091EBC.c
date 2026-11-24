typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_800D6EDC;
extern s32 D_800DB3BC;
extern M2C_UNK func_80091FD0;

void func_80091EBC(void) {
    s32 temp_v0;

    func_8003408C(&func_80091FD0, 0);
    func_8008E2F8();
    temp_v0 = func_80047524();
    D_800DB3BC = temp_v0;
    if (temp_v0 != 0) {
        D_800D6EDC = temp_v0;
    }
}
