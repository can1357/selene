#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FLASHWINFO.cbSize", cb_size, 0x0, 0x20, true, 0x1221adf517b59d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hwnd_t*), "FLASHWINFO.hwnd", hwnd, 0x40, 0x40, true, 0xd0771a22f0edd35d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FLASHWINFO.dwFlags", dw_flags, 0x80, 0x20, true, 0xc50c96b6a37230f9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FLASHWINFO.uCount", u_count, 0xa0, 0x20, true, 0x3b54f512c9d66e87)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FLASHWINFO.dwTimeout", dw_timeout, 0xc0, 0x20, true, 0x2113256fa47d9ea9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif