#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNDCLASSEXW.cbSize", cb_size, 0x0, 0x20, true, 0x2e7b61c281d34ce0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNDCLASSEXW.style", style, 0x20, 0x20, true, 0x4a37439a712ca416)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int64_t(struct win::hwnd_t*, uint32_t, uint64_t, int64_t)>*), "tagWNDCLASSEXW.lpfnWndProc", lpfn_wnd_proc, 0x40, 0x40, true, 0xb8624ab938e72acb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagWNDCLASSEXW.cbClsExtra", cb_cls_extra, 0x80, 0x20, true, 0x32f1f19c0478775e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagWNDCLASSEXW.cbWndExtra", cb_wnd_extra, 0xa0, 0x20, true, 0xcc8bacc2ac27eccc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hinstance_t*), "tagWNDCLASSEXW.hInstance", h_instance, 0xc0, 0x40, true, 0xd4b8e5b8eaff8a21)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hicon_t*), "tagWNDCLASSEXW.hIcon", h_icon, 0x100, 0x40, true, 0xbf196b6d8451137c)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hicon_t*), "tagWNDCLASSEXW.hCursor", h_cursor, 0x140, 0x40, true, 0x18aa0f496a30c5b8)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbrush_t*), "tagWNDCLASSEXW.hbrBackground", hbr_background, 0x180, 0x40, true, 0x602e69450393ec5a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "tagWNDCLASSEXW.lpszMenuName", lpsz_menu_name, 0x1c0, 0x40, true, 0x28b849fd6b64ebe5)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "tagWNDCLASSEXW.lpszClassName", lpsz_class_name, 0x200, 0x40, true, 0xcad19966fba6445b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hicon_t*), "tagWNDCLASSEXW.hIconSm", h_icon_sm, 0x240, 0x40, true, 0xa06ca31de0ccbbb4)
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
#define _m10
#define _m11
#endif