#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagGUITHREADINFO.cbSize", cb_size, 0x0, 0x20, true, 0x52559e01b9589892)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagGUITHREADINFO.flags", flags, 0x20, 0x20, true, 0xd50af3293a576c50)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagGUITHREADINFO.hwndActive", hwnd_active, 0x40, 0x40, true, 0x4464f467337e5397)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagGUITHREADINFO.hwndFocus", hwnd_focus, 0x80, 0x40, true, 0x47ff2a67196a24a3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagGUITHREADINFO.hwndCapture", hwnd_capture, 0xc0, 0x40, true, 0x5dc98ada9fc5145d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagGUITHREADINFO.hwndMenuOwner", hwnd_menu_owner, 0x100, 0x40, true, 0x508a878e39aa6aa)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagGUITHREADINFO.hwndMoveSize", hwnd_move_size, 0x140, 0x40, true, 0xa96eff970ac28c63)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagGUITHREADINFO.hwndCaret", hwnd_caret, 0x180, 0x40, true, 0x8a17da0b1ecda153)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "tagGUITHREADINFO.rcCaret", rc_caret, 0x1c0, 0x80, true, 0xab494f31407c0401)
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