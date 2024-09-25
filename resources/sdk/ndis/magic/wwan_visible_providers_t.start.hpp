#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_WWAN_VISIBLE_PROVIDERS.Header", header, 0x0, 0x20, true, 0x7e0c597d7c222e4b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WWAN_VISIBLE_PROVIDERS.uStatus", u_status, 0x20, 0x20, true, 0x680a8b935d47c4e8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::list_header_t), "_NDIS_WWAN_VISIBLE_PROVIDERS.VisibleListHeader", visible_list_header, 0x40, 0x40, true, 0x14a06ca2a9d958a9)
#else
#define _m00
#define _m01
#define _m02
#endif