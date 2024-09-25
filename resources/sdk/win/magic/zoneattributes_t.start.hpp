#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ZONEATTRIBUTES.cbSize", cb_size, 0x0, 0x20, true, 0xea3dc3677357c4a6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_ZONEATTRIBUTES.szDisplayName", sz_display_name, 0x20, 0x40, true, 0x58220e15c2511d33)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 200>), "_ZONEATTRIBUTES.szDescription", sz_description, 0x1060, 0x80, true, 0x25f6baa3a4096348)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_ZONEATTRIBUTES.szIconPath", sz_icon_path, 0x1ce0, 0x40, true, 0xba405e71cab692ba)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ZONEATTRIBUTES.dwTemplateMinLevel", dw_template_min_level, 0x2d20, 0x20, true, 0xa47b8d60403b74dc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ZONEATTRIBUTES.dwTemplateRecommended", dw_template_recommended, 0x2d40, 0x20, true, 0x2de86f30a95b05f7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ZONEATTRIBUTES.dwTemplateCurrentLevel", dw_template_current_level, 0x2d60, 0x20, true, 0xea6240c3a816bb5b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ZONEATTRIBUTES.dwFlags", dw_flags, 0x2d80, 0x20, true, 0xacdde8ebedb83d67)
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