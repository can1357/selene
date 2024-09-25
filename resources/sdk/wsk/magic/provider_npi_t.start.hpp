#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WSK_PROVIDER_NPI.Client", client, 0x0, 0x40, true, 0x3601681565236690)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct wsk::provider_dispatch_t*), "_WSK_PROVIDER_NPI.Dispatch", dispatch, 0x40, 0x40, true, 0xd5045acbd468654)
#else
#define _m00
#define _m01
#endif