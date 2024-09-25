#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_WWAN_PIN_LIST.Header", header, 0x0, 0x20, true, 0xd03f77adda429bf4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WWAN_PIN_LIST.uStatus", u_status, 0x20, 0x20, true, 0x4e0605785ee009b8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::pin_list_t), "_NDIS_WWAN_PIN_LIST.PinList", pin_list, 0x40, 0x0, true, 0x5e9e59b6aeb1b455)
#else
#define _m00
#define _m01
#define _m02
#endif