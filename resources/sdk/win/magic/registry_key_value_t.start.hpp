#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "RegistryKeyValue.key", key, 0x0, 0x0, false, 0x6b0e46e6ffaa8781)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "RegistryKeyValue.value", value, 0x0, 0x0, false, 0xded96967f8a6208f)
#else
#define _m00
#define _m01
#endif