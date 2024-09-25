#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_WWAN_PREFERRED_PROVIDERS.Header", header, 0x0, 0x20, true, 0x526448694bfdc572)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WWAN_PREFERRED_PROVIDERS.uStatus", u_status, 0x20, 0x20, true, 0xf3941ee6e00ef604)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::list_header_t), "_NDIS_WWAN_PREFERRED_PROVIDERS.PreferredListHeader", preferred_list_header, 0x40, 0x40, true, 0xa7ac38ff2b3d20cf)
#else
#define _m00
#define _m01
#define _m02
#endif