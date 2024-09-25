#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_HP_VS_CONFIG.Flags.PageAlignLargeAllocs", page_align_large_allocs, 0x0, 0x1, true, 0x482d0cd1eeb07938, 1, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_HP_VS_CONFIG.Flags.FullDecommit", full_decommit, 0x1, 0x1, true, 0x947b09a93ecbce1b, 1, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTL_HP_VS_CONFIG.Flags.EnableDelayFree", enable_delay_free, 0x2, 0x1, true, 0x4a6b01f9a3a8029c, 1, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_RTL_HP_VS_CONFIG.Flags", flags, 0x0, 0x20, true, 0x3d49729b4fa65841)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif