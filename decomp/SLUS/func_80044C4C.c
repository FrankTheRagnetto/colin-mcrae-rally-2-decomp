typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
M2C_UNK ChangeClearPAD(M2C_UNK);                    /* extern */
s32 EnterCriticalSection();                         /* extern */
M2C_UNK ExitCriticalSection();                      /* extern */
M2C_UNK VSync_v3(M2C_UNK);                          /* extern */

void func_80044C4C(s32 arg0) {
    s32 temp_s1;
    s32 var_s0;

    var_s0 = arg0;
    ChangeClearPAD(0);
    VSync_v3(0);
    temp_s1 = EnterCriticalSection();
    if (func_80044D74() == 0) {
        var_s0 = 0;
    }
    func_80044D84(var_s0);
    func_80044F74();
    func_80044E70();
    func_80044F04();
    func_80044D94();
    if (temp_s1 == 1) {
        ExitCriticalSection();
    }
}
