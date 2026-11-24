
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef long long s64;
typedef unsigned long long u64;
typedef float f32;
typedef double f64;
extern s32 D_80077CAC;
extern s32 D_80077CB0;
unsigned char func_8001CB10();
int func_80030998();
int func_80030AA0();
int func_80030B5C();
int func_80045E28();
int func_800674C0();
void func_8006F680(void)
{
  s32 temp_v0;
  s32 var_s0;
  var_s0 = 0;
  D_80077CAC = D_80077CB0;
  func_80030998();
  if ((func_800674C0() == 1) && (func_80030B5C() >= 2U))
  {
    var_s0 = (func_8001CB10() & 0xFF) == 0;
  }
  temp_v0 = func_80045E28(D_80077CAC, *((s32 *) (((char *) func_80030AA0(var_s0)) + 8)));
  if (temp_v0 != 0)
  {
    D_80077CB0 = temp_v0;
  }
}
