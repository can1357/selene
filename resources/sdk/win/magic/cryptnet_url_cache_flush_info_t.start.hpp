#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPTNET_URL_CACHE_FLUSH_INFO.cbSize", cb_size, 0x0, 0x20, true, 0xada2d2fd914783c4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPTNET_URL_CACHE_FLUSH_INFO.dwExemptSeconds", dw_exempt_seconds, 0x20, 0x20, true, 0xfa05cff9eb1d9411)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_CRYPTNET_URL_CACHE_FLUSH_INFO.ExpireTime", expire_time, 0x40, 0x40, true, 0xa63412a82abea730)
#else
#define _m00
#define _m01
#define _m02
#endif