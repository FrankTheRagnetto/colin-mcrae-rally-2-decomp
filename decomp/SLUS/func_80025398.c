typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
M2C_UNK DrawSync_v2(M2C_UNK);                       /* extern */
extern s32 D_80049A04;
extern s32 D_80049A08;
extern s32 D_80049A0C;

s32 func_80025398(void) {
    DrawSync_v2(0);
    if (D_80049A04 != 0) {
        func_80027300(D_80049A04);
        D_80049A04 = 0;
    }
    if (D_80049A08 != 0) {
        func_80027300(D_80049A08);
        D_80049A08 = 0;
    }
    return D_80049A0C;
}
