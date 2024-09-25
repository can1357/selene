#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2.TransmitChecksumOffloadSupported", transmit_checksum_offload_supported, 0x0, 0x4, true, 0x517b6850c4710d3f, 4, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2.ReceiveChecksumOffloadSupported", receive_checksum_offload_supported, 0x4, 0x4, true, 0x17e10053b3c14eff, 4, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2.LsoV2Supported", lso_v2_supported, 0x8, 0x4, true, 0x55e3a09a2058b289, 4, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2.RssSupported", rss_supported, 0xc, 0x4, true, 0x34f44c76bfa4e9b2, 4, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2.VmqSupported", vmq_supported, 0x10, 0x4, true, 0xd647e135318a4060, 4, uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2.MaxHeaderSizeSupported", max_header_size_supported, 0x20, 0x20, true, 0x5a60b07930fe669)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD_V2.UsoSupported", uso_supported, 0x0, 0x0, false, 0xb0c91e4773421bbe, 4, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif