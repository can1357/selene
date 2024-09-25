#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CRYPT_PROVIDER_REFS.cProviders", c_providers, 0x0, 0x20, true, 0xc37d8cf3a17e6f02)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::crypt_provider_ref_t**), "_CRYPT_PROVIDER_REFS.rgpProviders", rgp_providers, 0x40, 0x40, true, 0xd3b1d1daafc9c412)
#else
#define _m00
#define _m01
#endif