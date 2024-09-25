#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_IPSEC_OFFLOAD_V2_UPDATE_SA.Header", header, 0x0, 0x20, true, 0xc03c0c4c77641dc8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IPSEC_OFFLOAD_V2_UPDATE_SA.OffloadHandle", offload_handle, 0x40, 0x40, true, 0x13f2ed3603f19216)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::ipsec_offload_v2_operation_t), "_IPSEC_OFFLOAD_V2_UPDATE_SA.Operation", operation, 0x80, 0x20, true, 0x8d999b5ec5aab099)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPSEC_OFFLOAD_V2_UPDATE_SA.Spi", spi, 0xa0, 0x20, true, 0xfba8450521470f76)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IPSEC_OFFLOAD_V2_UPDATE_SA.SequenceNumberHighOrder", sequence_number_high_order, 0xc0, 0x20, true, 0x9e4e14c9fae5da2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif