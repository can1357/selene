#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 7>), "_WWAN_PROVIDER.ProviderId", provider_id, 0x0, 0x70, true, 0x1bc706f6f31c2d3c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_PROVIDER.ProviderState", provider_state, 0x80, 0x20, true, 0x35a62923aa98e2fe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 21>), "_WWAN_PROVIDER.ProviderName", provider_name, 0xa0, 0x50, true, 0xd805c6072069d61c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WWAN_PROVIDER.WwanDataClass", wwan_data_class, 0x200, 0x20, true, 0xcbdf8edad9f0875c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif