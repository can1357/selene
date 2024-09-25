#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_LINK_PARAMETERS.Header", header, 0x0, 0x20, true, 0x1e134a62cc351728)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_duplex_state_t), "_NDIS_LINK_PARAMETERS.MediaDuplexState", media_duplex_state, 0x20, 0x20, true, 0xddb3a524949c165a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_LINK_PARAMETERS.XmitLinkSpeed", xmit_link_speed, 0x40, 0x40, true, 0x55e1fa56eff0915a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_LINK_PARAMETERS.RcvLinkSpeed", rcv_link_speed, 0x80, 0x40, true, 0xe70027e012173266)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::supported_pause_functions_t), "_NDIS_LINK_PARAMETERS.PauseFunctions", pause_functions, 0xc0, 0x20, true, 0x73d6e8ff3c1e7631)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_LINK_PARAMETERS.AutoNegotiationFlags", auto_negotiation_flags, 0xe0, 0x20, true, 0x435c1df9519be42e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif