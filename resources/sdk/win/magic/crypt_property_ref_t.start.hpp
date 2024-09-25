#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_CRYPT_PROPERTY_REF.pszProperty", psz_property, 0x0, 0x40, true, 0x9d1d44efd12197a9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_PROPERTY_REF.cbValue", cb_value, 0x40, 0x20, true, 0x6af0f89ef4fc5ab4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_CRYPT_PROPERTY_REF.pbValue", pb_value, 0x80, 0x40, true, 0xeb41f9f4b4fcf16f)
#else
#define _m00
#define _m01
#define _m02
#endif