#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagHIGHCONTRASTW.cbSize", cb_size, 0x0, 0x20, true, 0x54d55d79075673a9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagHIGHCONTRASTW.dwFlags", dw_flags, 0x20, 0x20, true, 0x2408276ca32f18c7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagHIGHCONTRASTW.lpszDefaultScheme", lpsz_default_scheme, 0x40, 0x40, true, 0x1fb8987158df5e03)
#else
#define _m00
#define _m01
#define _m02
#endif