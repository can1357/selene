#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNDCLASSA.style", style, 0x0, 0x20, true, 0x8a799b33d1002c5e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int64_t(struct win::hwnd_t*, uint32_t, uint64_t, int64_t)>*), "tagWNDCLASSA.lpfnWndProc", lpfn_wnd_proc, 0x40, 0x40, true, 0x829507e7e16991c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagWNDCLASSA.cbClsExtra", cb_cls_extra, 0x80, 0x20, true, 0xdcd4a9986998c5b9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagWNDCLASSA.cbWndExtra", cb_wnd_extra, 0xa0, 0x20, true, 0x98eab923569b7924)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hinstance_t*), "tagWNDCLASSA.hInstance", h_instance, 0xc0, 0x40, true, 0x87e5ee7c7a614382)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hicon_t*), "tagWNDCLASSA.hIcon", h_icon, 0x100, 0x40, true, 0xe32a44c2886678f1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hicon_t*), "tagWNDCLASSA.hCursor", h_cursor, 0x140, 0x40, true, 0xdab2f3fe1146d4a7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbrush_t*), "tagWNDCLASSA.hbrBackground", hbr_background, 0x180, 0x40, true, 0x6366286dfd5fde5d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "tagWNDCLASSA.lpszMenuName", lpsz_menu_name, 0x1c0, 0x40, true, 0xfcbf6a613ce790e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "tagWNDCLASSA.lpszClassName", lpsz_class_name, 0x200, 0x40, true, 0x14454b882bb9879)
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