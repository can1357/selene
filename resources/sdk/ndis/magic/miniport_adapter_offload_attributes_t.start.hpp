#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_MINIPORT_ADAPTER_OFFLOAD_ATTRIBUTES.Header", header, 0x0, 0x20, true, 0x255543dc140036d1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_t*), "_NDIS_MINIPORT_ADAPTER_OFFLOAD_ATTRIBUTES.DefaultOffloadConfiguration", default_offload_configuration, 0x40, 0x40, true, 0x665c7bb6458d0bd9)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_t*), "_NDIS_MINIPORT_ADAPTER_OFFLOAD_ATTRIBUTES.HardwareOffloadCapabilities", hardware_offload_capabilities, 0x80, 0x40, true, 0xd975ae0b75d19812)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::tcp_connection_offload_t*), "_NDIS_MINIPORT_ADAPTER_OFFLOAD_ATTRIBUTES.DefaultTcpConnectionOffloadConfiguration", default_tcp_connection_offload_configuration, 0xc0, 0x40, true, 0xf2e4dc6d9b675b09)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::tcp_connection_offload_t*), "_NDIS_MINIPORT_ADAPTER_OFFLOAD_ATTRIBUTES.TcpConnectionOffloadHardwareCapabilities", tcp_connection_offload_hardware_capabilities, 0x100, 0x40, true, 0x5329073f6bee69d0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif