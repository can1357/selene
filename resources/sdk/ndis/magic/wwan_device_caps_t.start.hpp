#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_WWAN_DEVICE_CAPS.Header", header, 0x0, 0x20, true, 0x3a8da3afe0ce6955)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WWAN_DEVICE_CAPS.uStatus", u_status, 0x20, 0x20, true, 0xf0ef27c7edd79348)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::device_caps_t), "_NDIS_WWAN_DEVICE_CAPS.DeviceCaps", device_caps, 0x40, 0xc0, true, 0xe122a9d085669e62)
#else
#define _m00
#define _m01
#define _m02
#endif