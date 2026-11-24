typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_8004B340;
extern void *D_8004B348;

void func_8003D7F4(void) {
    s32 var_s1;
    void *var_s0;

    var_s0 = D_8004B348;
    var_s1 = 0;
    if (D_8004B340 > 0) {
        do {
            if (M2C_FIELD(var_s0, s32 *, 0x38) & 0x01000000) {
                func_8003D8F8(var_s0);
            }
            var_s1 += 1;
            var_s0 += 0x48;
        } while (var_s1 < D_8004B340);
    }
}
