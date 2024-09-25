#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWINDOWINFO.cbSize", cb_size, 0x0, 0x20, true, 0xc7d2a82d05c56288)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagWINDOWINFO.rcWindow", rc_window, 0x20, 0x80, true, 0x87ee89161939f1a9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagWINDOWINFO.rcClient", rc_client, 0xa0, 0x80, true, 0xe220d02e82b24cb5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWINDOWINFO.dwStyle", dw_style, 0x120, 0x20, true, 0xd59a0004eea82ec6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWINDOWINFO.dwExStyle", dw_ex_style, 0x140, 0x20, true, 0x8e9ea3841b51a15f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWINDOWINFO.dwWindowStatus", dw_window_status, 0x160, 0x20, true, 0x86ed17226f7d4385)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWINDOWINFO.cxWindowBorders", cx_window_borders, 0x180, 0x20, true, 0xa9760748a44241a5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWINDOWINFO.cyWindowBorders", cy_window_borders, 0x1a0, 0x20, true, 0x47878bbb56a4c3b0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagWINDOWINFO.atomWindowType", atom_window_type, 0x1c0, 0x10, true, 0xe4c14ffa17038c19)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagWINDOWINFO.wCreatorVersion", w_creator_version, 0x1d0, 0x10, true, 0xb2ed958d9330b57a)
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
#define _m09
#endif