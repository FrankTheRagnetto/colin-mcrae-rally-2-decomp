typedef signed char s8; typedef unsigned char u8; typedef short s16; typedef unsigned short u16;
typedef int s32; typedef unsigned int u32; typedef long long s64; typedef unsigned long long u64; typedef float f32; typedef double f64;
#define NULL 0
#include "m2c_macros.h"
extern s32 D_80098848;
extern s32 D_8009884C;
extern s8 D_80098850;
extern s32 D_800A3D70;

void func_8008C998(s32 arg0, s32 arg1) {
    s32 temp_v1;
    void *temp_s0;
    void *temp_s0_2;

    D_800A3D70 = func_80047408();
    if (!(func_80061190() & 0xFF) && (func_8001CEFC(0) > 0x2BF20U)) {
        func_80061164(1);
    }
    func_800472A0();
    func_800473BC(0);
    func_800472C8(-1, -1, -1, -1, -1);
    func_800864C0();
    D_80098850 = 0;
    func_80086350();
    func_80086614();
    func_80089248();
    func_80086740();
    func_800892C8();
    func_80089364();
    func_8008684C();
    func_800893FC();
    func_800894BC();
    func_8008B190();
    func_8008C270(func_8001CAC8() & 0xFF);
    func_8008C358(func_8001CAC8() & 0xFF);
    func_8008B278(func_8001CAF8() & 0xFF);
    func_8008B374(func_8001CAF8() & 0xFF);
    func_8008B46C();
    func_8008C440();
    func_8008B76C();
    func_8008C4FC();
    func_8008BA6C();
    func_8008C5B8();
    func_8008C674();
    func_8008BD6C();
    func_8008BED0();
    func_80086980();
    func_80086AF0();
    func_80089534();
    func_800895D8();
    func_80086C4C();
    func_80086DB8();
    func_8008965C();
    func_80087018();
    func_8008717C();
    func_8008970C();
    func_800897E0();
    func_80086EE8();
    func_8008987C();
    func_800872D0();
    func_80087434();
    func_8008992C();
    func_80089A00();
    func_80089A9C();
    func_8005BCC8();
    func_80089F6C();
    func_80089B60();
    func_800875EC(func_8001CAC8() & 0xFF);
    func_80087704(func_8001CAC8() & 0xFF);
    func_8008781C(func_8001CAC8() & 0xFF);
    func_80087934(func_8001CAC8() & 0xFF);
    func_80087A4C(func_8001CAC8() & 0xFF);
    func_80087BC4(func_8001CAF8() & 0xFF);
    func_80087CBC(func_8001CAF8() & 0xFF);
    func_80087DB4(func_8001CAF8() & 0xFF);
    func_80087FCC(func_8001CB10() & 0xFF);
    func_80088104(func_8001CB10() & 0xFF);
    func_8008823C(func_8001CB10() & 0xFF);
    func_80088374();
    func_800884B0();
    func_800885C0();
    func_800886DC();
    func_80088800();
    func_80088938();
    func_80089BFC();
    func_80089CB4();
    func_80088C38();
    func_80088D94();
    func_80088F40();
    func_8008C034();
    func_8008C134();
    func_80087EAC();
    func_800890EC();
    func_80089D68();
    D_80098848 = 0;
    D_8009884C = func_80089DE8(arg0 & 0xFF);
    if (arg1 & 0xFF) {
        M2C_FIELD(func_80089F24(), s8 *, 7) = 1;
        func_8008403C(1);
        M2C_FIELD(func_80089F60(), s8 *, 7) = 2;
        M2C_FIELD(func_8008C744(), s8 *, 7) = 1;
    } else {
        temp_v1 = func_8001CAE0() & 0xFF;
        if (temp_v1 >= 0) {
            if (temp_v1 < 5) {
                temp_s0 = func_80089F60();
                M2C_FIELD(temp_s0, s8 *, 7) = func_8001CAE0();
                M2C_FIELD(func_80089F24(), s8 *, 7) = 1;
                func_8008403C(1);
                M2C_FIELD(func_8008C744(), s8 *, 7) = 1;
            } else if (temp_v1 < 8) {
                temp_s0_2 = func_8008C744();
                M2C_FIELD(temp_s0_2, s8 *, 7) = (s8) (func_8001CAE0() - 5);
                M2C_FIELD(func_80089F24(), s8 *, 7) = 2;
                func_8008403C(2);
                M2C_FIELD(func_80089F60(), s8 *, 7) = 2;
            }
        }
    }
    func_8007F9C8();
}
