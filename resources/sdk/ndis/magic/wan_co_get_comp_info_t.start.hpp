#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::wan_compress_info_t), "_NDIS_WAN_CO_GET_COMP_INFO.SendCapabilities", send_capabilities, 0x0, 0xa0, true, 0xa0d18475567ff746)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::wan_compress_info_t), "_NDIS_WAN_CO_GET_COMP_INFO.RecvCapabilities", recv_capabilities, 0x1a0, 0xa0, true, 0xa0ce1deba0497f0)
#else
#define _m00
#define _m01
#endif