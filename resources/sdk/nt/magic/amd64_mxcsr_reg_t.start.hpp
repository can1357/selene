#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_AMD64_MXCSR_REG.Value", value, 0x0, 0x20, true, 0x75b16937b258286c)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AMD64_MXCSR_REG.IE", ie, 0x0, 0x1, true, 0x8101482e0a142cf8, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AMD64_MXCSR_REG.DE", de, 0x1, 0x1, true, 0xdf4030177304b, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AMD64_MXCSR_REG.ZE", ze, 0x2, 0x1, true, 0x5f28a17d55587a29, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AMD64_MXCSR_REG.OE", oe, 0x3, 0x1, true, 0x242df0441c39ae8a, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AMD64_MXCSR_REG.UE", ue, 0x4, 0x1, true, 0x32a416b024f9e70a, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AMD64_MXCSR_REG.PE", pe, 0x5, 0x1, true, 0xb9e072c94874926b, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AMD64_MXCSR_REG.DAZ", daz, 0x6, 0x1, true, 0x90e022929ed35ff4, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AMD64_MXCSR_REG.IM", im, 0x7, 0x1, true, 0x111c06479d08d06f, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AMD64_MXCSR_REG.DM", dm, 0x8, 0x1, true, 0x64540bee662a5605, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AMD64_MXCSR_REG.ZM", zm, 0x9, 0x1, true, 0x81cf9bef0e36ffa3, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AMD64_MXCSR_REG.OM", om, 0xa, 0x1, true, 0xab3946d7f40fb22d, 1, uint32_t)
#define _m12 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AMD64_MXCSR_REG.UM", um, 0xb, 0x1, true, 0x23964f8853565a6a, 1, uint32_t)
#define _m13 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AMD64_MXCSR_REG.PM", pm, 0xc, 0x1, true, 0x20a4a91d1ed8c1ad, 1, uint32_t)
#define _m14 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_AMD64_MXCSR_REG.RC", rc, 0xd, 0x2, true, 0x11734ee6de563e77, 2, uint32_t)
#define _m15 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_AMD64_MXCSR_REG.FZ", fz, 0xf, 0x1, true, 0xe3a4e7a1fd6e7a44, 1, uint32_t)
#define _m16 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_AMD64_MXCSR_REG.res", res, 0x10, 0x10, true, 0xcfc2820bfd13037e, 16, uint32_t)
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