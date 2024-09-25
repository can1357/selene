#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "DXGI_DDI_PRESENT_FLAGS.Blt", blt, 0x0, 0x1, true, 0xf5240ec603708150, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "DXGI_DDI_PRESENT_FLAGS.Flip", flip, 0x1, 0x1, true, 0x3029110205325d18, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "DXGI_DDI_PRESENT_FLAGS.PreferRight", prefer_right, 0x2, 0x1, true, 0x212b72e4068b0af6, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "DXGI_DDI_PRESENT_FLAGS.TemporaryMono", temporary_mono, 0x3, 0x1, true, 0x7c1baa4cc1a985d7, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "DXGI_DDI_PRESENT_FLAGS.AllowTearing", allow_tearing, 0x4, 0x1, true, 0xfabeddbf1704aae6, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "DXGI_DDI_PRESENT_FLAGS.AllowFlexibleRefresh", allow_flexible_refresh, 0x5, 0x1, true, 0xb0cbbf19b4009770, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "DXGI_DDI_PRESENT_FLAGS.NoScanoutTransform", no_scanout_transform, 0x6, 0x1, true, 0x995f84bdcbb7db59, 1, uint32_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_PRESENT_FLAGS.Value", value, 0x0, 0x20, true, 0xc7edb57a18b82d55)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif