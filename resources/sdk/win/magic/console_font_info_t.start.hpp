#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONSOLE_FONT_INFO.nFont", n_font, 0x0, 0x20, true, 0x98e091a2671ff5e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::coord_t), "_CONSOLE_FONT_INFO.dwFontSize", dw_font_size, 0x20, 0x20, true, 0x13529f4d5984f72e)
#else
#define _m00
#define _m01
#endif