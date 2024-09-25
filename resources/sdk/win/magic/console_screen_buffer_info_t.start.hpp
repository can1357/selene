#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::coord_t), "_CONSOLE_SCREEN_BUFFER_INFO.dwSize", dw_size, 0x0, 0x20, true, 0xb99b22440ba1f583)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::coord_t), "_CONSOLE_SCREEN_BUFFER_INFO.dwCursorPosition", dw_cursor_position, 0x20, 0x20, true, 0xe7f71d9d3e0a58bd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CONSOLE_SCREEN_BUFFER_INFO.wAttributes", w_attributes, 0x40, 0x10, true, 0x405a9899c0b93940)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::small_rect_t), "_CONSOLE_SCREEN_BUFFER_INFO.srWindow", sr_window, 0x50, 0x40, true, 0xaab770d135171280)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::coord_t), "_CONSOLE_SCREEN_BUFFER_INFO.dwMaximumWindowSize", dw_maximum_window_size, 0x90, 0x20, true, 0x8998dcc97277ba1d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif