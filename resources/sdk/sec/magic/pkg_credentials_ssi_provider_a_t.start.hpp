#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_SecPkgCredentials_SSIProviderA.sProviderName", s_provider_name, 0x0, 0x40, true, 0xf26837e92cb25d53)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgCredentials_SSIProviderA.ProviderInfoLength", provider_info_length, 0x40, 0x20, true, 0x126c9bf3ecb994e0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_SecPkgCredentials_SSIProviderA.ProviderInfo", provider_info, 0x80, 0x40, true, 0x37b5da3fe0166d6f)
#else
#define _m00
#define _m01
#define _m02
#endif