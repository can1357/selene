#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMDT_DISPLAYMODE_FLAGS.ValidatedAgainstMonitorCaps", validated_against_monitor_caps, 0x0, 0x1, true, 0x3465f262cc585b9a, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMDT_DISPLAYMODE_FLAGS.RoundedFakeMode", rounded_fake_mode, 0x1, 0x1, true, 0xb003f664cc98c8f0, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int4_t), "_D3DKMDT_DISPLAYMODE_FLAGS.ModePruningReason", mode_pruning_reason, 0x20, 0x4, true, 0xbb96e08a308fb186, 4, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMDT_DISPLAYMODE_FLAGS.Stereo", stereo, 0x24, 0x1, true, 0x36cc3a067be81279, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMDT_DISPLAYMODE_FLAGS.AdvancedScanCapable", advanced_scan_capable, 0x25, 0x1, true, 0x293fd019725ea55e, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMDT_DISPLAYMODE_FLAGS.PreferredTiming", preferred_timing, 0x26, 0x1, true, 0x3cac42306eb9fbf9, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMDT_DISPLAYMODE_FLAGS.PhysicalModeSupported", physical_mode_supported, 0x27, 0x1, true, 0x3bb8ba8b558ab543, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif