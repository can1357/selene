#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSRTL_MUP_PROVIDER_INFO_LEVEL_2.ProviderId", provider_id, 0x0, 0x20, true, 0x110bbb444b943cac)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FSRTL_MUP_PROVIDER_INFO_LEVEL_2.ProviderName", provider_name, 0x40, 0x80, true, 0xf5af0ea2b802de76)
#else
#define _m00
#define _m01
#endif