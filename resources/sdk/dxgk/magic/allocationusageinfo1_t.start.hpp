#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONUSAGEINFO1.Flags.PrivateFormat", private_format, 0x0, 0x1, true, 0x508cdad1057b10f, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONUSAGEINFO1.Flags.Swizzled", swizzled, 0x1, 0x1, true, 0x6a2a2ff1abca1853, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONUSAGEINFO1.Flags.MipMap", mip_map, 0x2, 0x1, true, 0xe4ee1d8f16c0d934, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONUSAGEINFO1.Flags.Cube", cube, 0x3, 0x1, true, 0xe050ec2ec0187cfb, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONUSAGEINFO1.Flags.Volume", volume, 0x4, 0x1, true, 0x7333f60218f9d678, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONUSAGEINFO1.Flags.Vertex", vertex, 0x5, 0x1, true, 0xcb9196e6d68db8f0, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_ALLOCATIONUSAGEINFO1.Flags.Index", index, 0x6, 0x1, true, 0xf5ce2d9395c1b63f, 1, uint32_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ALLOCATIONUSAGEINFO1.Flags.Value", value, 0x0, 0x20, true, 0x5ef637a01ae1cca1)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_DXGK_ALLOCATIONUSAGEINFO1.Flags", flags, 0x0, 0x20, true, 0xb1e8bf586e6b4424)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum kuser::d3dddiformat_t), "_DXGK_ALLOCATIONUSAGEINFO1.Format", format, 0x20, 0x20, true, 0x2ade1df32e6a4d9a)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ALLOCATIONUSAGEINFO1.PrivateFormat", private_format, 0x20, 0x20, true, 0x560e23a4041e0036)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ALLOCATIONUSAGEINFO1.SwizzledFormat", swizzled_format, 0x40, 0x20, true, 0x3e2ab3d381d5b3ca)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ALLOCATIONUSAGEINFO1.ByteOffset", byte_offset, 0x60, 0x20, true, 0x627c31a75ebfd9f2)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ALLOCATIONUSAGEINFO1.Width", width, 0x80, 0x20, true, 0xa0ad3f5cde2e5a59)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ALLOCATIONUSAGEINFO1.Height", height, 0xa0, 0x20, true, 0x7a29e5f4688ada3a)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ALLOCATIONUSAGEINFO1.Pitch", pitch, 0xc0, 0x20, true, 0x9ee70c74b280e51b)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ALLOCATIONUSAGEINFO1.Depth", depth, 0xe0, 0x20, true, 0x3c940934b1552b14)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ALLOCATIONUSAGEINFO1.SlicePitch", slice_pitch, 0x100, 0x20, true, 0x73d30cd4c5915e74)
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
#define _m17
#endif