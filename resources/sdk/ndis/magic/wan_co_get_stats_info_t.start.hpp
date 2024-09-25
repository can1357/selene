#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.BytesSent", bytes_sent, 0x0, 0x20, true, 0xeb413d7c10813a67)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.BytesRcvd", bytes_rcvd, 0x20, 0x20, true, 0x7c2ec6ab367aba43)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.FramesSent", frames_sent, 0x40, 0x20, true, 0xd084295859a6eb06)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.FramesRcvd", frames_rcvd, 0x60, 0x20, true, 0x23124cb495f7a089)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.CRCErrors", crc_errors, 0x80, 0x20, true, 0x7efb859819109a04)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.TimeoutErrors", timeout_errors, 0xa0, 0x20, true, 0x869700c8d78315c1)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.AlignmentErrors", alignment_errors, 0xc0, 0x20, true, 0x7bf1f704277a7c2)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.SerialOverrunErrors", serial_overrun_errors, 0xe0, 0x20, true, 0x714deadd0434c98d)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.FramingErrors", framing_errors, 0x100, 0x20, true, 0x74e35e566530a7c7)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.BufferOverrunErrors", buffer_overrun_errors, 0x120, 0x20, true, 0xb93f0cb0cf9d9482)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.BytesTransmittedUncompressed", bytes_transmitted_uncompressed, 0x140, 0x20, true, 0xb6c681cc9e8ce4fb)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.BytesReceivedUncompressed", bytes_received_uncompressed, 0x160, 0x20, true, 0x1fad88d59edcf675)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.BytesTransmittedCompressed", bytes_transmitted_compressed, 0x180, 0x20, true, 0xa291782858451fe0)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.BytesReceivedCompressed", bytes_received_compressed, 0x1a0, 0x20, true, 0x67caa9b3245e590f)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.TunnelPacketsRecieved", tunnel_packets_recieved, 0x1c0, 0x20, true, 0x4dbecd7d55560569)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.TunnelRecievePacketsPending", tunnel_recieve_packets_pending, 0x1e0, 0x20, true, 0xd3d06aee5a44470a)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.TunnelPacketsIndicatedUp", tunnel_packets_indicated_up, 0x200, 0x20, true, 0xa33783248c771b23)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.TunnelRecievePacketsRejected", tunnel_recieve_packets_rejected, 0x220, 0x20, true, 0x2023aa886f5a9185)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.TunnelPacketsSent", tunnel_packets_sent, 0x240, 0x20, true, 0xe3740ae3f782780e)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.TunnelPacketsSentComplete", tunnel_packets_sent_complete, 0x260, 0x20, true, 0x1df09a819d22b31)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.TunnelTransmitPacketsPending", tunnel_transmit_packets_pending, 0x280, 0x20, true, 0x25219786f0a7d2ef)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.TunnelPacketsTransmitError", tunnel_packets_transmit_error, 0x2a0, 0x20, true, 0x3867f1e243748119)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.TunnelPacketsSentError", tunnel_packets_sent_error, 0x2c0, 0x20, true, 0x61709336e152fc0)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.TunnelTransmitPacketsRejected", tunnel_transmit_packets_rejected, 0x2e0, 0x20, true, 0x9048e8fbb7e435a1)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.TunnelAcksSent", tunnel_acks_sent, 0x300, 0x20, true, 0x26edab5e828834c1)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.TunnelAcksSentComplete", tunnel_acks_sent_complete, 0x320, 0x20, true, 0x76b138942edebcf)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.TunnelGeneric1", tunnel_generic1, 0x340, 0x20, true, 0x72c55bb17596fbd5)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.TunnelGeneric2", tunnel_generic2, 0x360, 0x20, true, 0x3201d2b4590e2915)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_STATS_INFO.TunnelGeneric3", tunnel_generic3, 0x380, 0x20, true, 0xcc4183abd6f50605)
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
#define _m027
#define _m028
#endif