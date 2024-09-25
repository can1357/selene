#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_NET_BUFFER_LIST_GFT_OFFLOAD_INFO.Flags", flags, 0x0, 0x20, true, 0x4e23324dfa1a1e74)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_NDIS_NET_BUFFER_LIST_GFT_OFFLOAD_INFO.VPortId", v_port_id, 0x20, 0x10, true, 0x7bf2991fb37eb128)
#else
#define _m00
#define _m01
#endif