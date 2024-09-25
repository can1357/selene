#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_device_info_header_t), "_DISPLAYCONFIG_SET_ADVANCED_COLOR_STATE.header", header, 0x0, 0xa0, true, 0x28dd80342142481d)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPLAYCONFIG_SET_ADVANCED_COLOR_STATE.enableAdvancedColor", enable_advanced_color, 0xa0, 0x1, true, 0x274612309fd13232, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DISPLAYCONFIG_SET_ADVANCED_COLOR_STATE.value", value, 0xa0, 0x20, true, 0x8ff425d6d4718f22)
#else
#define _m00
#define _m01
#define _m02
#endif