#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_pnp_event_code_t), "_NET_PNP_EVENT.NetEvent", net_event, 0x0, 0x20, true, 0xd9867bbe69a70953)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NET_PNP_EVENT.Buffer", buffer, 0x40, 0x40, true, 0x83f0be3c114f4cac)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NET_PNP_EVENT.BufferLength", buffer_length, 0x80, 0x20, true, 0xb9f645d1b7404a2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "_NET_PNP_EVENT.NdisReserved", ndis_reserved, 0xc0, 0x0, true, 0x4c8ed69c9e6c6e08)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "_NET_PNP_EVENT.TransportReserved", transport_reserved, 0x1c0, 0x0, true, 0x95de6ca6a0bd1c32)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "_NET_PNP_EVENT.TdiReserved", tdi_reserved, 0x2c0, 0x0, true, 0x4330c8182751aad4)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 4>), "_NET_PNP_EVENT.TdiClientReserved", tdi_client_reserved, 0x3c0, 0x0, true, 0xe6e6d93e10bb5855)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif