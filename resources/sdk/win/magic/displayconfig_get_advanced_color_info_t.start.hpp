#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_device_info_header_t), "_DISPLAYCONFIG_GET_ADVANCED_COLOR_INFO.header", header, 0x0, 0xa0, true, 0xdfcbf24da4a2634a)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPLAYCONFIG_GET_ADVANCED_COLOR_INFO.advancedColorSupported", advanced_color_supported, 0xa0, 0x1, true, 0x4108c3f049ce56a, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPLAYCONFIG_GET_ADVANCED_COLOR_INFO.advancedColorEnabled", advanced_color_enabled, 0xa1, 0x1, true, 0x7a8149e683ac601f, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPLAYCONFIG_GET_ADVANCED_COLOR_INFO.wideColorEnforced", wide_color_enforced, 0xa2, 0x1, true, 0x2d2504db1e619397, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPLAYCONFIG_GET_ADVANCED_COLOR_INFO.advancedColorForceDisabled", advanced_color_force_disabled, 0xa3, 0x1, true, 0x9098fae9e2b755ab, 1, uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISPLAYCONFIG_GET_ADVANCED_COLOR_INFO.value", value, 0xa0, 0x20, true, 0x3f3ea03e3f47e4d7)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum win::displayconfig_color_encoding_t), "_DISPLAYCONFIG_GET_ADVANCED_COLOR_INFO.colorEncoding", color_encoding, 0xc0, 0x20, true, 0xff2c55844526e363)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISPLAYCONFIG_GET_ADVANCED_COLOR_INFO.bitsPerColorChannel", bits_per_color_channel, 0xe0, 0x20, true, 0x938c40f6d7124c74)
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