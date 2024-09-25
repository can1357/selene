#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CRYPT_IMAGE_REF.pszImage", psz_image, 0x0, 0x40, true, 0x2c323e945f0ef09b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_IMAGE_REF.dwFlags", dw_flags, 0x40, 0x20, true, 0x7d37d88d505b1baa)
#else
#define _m00
#define _m01
#endif