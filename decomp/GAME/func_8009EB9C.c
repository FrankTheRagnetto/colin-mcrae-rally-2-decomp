typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
void func_8009EB9C(void *arg0) {
    void *temp_a0;
    void *var_s0;

    var_s0 = arg0;
    if (var_s0 != NULL) {
        do {
            if (M2C_FIELD(var_s0, u8 *, 0x14) == 6) {
                M2C_FIELD(var_s0, s8 *, 0xB5) = 0;
            }
            temp_a0 = M2C_FIELD(var_s0, void **, 8);
            if (temp_a0 != NULL) {
                func_8009EB9C(temp_a0);
            }
            var_s0 = M2C_FIELD(var_s0, void **, 4);
        } while (var_s0 != NULL);
    }
}
