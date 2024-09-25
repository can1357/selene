#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagMENUBARINFO.cbSize", cb_size, 0x0, 0x20, true, 0x16e0938562f82825)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagMENUBARINFO.rcBar", rc_bar, 0x20, 0x80, true, 0xca6b5e3d46ac3eb4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hmenu_t*), "tagMENUBARINFO.hMenu", h_menu, 0xc0, 0x40, true, 0xadf25f3f410a17c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagMENUBARINFO.hwndMenu", hwnd_menu, 0x100, 0x40, true, 0x92d8b8c01c9bcd2a)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "tagMENUBARINFO.fBarFocused", f_bar_focused, 0x140, 0x1, true, 0xadd01c705b9a7ae4, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int1_t), "tagMENUBARINFO.fFocused", f_focused, 0x141, 0x1, true, 0x3a7cb19023ecb64f, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(int30_t), "tagMENUBARINFO.fUnused", f_unused, 0x142, 0x1e, true, 0x3b80d36db051e113, 30, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif