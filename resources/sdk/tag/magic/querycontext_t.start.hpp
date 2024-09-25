#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagQUERYCONTEXT.dwContext", dw_context, 0x0, 0x20, true, 0xb4fafe18d1780bd4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::csplatform_t), "tagQUERYCONTEXT.Platform", platform, 0x20, 0x80, true, 0x111e61b2b0c46eea)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagQUERYCONTEXT.Locale", locale, 0xa0, 0x20, true, 0x603cfb02dc3ce1fb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagQUERYCONTEXT.dwVersionHi", dw_version_hi, 0xc0, 0x20, true, 0x7db54535e6541dff)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagQUERYCONTEXT.dwVersionLo", dw_version_lo, 0xe0, 0x20, true, 0x8228f4d9ceffc92b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif