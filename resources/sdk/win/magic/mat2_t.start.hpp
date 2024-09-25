#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::fixed_t), "_MAT2.eM11", e_m11, 0x0, 0x20, true, 0xc8726386ff1d8575)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::fixed_t), "_MAT2.eM12", e_m12, 0x20, 0x20, true, 0x26a091b164e656b5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::fixed_t), "_MAT2.eM21", e_m21, 0x40, 0x20, true, 0x68f4ba5a31560f9a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::fixed_t), "_MAT2.eM22", e_m22, 0x60, 0x20, true, 0xc66c38177dbef0ce)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif