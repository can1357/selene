#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTICKYKEYS.cbSize", cb_size, 0x0, 0x20, true, 0x51359857a9de39c0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTICKYKEYS.dwFlags", dw_flags, 0x20, 0x20, true, 0x637d8b25c4c1bb6a)
#else
#define _m00
#define _m01
#endif