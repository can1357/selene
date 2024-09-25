#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "_SecPkgCredentials_SSIProviderW.sProviderName", s_provider_name, 0x0, 0x40, true, 0x2d547f49d5418391)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SecPkgCredentials_SSIProviderW.ProviderInfoLength", provider_info_length, 0x40, 0x20, true, 0x48de1e267fc85079)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char*), "_SecPkgCredentials_SSIProviderW.ProviderInfo", provider_info, 0x80, 0x40, true, 0x83dcc9948ace3ecf)
#else
#define _m00
#define _m01
#define _m02
#endif