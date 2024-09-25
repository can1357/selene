#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNDCLASSW.style", style, 0x0, 0x20, true, 0x5959a2580fc135eb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int64_t(struct win::hwnd_t*, uint32_t, uint64_t, int64_t)>*), "tagWNDCLASSW.lpfnWndProc", lpfn_wnd_proc, 0x40, 0x40, true, 0xe86108cbca0a6402)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagWNDCLASSW.cbClsExtra", cb_cls_extra, 0x80, 0x20, true, 0x8ed292a9d2343839)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagWNDCLASSW.cbWndExtra", cb_wnd_extra, 0xa0, 0x20, true, 0x29b62ae848e4c338)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hinstance_t*), "tagWNDCLASSW.hInstance", h_instance, 0xc0, 0x40, true, 0xaad5cf0c72f01285)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hicon_t*), "tagWNDCLASSW.hIcon", h_icon, 0x100, 0x40, true, 0xd64a665356690e0c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hicon_t*), "tagWNDCLASSW.hCursor", h_cursor, 0x140, 0x40, true, 0x137482b6f4dd68d6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbrush_t*), "tagWNDCLASSW.hbrBackground", hbr_background, 0x180, 0x40, true, 0xa20342c5e9eb9d03)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "tagWNDCLASSW.lpszMenuName", lpsz_menu_name, 0x1c0, 0x40, true, 0xcd60a32b40ebc812)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "tagWNDCLASSW.lpszClassName", lpsz_class_name, 0x200, 0x40, true, 0xe21bd22a7542ca4)
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