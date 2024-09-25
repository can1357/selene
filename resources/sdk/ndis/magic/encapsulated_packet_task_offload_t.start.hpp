#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD.TransmitChecksumOffloadSupported", transmit_checksum_offload_supported, 0x0, 0x4, true, 0x87b23d59f64754bf, 4, uint32_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD.ReceiveChecksumOffloadSupported", receive_checksum_offload_supported, 0x4, 0x4, true, 0xe7eaa9855ac5f33d, 4, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD.LsoV2Supported", lso_v2_supported, 0x8, 0x4, true, 0xed2ffacf4c6b5ee4, 4, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD.RssSupported", rss_supported, 0xc, 0x4, true, 0xfd2b84001e77ecbd, 4, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD.VmqSupported", vmq_supported, 0x10, 0x4, true, 0xb2871c642518698, 4, uint32_t)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD.MaxHeaderSizeSupported", max_header_size_supported, 0x20, 0x20, true, 0x515f79b6be6673e1)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_NDIS_ENCAPSULATED_PACKET_TASK_OFFLOAD.UsoSupported", uso_supported, 0x0, 0x0, false, 0xe0713dad1e34c4e1, 4, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif