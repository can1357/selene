#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_PROVIDERS.cProviders", c_providers, 0x0, 0x20, true, 0xdbffff77c816ed0d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t**), "_CRYPT_PROVIDERS.rgpszProviders", rgpsz_providers, 0x40, 0x40, true, 0x640f950772719fe4)
#else
#define _m00
#define _m01
#endif