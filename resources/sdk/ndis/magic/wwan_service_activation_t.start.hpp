#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_WWAN_SERVICE_ACTIVATION.Header", header, 0x0, 0x20, true, 0xbfc3b07ceb2e35fc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wwan::service_activation_t), "_NDIS_WWAN_SERVICE_ACTIVATION.ServiceActivation", service_activation, 0x20, 0x20, true, 0x5b47b468f07b95b8)
#else
#define _m00
#define _m01
#endif