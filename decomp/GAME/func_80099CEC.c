typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"

void func_80099CEC(void *arg0) {
    s32 var_v1;
    void *temp_s1;
    void *var_s0;

    var_s0 = arg0;
    var_v1 = 0;
    if (var_s0 != NULL) {
        do {
            temp_s1 = M2C_FIELD(var_s0, void **, 0x10);
            if ((temp_s1 != NULL) && (M2C_FIELD(var_s0, u8 *, 0xB4) == 0) && (M2C_FIELD(temp_s1, s32 *, 0x1C) != var_v1)) {
                func_80094DB4(var_s0);
                var_v1 = M2C_FIELD(temp_s1, s32 *, 0x1C);
            }
            var_s0 = M2C_FIELD(var_s0, void **, 4);
        } while (var_s0 != NULL);
    }
}
