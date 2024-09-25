#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DLGITEMTEMPLATE.style", style, 0x0, 0x20, true, 0xb2a642fcf719be87)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DLGITEMTEMPLATE.dwExtendedStyle", dw_extended_style, 0x20, 0x20, true, 0xe12fad9034e6d8b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "DLGITEMTEMPLATE.x", x, 0x40, 0x10, true, 0x8915e4130af637a3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "DLGITEMTEMPLATE.y", y, 0x50, 0x10, true, 0x5a8ed15a307bcdd6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "DLGITEMTEMPLATE.cx", cx, 0x60, 0x10, true, 0x759b89b230b103b8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "DLGITEMTEMPLATE.cy", cy, 0x70, 0x10, true, 0xc9bf0777221735a2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "DLGITEMTEMPLATE.id", id, 0x80, 0x10, true, 0x36f7d295207feafc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif