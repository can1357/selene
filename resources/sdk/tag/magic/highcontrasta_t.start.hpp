#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagHIGHCONTRASTA.cbSize", cb_size, 0x0, 0x20, true, 0x80801026420d8028)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagHIGHCONTRASTA.dwFlags", dw_flags, 0x20, 0x20, true, 0x8b56013f362de29b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "tagHIGHCONTRASTA.lpszDefaultScheme", lpsz_default_scheme, 0x40, 0x40, true, 0x17fbd4327f6af202)
#else
#define _m00
#define _m01
#define _m02
#endif