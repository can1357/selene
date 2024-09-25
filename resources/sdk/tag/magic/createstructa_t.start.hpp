#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "tagCREATESTRUCTA.lpCreateParams", lp_create_params, 0x0, 0x40, true, 0xd6319c1075fc49e0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hinstance_t*), "tagCREATESTRUCTA.hInstance", h_instance, 0x40, 0x40, true, 0x2402c5bc9db24427)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hmenu_t*), "tagCREATESTRUCTA.hMenu", h_menu, 0x80, 0x40, true, 0x47b7490a3ef7edc8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "tagCREATESTRUCTA.hwndParent", hwnd_parent, 0xc0, 0x40, true, 0x14ebb9b2c406ed69)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCREATESTRUCTA.cy", cy, 0x100, 0x20, true, 0x1f5a0392aef77ae5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCREATESTRUCTA.cx", cx, 0x120, 0x20, true, 0x237494b9905a6dc1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCREATESTRUCTA.y", y, 0x140, 0x20, true, 0x18b95560a1f7b9cc)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCREATESTRUCTA.x", x, 0x160, 0x20, true, 0x2bc145b49e4c2bca)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagCREATESTRUCTA.style", style, 0x180, 0x20, true, 0xeb7453cc95862f16)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "tagCREATESTRUCTA.lpszName", lpsz_name, 0x1c0, 0x40, true, 0xd27d3c42c47400ce)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "tagCREATESTRUCTA.lpszClass", lpsz_class, 0x200, 0x40, true, 0x49aa06450299ce25)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagCREATESTRUCTA.dwExStyle", dw_ex_style, 0x240, 0x20, true, 0xd6179c0c97c6ca8c)
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