#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "NCryptKeyName.pszName", psz_name, 0x0, 0x40, true, 0xdd8471c8a7c69799)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "NCryptKeyName.pszAlgid", psz_algid, 0x40, 0x40, true, 0x6afcbd971591e3fa)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NCryptKeyName.dwLegacyKeySpec", dw_legacy_key_spec, 0x80, 0x20, true, 0xe8de8d7f09491546)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NCryptKeyName.dwFlags", dw_flags, 0xa0, 0x20, true, 0x855e7f871f90a7bc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif