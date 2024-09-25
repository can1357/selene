#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MONITORLINKINFO_CAPABILITIES.Stereo", stereo, 0x0, 0x1, true, 0xf88ecfea5eace3f0, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MONITORLINKINFO_CAPABILITIES.WideColorSpace", wide_color_space, 0x1, 0x1, true, 0xadc0d6b554bb4682, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MONITORLINKINFO_CAPABILITIES.HighColorSpace", high_color_space, 0x2, 0x1, true, 0xfddef6639f02be2e, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MONITORLINKINFO_CAPABILITIES.DynamicColorSpace", dynamic_color_space, 0x3, 0x1, true, 0x35bb3665e3a33dd0, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MONITORLINKINFO_CAPABILITIES.DynamicBitsPerColorChannel", dynamic_bits_per_color_channel, 0x4, 0x1, true, 0xaa410a63ae181adf, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MONITORLINKINFO_CAPABILITIES.DynamicColorEncodingFormat", dynamic_color_encoding_format, 0x5, 0x1, true, 0x7de344dcc45db64, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MONITORLINKINFO_CAPABILITIES.DedicatedTimingGeneration", dedicated_timing_generation, 0x6, 0x1, true, 0xf5322da952f2aa87, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MONITORLINKINFO_CAPABILITIES.TargetIndependentPrimary", target_independent_primary, 0x7, 0x1, true, 0xd63833821b4a3652, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MONITORLINKINFO_CAPABILITIES.SyncLockIdentical", sync_lock_identical, 0x8, 0x1, true, 0xbce896af5d089169, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MONITORLINKINFO_CAPABILITIES.Hdr10Plus", hdr10_plus, 0x9, 0x1, true, 0xadb6de1cb46eeddc, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MONITORLINKINFO_CAPABILITIES.DolbyVisionLowLatency", dolby_vision_low_latency, 0xa, 0x1, true, 0xf7e612fdadfd69f0, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_MONITORLINKINFO_CAPABILITIES.VariableRefresh", variable_refresh, 0xb, 0x1, true, 0x858351e25fbbebe9, 1, uint32_t)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MONITORLINKINFO_CAPABILITIES.Value", value, 0x0, 0x20, true, 0x808bb5830860d34f)
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
#endif