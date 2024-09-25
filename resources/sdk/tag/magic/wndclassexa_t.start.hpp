#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNDCLASSEXA.cbSize", cb_size, 0x0, 0x20, true, 0xd6ed81bdf7b33838)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagWNDCLASSEXA.style", style, 0x20, 0x20, true, 0xe4618b026fc3becd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int64_t(struct win::hwnd_t*, uint32_t, uint64_t, int64_t)>*), "tagWNDCLASSEXA.lpfnWndProc", lpfn_wnd_proc, 0x40, 0x40, true, 0xf04a0e1b56c6d9ee)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagWNDCLASSEXA.cbClsExtra", cb_cls_extra, 0x80, 0x20, true, 0x1416955c2d5cb4c5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagWNDCLASSEXA.cbWndExtra", cb_wnd_extra, 0xa0, 0x20, true, 0xcb530639f1333673)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hinstance_t*), "tagWNDCLASSEXA.hInstance", h_instance, 0xc0, 0x40, true, 0x1fb003046d4618c8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hicon_t*), "tagWNDCLASSEXA.hIcon", h_icon, 0x100, 0x40, true, 0xccc2432209b396ee)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hicon_t*), "tagWNDCLASSEXA.hCursor", h_cursor, 0x140, 0x40, true, 0x90192d485fde7427)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hbrush_t*), "tagWNDCLASSEXA.hbrBackground", hbr_background, 0x180, 0x40, true, 0x4f2d198c784808f)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "tagWNDCLASSEXA.lpszMenuName", lpsz_menu_name, 0x1c0, 0x40, true, 0x9eba5e2b25cca437)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "tagWNDCLASSEXA.lpszClassName", lpsz_class_name, 0x200, 0x40, true, 0xf23b5644a9361885)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hicon_t*), "tagWNDCLASSEXA.hIconSm", h_icon_sm, 0x240, 0x40, true, 0xebf2d4d5616362ed)
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