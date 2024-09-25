#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DLGTEMPLATE.style", style, 0x0, 0x20, true, 0x5d7e3b789003f33f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DLGTEMPLATE.dwExtendedStyle", dw_extended_style, 0x20, 0x20, true, 0xc5d6c3ad83777de2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "DLGTEMPLATE.cdit", cdit, 0x40, 0x10, true, 0x29ad8919bed2808c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "DLGTEMPLATE.x", x, 0x50, 0x10, true, 0x645220c6d8dbaa6e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "DLGTEMPLATE.y", y, 0x60, 0x10, true, 0x682b95ee11991496)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "DLGTEMPLATE.cx", cx, 0x70, 0x10, true, 0xa3666ebc96787b33)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "DLGTEMPLATE.cy", cy, 0x80, 0x10, true, 0x7240f1a06989431e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif