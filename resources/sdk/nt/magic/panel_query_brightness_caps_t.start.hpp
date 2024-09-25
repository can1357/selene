#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::brightness_interface_version_t), "_PANEL_QUERY_BRIGHTNESS_CAPS.Version", version, 0x0, 0x20, true, 0x73377af2f98a9db4)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PANEL_QUERY_BRIGHTNESS_CAPS.Smooth", smooth, 0x20, 0x1, true, 0xd5178af0aeccc868, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PANEL_QUERY_BRIGHTNESS_CAPS.Adaptive", adaptive, 0x21, 0x1, true, 0x8ebed803bdece017, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PANEL_QUERY_BRIGHTNESS_CAPS.NitsCalibrated", nits_calibrated, 0x22, 0x1, true, 0x446147c3aef2debb, 1, uint32_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PANEL_QUERY_BRIGHTNESS_CAPS.Value", value, 0x20, 0x20, true, 0xfec0a0001fe003cd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif