typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
M2C_UNK CdInit_v4();                                /* extern */
M2C_UNK ChangeClearPAD(M2C_UNK);                    /* extern */
M2C_UNK PutDispEnv_v5(M2C_UNK *);                   /* extern */
M2C_UNK ResetGraph_v5(M2C_UNK);                     /* extern */
M2C_UNK SetDispMask_v3(M2C_UNK);                    /* extern */
M2C_UNK VSync_v3(M2C_UNK);                          /* extern */
extern M2C_UNK D_800585C0;

void func_8003489C(void) {
    func_8003B8E0();
    CdInit_v4();
    func_800397D4(0);
    func_80039964(0);
    func_8003BF04(0);
    ResetGraph_v5(0);
    func_80034B7C(0);
    VSync_v3(0);
    func_80034B3C(&D_800585C0, 0, 0, 0x140, 0xF0);
    PutDispEnv_v5(&D_800585C0);
    SetDispMask_v3(1);
    VSync_v3(0);
    func_8003EAD0();
    func_80025140(0xC, 4);
    func_8003EFDC();
    ChangeClearPAD(0);
    func_8002FE90();
    func_80027CA0();
    func_800273A4();
}
