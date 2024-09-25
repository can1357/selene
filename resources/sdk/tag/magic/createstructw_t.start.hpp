#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagCREATESTRUCTW.lpCreateParams", lp_create_params, 0x0, 0x40, true, 0x583f451d7b5b1eb1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hinstance_t*), "tagCREATESTRUCTW.hInstance", h_instance, 0x40, 0x40, true, 0xfd750fafe4051603)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hmenu_t*), "tagCREATESTRUCTW.hMenu", h_menu, 0x80, 0x40, true, 0xbeaacac00c533588)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagCREATESTRUCTW.hwndParent", hwnd_parent, 0xc0, 0x40, true, 0x60b35e647d26599d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCREATESTRUCTW.cy", cy, 0x100, 0x20, true, 0x835975246a9ad109)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCREATESTRUCTW.cx", cx, 0x120, 0x20, true, 0x8c34da0587329637)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCREATESTRUCTW.y", y, 0x140, 0x20, true, 0xb0752f14f541466d)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCREATESTRUCTW.x", x, 0x160, 0x20, true, 0xe2bfdfa8c2be4c8b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCREATESTRUCTW.style", style, 0x180, 0x20, true, 0xde26ddf891d6e3d5)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "tagCREATESTRUCTW.lpszName", lpsz_name, 0x1c0, 0x40, true, 0x3ae3747855ff52cc)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "tagCREATESTRUCTW.lpszClass", lpsz_class, 0x200, 0x40, true, 0x8329a4757e9969d6)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCREATESTRUCTW.dwExStyle", dw_ex_style, 0x240, 0x20, true, 0xc241a47a8464b6)
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