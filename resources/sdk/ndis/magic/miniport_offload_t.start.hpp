#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_OFFLOAD.SupportsOffload", supports_offload, 0x0, 0x8, true, 0x78f2a6d13f92c564)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_OFFLOAD.SupportsTopOffload", supports_top_offload, 0x8, 0x8, true, 0x8857de415d845404)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_OFFLOAD.SupportsTcpConnectionOffload", supports_tcp_connection_offload, 0x10, 0x8, true, 0xd8c6f8e5324afd6d)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_OFFLOAD.SupportsTopTcpConnectionOffload", supports_top_tcp_connection_offload, 0x18, 0x8, true, 0xa400d0a779b80593)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_OFFLOAD.TopConnectionOffloadPaused", top_connection_offload_paused, 0x20, 0x8, true, 0x3435addb764e3b4d)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_OFFLOAD.RSCDisallowed", rsc_disallowed, 0x28, 0x8, true, 0x4794772bdff9dfc3)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_t), "_NDIS_MINIPORT_OFFLOAD.MiniportCurrentConfig", miniport_current_config, 0x40, 0xc0, true, 0xfcb48c70b93d2592)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_t), "_NDIS_MINIPORT_OFFLOAD.TopCapabilities", top_capabilities, 0x700, 0xc0, true, 0x930a9e8dfedf6634)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_t), "_NDIS_MINIPORT_OFFLOAD.MiniportInitialConfig", miniport_initial_config, 0xdc0, 0xc0, true, 0xa1942711b4855a16)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_t), "_NDIS_MINIPORT_OFFLOAD.MiniportHardwareCapabilities", miniport_hardware_capabilities, 0x1480, 0xc0, true, 0x16dd990698f96e93)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_encapsulation_t), "_NDIS_MINIPORT_OFFLOAD.MiniportSetEncapsulation", miniport_set_encapsulation, 0x1b40, 0xe0, true, 0xdcc92c6d198acbc3)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_encapsulation_t), "_NDIS_MINIPORT_OFFLOAD.TopSetEncapsulation", top_set_encapsulation, 0x1c20, 0xe0, true, 0xbfefce8a334a106c)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_encapsulation_t), "_NDIS_MINIPORT_OFFLOAD.TopMergedEncapsulation", top_merged_encapsulation, 0x1d00, 0xe0, true, 0x3c97471af6acab55)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::offload_encapsulation_t), "_NDIS_MINIPORT_OFFLOAD.MiniportMergedEncapsulation", miniport_merged_encapsulation, 0x1de0, 0xe0, true, 0x5752239a661cc8cc)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::tcp_connection_offload_t), "_NDIS_MINIPORT_OFFLOAD.TopTcpConnectionOffloadCapabilities", top_tcp_connection_offload_capabilities, 0x1ec0, 0xa0, true, 0x30e2ee67cf0349b9)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::tcp_connection_offload_t), "_NDIS_MINIPORT_OFFLOAD.MiniportTcpConnectionOffloadCurrentConfig", miniport_tcp_connection_offload_current_config, 0x1f60, 0xa0, true, 0x6227fb157a837a0a)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::tcp_connection_offload_t), "_NDIS_MINIPORT_OFFLOAD.MiniportHwTcpConnectionOffloadCapabilities", miniport_hw_tcp_connection_offload_capabilities, 0x2000, 0xa0, true, 0x73e5e644e48082f8)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::tcp_connection_offload_parameters_t), "_NDIS_MINIPORT_OFFLOAD.TopTcpConnectionParameters", top_tcp_connection_parameters, 0x20a0, 0xe0, true, 0x499c39e31afe1932)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::tcp_connection_offload_parameters_t), "_NDIS_MINIPORT_OFFLOAD.MiniportTcpConnectionParameters", miniport_tcp_connection_parameters, 0x2280, 0xe0, true, 0x93441d0648cb5391)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 144>), "_NDIS_MINIPORT_OFFLOAD.MiniportTask", miniport_task, 0x2460, 0x80, true, 0x4cbe7da3a5c9090b)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_OFFLOAD.MiniportTaskSize", miniport_task_size, 0x28e0, 0x20, true, 0xdbb4d86da4009d8e)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_OFFLOAD.Ndis5Xsum", ndis5_xsum, 0x2900, 0x8, true, 0x9621a9397242ddec)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_OFFLOAD.Ndis5LSO", ndis5lso, 0x2908, 0x8, true, 0x3f7dd8cb9160c725)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_MINIPORT_OFFLOAD.Ndis5IPsec", ndis5i_psec, 0x2910, 0x8, true, 0xdbe4d31ff7dcc2ff)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_OFFLOAD.MiniportRequestBuffer", miniport_request_buffer, 0x2940, 0x40, true, 0xcdb6271b5d4e7d8a)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_OFFLOAD.MiniportRequestOid", miniport_request_oid, 0x2980, 0x20, true, 0x6c363b4b95711e77)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_OFFLOAD.MiniportRequestBufferLength", miniport_request_buffer_length, 0x29a0, 0x20, true, 0x36e6a161cfe2f121)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#endif