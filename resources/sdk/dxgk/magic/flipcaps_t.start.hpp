#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_FLIPCAPS.FlipOnVSyncWithNoWait", flip_on_v_sync_with_no_wait, 0x0, 0x1, true, 0xd7d7bdd8edb7369a, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_FLIPCAPS.FlipOnVSyncMmIo", flip_on_v_sync_mm_io, 0x1, 0x1, true, 0x28c5193f3bb1bae3, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_FLIPCAPS.FlipInterval", flip_interval, 0x2, 0x1, true, 0x9773525172aefa6b, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_FLIPCAPS.FlipImmediateMmIo", flip_immediate_mm_io, 0x3, 0x1, true, 0x78c1b2d29a7f1847, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_FLIPCAPS.FlipIndependent", flip_independent, 0x4, 0x1, true, 0xe0e971dba0d8f37, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_FLIPCAPS.DdiPresentForIFlip", ddi_present_for_i_flip, 0x5, 0x1, true, 0x4fa6784f6e894866, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_FLIPCAPS.FlipImmediateOnHSync", flip_immediate_on_h_sync, 0x6, 0x1, true, 0x91be8cb61f6ec13b, 1, uint32_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_FLIPCAPS.Value", value, 0x0, 0x20, true, 0x8897ed2ece07ca1f)
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