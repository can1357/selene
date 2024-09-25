#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_LINK_INFO.MaxSendFrameSize", max_send_frame_size, 0x0, 0x20, true, 0xdb7bb7c8085e4fa5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_LINK_INFO.MaxRecvFrameSize", max_recv_frame_size, 0x20, 0x20, true, 0xfc8abf8996a70033)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_LINK_INFO.SendFramingBits", send_framing_bits, 0x40, 0x20, true, 0xfb5d1ccd45912068)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_LINK_INFO.RecvFramingBits", recv_framing_bits, 0x60, 0x20, true, 0xc34ea16ebbc30060)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_LINK_INFO.SendCompressionBits", send_compression_bits, 0x80, 0x20, true, 0x973d79e1c566e4b3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_LINK_INFO.RecvCompressionBits", recv_compression_bits, 0xa0, 0x20, true, 0xfd99106825d81f1c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_LINK_INFO.SendACCM", send_accm, 0xc0, 0x20, true, 0x6516ccdb2cd505b2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_WAN_CO_GET_LINK_INFO.RecvACCM", recv_accm, 0xe0, 0x20, true, 0x99efb48c87d2a5bd)
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