#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_WWAN_READY_INFO.Header", header, 0x0, 0x20, true, 0xe5cde2e3f10e0aea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::ready_info_t), "_NDIS_WWAN_READY_INFO.ReadyInfo", ready_info, 0x20, 0x0, true, 0x1f618467227fe6eb)
#else
#define _m00
#define _m01
#endif