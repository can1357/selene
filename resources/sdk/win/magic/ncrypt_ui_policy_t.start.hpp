#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__NCRYPT_UI_POLICY.dwVersion", dw_version, 0x0, 0x20, true, 0x4d3c1c0390da3b31)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__NCRYPT_UI_POLICY.dwFlags", dw_flags, 0x20, 0x20, true, 0x50d8f3e6b008c91f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "__NCRYPT_UI_POLICY.pszCreationTitle", psz_creation_title, 0x40, 0x40, true, 0x36a5fcdf907231a3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "__NCRYPT_UI_POLICY.pszFriendlyName", psz_friendly_name, 0x80, 0x40, true, 0x909229b336fb9dce)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const wchar_t*), "__NCRYPT_UI_POLICY.pszDescription", psz_description, 0xc0, 0x40, true, 0x1a661acc0d4bf821)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif