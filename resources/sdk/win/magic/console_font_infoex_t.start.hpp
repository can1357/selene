#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONSOLE_FONT_INFOEX.cbSize", cb_size, 0x0, 0x20, true, 0x9413b929dd0fa232)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONSOLE_FONT_INFOEX.nFont", n_font, 0x20, 0x20, true, 0x39881c87c16140fa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::coord_t), "_CONSOLE_FONT_INFOEX.dwFontSize", dw_font_size, 0x40, 0x20, true, 0x8bf3d3b71f25677)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONSOLE_FONT_INFOEX.FontFamily", font_family, 0x60, 0x20, true, 0xdc8463871c10a3a9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CONSOLE_FONT_INFOEX.FontWeight", font_weight, 0x80, 0x20, true, 0xbdc094cf40c1725b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "_CONSOLE_FONT_INFOEX.FaceName", face_name, 0xa0, 0x0, true, 0xe94f618f2fcea622)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif