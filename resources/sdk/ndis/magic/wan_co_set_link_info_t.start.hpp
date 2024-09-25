#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_SET_LINK_INFO.MaxSendFrameSize", max_send_frame_size, 0x0, 0x20, true, 0xf58b77978c82fb95)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_SET_LINK_INFO.MaxRecvFrameSize", max_recv_frame_size, 0x20, 0x20, true, 0xe9e264dee63e8001)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_SET_LINK_INFO.SendFramingBits", send_framing_bits, 0x40, 0x20, true, 0xaa4dfffd02bef6bf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_SET_LINK_INFO.RecvFramingBits", recv_framing_bits, 0x60, 0x20, true, 0xa7095bc1e4577739)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_SET_LINK_INFO.SendCompressionBits", send_compression_bits, 0x80, 0x20, true, 0x5470bdca8eeb30b9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_SET_LINK_INFO.RecvCompressionBits", recv_compression_bits, 0xa0, 0x20, true, 0xc6fc72da2475ade3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_SET_LINK_INFO.SendACCM", send_accm, 0xc0, 0x20, true, 0xaa013233cc878385)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_SET_LINK_INFO.RecvACCM", recv_accm, 0xe0, 0x20, true, 0xa1e64647756bbf55)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif