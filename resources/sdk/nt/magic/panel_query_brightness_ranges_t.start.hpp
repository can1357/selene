#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::brightness_interface_version_t), "_PANEL_QUERY_BRIGHTNESS_RANGES.Version", version, 0x0, 0x20, true, 0x39b0583df69bd8d6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::brightness_level_t), "_PANEL_QUERY_BRIGHTNESS_RANGES.BrightnessLevel", brightness_level, 0x20, 0x40, true, 0x9fbbe5bec8e08d52)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::brightness_nit_ranges_t), "_PANEL_QUERY_BRIGHTNESS_RANGES.NitRanges", nit_ranges, 0x20, 0x60, true, 0x977772f52551e799)
#else
#define _m00
#define _m01
#define _m02
#endif