#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_WWAN_DRIVER_CAPS.Header", header, 0x0, 0x20, true, 0xc4e8ccecd8147c3c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::driver_caps_t), "_NDIS_WWAN_DRIVER_CAPS.DriverCaps", driver_caps, 0x20, 0x60, true, 0x5ea290b551323c75)
#else
#define _m00
#define _m01
#endif