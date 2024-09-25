#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARM64_FPCR_REG.Value", value, 0x0, 0x20, true, 0x249419f4926139ea)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_ARM64_FPCR_REG.res0_1", res0_1, 0x0, 0x8, true, 0x952680576016009b, 8, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ARM64_FPCR_REG.IOE", ioe, 0x8, 0x1, true, 0x9276da984866d0d2, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ARM64_FPCR_REG.DZE", dze, 0x9, 0x1, true, 0x9a748241c681b9f1, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ARM64_FPCR_REG.OFE", ofe, 0xa, 0x1, true, 0xa93969b96f9ef22e, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ARM64_FPCR_REG.UFE", ufe, 0xb, 0x1, true, 0x3cdb844e5b469b9f, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ARM64_FPCR_REG.IXE", ixe, 0xc, 0x1, true, 0x5f96735465777c61, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_ARM64_FPCR_REG.res0_2", res0_2, 0xd, 0x2, true, 0x722410a56f0a6ff9, 2, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ARM64_FPCR_REG.IDE", ide, 0xf, 0x1, true, 0xe43d6baaf9bf024, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_ARM64_FPCR_REG.Len", len, 0x10, 0x3, true, 0xfc92c535a054fc2f, 3, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ARM64_FPCR_REG.FZ16", fz16, 0x13, 0x1, true, 0x1220514a568e80e3, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_ARM64_FPCR_REG.Stride", stride, 0x14, 0x2, true, 0x88e5386002c49008, 2, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_ARM64_FPCR_REG.RMode", r_mode, 0x16, 0x2, true, 0xb458db92ce6be4b1, 2, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ARM64_FPCR_REG.FZ", fz, 0x18, 0x1, true, 0x37b8f7341498459b, 1, uint32_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ARM64_FPCR_REG.DN", dn, 0x19, 0x1, true, 0x6ecb4a193f6f3732, 1, uint32_t)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ARM64_FPCR_REG.AHP", ahp, 0x1a, 0x1, true, 0x1a78b3892ae2ae72, 1, uint32_t)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_ARM64_FPCR_REG.res0_3", res0_3, 0x1b, 0x5, true, 0x98b48fdeea52dbbf, 5, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#endif