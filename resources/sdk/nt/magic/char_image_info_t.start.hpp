#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::char_info_t), "_CHAR_IMAGE_INFO.CharInfo", char_info, 0x0, 0x20, true, 0x3eb24ed1b5174ef5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::font_image_info_t), "_CHAR_IMAGE_INFO.FontImageInfo", font_image_info, 0x40, 0x80, true, 0x7b9c8f18ad893fcf)
#else
#define _m00
#define _m01
#endif