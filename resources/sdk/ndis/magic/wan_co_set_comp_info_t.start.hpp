#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::wan_compress_info_t), "_NDIS_WAN_CO_SET_COMP_INFO.SendCapabilities", send_capabilities, 0x0, 0xa0, true, 0xbff78db991c37401)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::wan_compress_info_t), "_NDIS_WAN_CO_SET_COMP_INFO.RecvCapabilities", recv_capabilities, 0x1a0, 0xa0, true, 0x8b2f23c0194d3f4f)
#else
#define _m00
#define _m01
#endif