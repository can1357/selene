#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COSERVERINFO.dwReserved1", dw_reserved1, 0x0, 0x20, true, 0x13b7c1918fdd0e47)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_COSERVERINFO.pwszName", pwsz_name, 0x40, 0x40, true, 0x642530b3d1bbfe91)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::coauthinfo_t*), "_COSERVERINFO.pAuthInfo", p_auth_info, 0x80, 0x40, true, 0xff24584a7a52986)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_COSERVERINFO.dwReserved2", dw_reserved2, 0xc0, 0x20, true, 0x5b27325904bd2788)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif