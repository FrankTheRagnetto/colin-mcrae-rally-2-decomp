typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_800499A8;
extern M2C_UNK D_800499C8;
extern u8 D_800499EC;
extern M2C_UNK D_80050788;
extern M2C_UNK D_80050798;

s32 func_800246A0(void) {
    if (D_800499EC != 0) {
        func_80034514(&D_80050788);
        func_8003459C(&D_80050788);
        func_80034310(&D_80050788);
    } else {
        func_800343CC(&D_80050798, 0, 0xFF);
        func_800343F4(&D_80050788, 1, &D_80050798, &D_800499A8, &D_800499C8);
        D_800499EC = 1;
    }
    return 0;
}
