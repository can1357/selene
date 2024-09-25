#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "D3DDDI_MAKERESIDENT_FLAGS.CantTrimFurther", cant_trim_further, 0x0, 0x1, true, 0x79efc4010fb582f9, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "D3DDDI_MAKERESIDENT_FLAGS.MustSucceed", must_succeed, 0x1, 0x1, true, 0xd89fe619471643c5, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DDDI_MAKERESIDENT_FLAGS.Value", value, 0x0, 0x20, true, 0x665f3173eda7b001)
#else
#define _m00
#define _m01
#define _m02
#endif