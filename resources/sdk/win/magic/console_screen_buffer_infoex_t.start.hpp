#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONSOLE_SCREEN_BUFFER_INFOEX.cbSize", cb_size, 0x0, 0x20, true, 0x2053ce43c28a9ff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::coord_t), "_CONSOLE_SCREEN_BUFFER_INFOEX.dwSize", dw_size, 0x20, 0x20, true, 0xaecbfb85834406f8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::coord_t), "_CONSOLE_SCREEN_BUFFER_INFOEX.dwCursorPosition", dw_cursor_position, 0x40, 0x20, true, 0x19ef04cbe4e98728)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CONSOLE_SCREEN_BUFFER_INFOEX.wAttributes", w_attributes, 0x60, 0x10, true, 0x7523a05edf9dc89b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::small_rect_t), "_CONSOLE_SCREEN_BUFFER_INFOEX.srWindow", sr_window, 0x70, 0x40, true, 0x3d68b55ebe0b6f38)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::coord_t), "_CONSOLE_SCREEN_BUFFER_INFOEX.dwMaximumWindowSize", dw_maximum_window_size, 0xb0, 0x20, true, 0x6058038c7bb994cf)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CONSOLE_SCREEN_BUFFER_INFOEX.wPopupAttributes", w_popup_attributes, 0xd0, 0x10, true, 0x5be79757783289f6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CONSOLE_SCREEN_BUFFER_INFOEX.bFullscreenSupported", b_fullscreen_supported, 0xe0, 0x20, true, 0xdecee7d4c2bba6a0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 16>), "_CONSOLE_SCREEN_BUFFER_INFOEX.ColorTable", color_table, 0x100, 0x0, true, 0x5232020b8aec2afc)
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
#endif