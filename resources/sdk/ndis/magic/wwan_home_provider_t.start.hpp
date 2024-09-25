#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_WWAN_HOME_PROVIDER.Header", header, 0x0, 0x20, true, 0x6531713ae86022ff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WWAN_HOME_PROVIDER.uStatus", u_status, 0x20, 0x20, true, 0x792fba7bf48c692c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::provider_t), "_NDIS_WWAN_HOME_PROVIDER.Provider", provider, 0x40, 0x20, true, 0xa7b1fb85d7f9da6d)
#else
#define _m00
#define _m01
#define _m02
#endif