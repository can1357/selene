#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NET_DEVICE_PNP_EVENT.Header", header, 0x0, 0x20, true, 0xce55400b79ff5e6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_DEVICE_PNP_EVENT.PortNumber", port_number, 0x20, 0x20, true, 0x7b454593ff45bc4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::device_pnp_event_t), "_NET_DEVICE_PNP_EVENT.DevicePnPEvent", device_pn_p_event, 0x40, 0x20, true, 0x2067ebd54c1a5b59)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NET_DEVICE_PNP_EVENT.InformationBuffer", information_buffer, 0x80, 0x40, true, 0xf82a0920ed8a5129)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_DEVICE_PNP_EVENT.InformationBufferLength", information_buffer_length, 0xc0, 0x20, true, 0xf3504a0a7ada5743)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_NET_DEVICE_PNP_EVENT.NdisReserved", ndis_reserved, 0xe0, 0x80, true, 0x53ce5ee778036c50)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif