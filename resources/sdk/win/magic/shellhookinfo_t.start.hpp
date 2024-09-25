#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "SHELLHOOKINFO.hwnd", hwnd, 0x0, 0x40, true, 0x700ecea44e57e2ed)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "SHELLHOOKINFO.rc", rc, 0x40, 0x80, true, 0x9d134e0f79f51ad)
#else
#define _m00
#define _m01
#endif