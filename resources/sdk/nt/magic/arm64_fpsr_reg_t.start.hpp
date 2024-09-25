#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ARM64_FPSR_REG.Value", value, 0x0, 0x20, true, 0x6f9d3b24ed50870a)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ARM64_FPSR_REG.IOC", ioc, 0x0, 0x1, true, 0x2d3929a82467860f, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ARM64_FPSR_REG.DZC", dzc, 0x1, 0x1, true, 0x8f6d59ef140fa11, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ARM64_FPSR_REG.OFC", ofc, 0x2, 0x1, true, 0x57754cb63196acf5, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ARM64_FPSR_REG.UFC", ufc, 0x3, 0x1, true, 0xba84fd3831127657, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ARM64_FPSR_REG.IXC", ixc, 0x4, 0x1, true, 0xbaf780a9909f53f4, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_ARM64_FPSR_REG.res0_1", res0_1, 0x5, 0x2, true, 0xb05d6f696571b6b, 2, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ARM64_FPSR_REG.IDC", idc, 0x7, 0x1, true, 0x8328319e3df8d7d9, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint19_t), "_ARM64_FPSR_REG.res0_2", res0_2, 0x8, 0x13, true, 0x636bc7f9dee6c9fd, 19, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ARM64_FPSR_REG.QC", qc, 0x1b, 0x1, true, 0x6b4213fa4430868a, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ARM64_FPSR_REG.V", v, 0x1c, 0x1, true, 0xce889d5acb263d18, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ARM64_FPSR_REG.C", c, 0x1d, 0x1, true, 0x3f2bef052cb65080, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ARM64_FPSR_REG.Z", z, 0x1e, 0x1, true, 0x3c18e0c32da2999d, 1, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_ARM64_FPSR_REG.N", n, 0x1f, 0x1, true, 0x10d314b4ae72ecc6, 1, uint32_t)
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
#endif