#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_OFFLOAD.Header", header, 0x0, 0x20, true, 0xd588b990ea261e9a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::tcp_ip_checksum_offload_t), "_NDIS_OFFLOAD.Checksum", checksum, 0x20, 0x0, true, 0xbf80c718bd6efa90)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::tcp_large_send_offload_v1_t), "_NDIS_OFFLOAD.LsoV1", lso_v1, 0x120, 0x80, true, 0xc0fe84cccbfbbf61)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ipsec_offload_v1_t), "_NDIS_OFFLOAD.IPsecV1", i_psec_v1, 0x1a0, 0xe0, true, 0xb576e89140c53900)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::tcp_large_send_offload_v2_t), "_NDIS_OFFLOAD.LsoV2", lso_v2, 0x280, 0xe0, true, 0x1683b8c011208371)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_OFFLOAD.Flags", flags, 0x360, 0x20, true, 0x4978c5be381ecc53)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::ipsec_offload_v2_t), "_NDIS_OFFLOAD.IPsecV2", i_psec_v2, 0x380, 0x0, true, 0x45400b7518ff49ce)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::tcp_recv_seg_coalesce_offload_t), "_NDIS_OFFLOAD.Rsc", rsc, 0x480, 0x10, true, 0x3f09251470bbbbf2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::encapsulated_packet_task_offload_t), "_NDIS_OFFLOAD.EncapsulatedPacketTaskOffloadGre", encapsulated_packet_task_offload_gre, 0x4a0, 0x40, true, 0x7098b83229211971)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::encapsulated_packet_task_offload_v2_t), "_NDIS_OFFLOAD.EncapsulatedPacketTaskOffloadVxlan", encapsulated_packet_task_offload_vxlan, 0x4e0, 0xa0, true, 0xe38db5cb9dd2dc71)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_OFFLOAD.EncapsulationTypes", encapsulation_types, 0x580, 0x8, true, 0x65a17ac3651731e4)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::rfc6877_464xlat_offload_t), "_NDIS_OFFLOAD.Rfc6877Xlat", rfc6877_xlat, 0x5a0, 0x40, true, 0x36c4cc854c6e5fb5)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::udp_segmentation_offload_t), "_NDIS_OFFLOAD.UdpSegmentation", udp_segmentation, 0x5e0, 0xe0, true, 0x7ee6affd23363b6a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif