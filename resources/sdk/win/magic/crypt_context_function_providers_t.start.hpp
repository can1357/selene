#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_CONTEXT_FUNCTION_PROVIDERS.cProviders", c_providers, 0x0, 0x20, true, 0x5b52330c59b13eef)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t**), "_CRYPT_CONTEXT_FUNCTION_PROVIDERS.rgpszProviders", rgpsz_providers, 0x40, 0x40, true, 0xc4180333877000e0)
#else
#define _m00
#define _m01
#endif