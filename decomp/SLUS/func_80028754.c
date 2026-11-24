typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern M2C_UNK D_80048748;
extern void *D_80049AE8;

void func_80028754(s32 arg0, M2C_UNK arg1) {
    func_800284B0(&D_80048748, arg0);
    M2C_FIELD(D_80049AE8, M2C_UNK (**)(s32, s32, M2C_UNK, M2C_UNK), 8)(M2C_FIELD(D_80049AE8, s32 *, 0x1C), arg0, 8, arg1);
}
