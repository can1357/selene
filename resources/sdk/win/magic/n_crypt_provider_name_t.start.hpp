#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "NCryptProviderName.pszName", psz_name, 0x0, 0x40, true, 0x41155fab87faca91)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "NCryptProviderName.pszComment", psz_comment, 0x40, 0x40, true, 0x87ee1951e8bdb336)
#else
#define _m00
#define _m01
#endif