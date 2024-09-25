#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_QOS_OFFLOAD_CAPABILITIES.Header", header, 0x0, 0x20, true, 0x1cd4789b0727e0d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_OFFLOAD_CAPABILITIES.Flags", flags, 0x20, 0x20, true, 0x889757c720d7eb01)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_OFFLOAD_CAPABILITIES.SupportedSqTypes", supported_sq_types, 0x40, 0x20, true, 0x4dc644482f83aa31)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_NDIS_QOS_OFFLOAD_CAPABILITIES.TransmitCapSupported", transmit_cap_supported, 0x60, 0x40, true, 0xcb54610948dacea6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_NDIS_QOS_OFFLOAD_CAPABILITIES.TransmitReservationSupported", transmit_reservation_supported, 0xa0, 0x40, true, 0x356169d608d55979)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_NDIS_QOS_OFFLOAD_CAPABILITIES.ReceiveCapSupported", receive_cap_supported, 0xe0, 0x40, true, 0xef3dec4737d14726)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_NDIS_QOS_OFFLOAD_CAPABILITIES.TransmitGftCapSupported", transmit_gft_cap_supported, 0x120, 0x40, true, 0xfbe97595cfb958f8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_NDIS_QOS_OFFLOAD_CAPABILITIES.ReceiveGftCapSupported", receive_gft_cap_supported, 0x160, 0x40, true, 0x3a38f100346cd072)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_NDIS_QOS_OFFLOAD_CAPABILITIES.TcSupportedTable", tc_supported_table, 0x1a0, 0x40, true, 0x2f0b3cf99b51b8ae)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_OFFLOAD_CAPABILITIES.NumStandardSqsSupported", num_standard_sqs_supported, 0x1e0, 0x20, true, 0xdd1f773f77138509)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_OFFLOAD_CAPABILITIES.NumGftSqsSupported", num_gft_sqs_supported, 0x200, 0x20, true, 0xe6ce21767d17c980)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_OFFLOAD_CAPABILITIES.ReservationGranularitySupported", reservation_granularity_supported, 0x220, 0x20, true, 0xe97a64cb0fb7bb0a)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_QOS_OFFLOAD_CAPABILITIES.MaxNumSqInputs", max_num_sq_inputs, 0x240, 0x20, true, 0xdf7a24a73e3c6c34)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_QOS_OFFLOAD_CAPABILITIES.CrossTcTransmitMaxCapSupported", cross_tc_transmit_max_cap_supported, 0x260, 0x8, true, 0xa31fdecc633a3afd)
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
#define _m13
#endif