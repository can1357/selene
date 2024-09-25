#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::coord_t), "_FSVIDEO_SCREEN_INFORMATION.ScreenSize", screen_size, 0x0, 0x20, true, 0xcc193ce276b835a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::coord_t), "_FSVIDEO_SCREEN_INFORMATION.FontSize", font_size, 0x20, 0x20, true, 0x8ea2f6c45546d358)
#else
#define _m00
#define _m01
#endif