#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_LINK_STATE.Header", header, 0x0, 0x20, true, 0xe1d8ee11bb5117ac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_connect_state_t), "_NDIS_LINK_STATE.MediaConnectState", media_connect_state, 0x20, 0x20, true, 0x86bd85c15cc54120)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_duplex_state_t), "_NDIS_LINK_STATE.MediaDuplexState", media_duplex_state, 0x40, 0x20, true, 0x3183be678504922c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_LINK_STATE.XmitLinkSpeed", xmit_link_speed, 0x80, 0x40, true, 0xc6fcfbb2a0a42546)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_LINK_STATE.RcvLinkSpeed", rcv_link_speed, 0xc0, 0x40, true, 0xb6e5e66084b137c8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::supported_pause_functions_t), "_NDIS_LINK_STATE.PauseFunctions", pause_functions, 0x100, 0x20, true, 0x6a798cb717fc00f2)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_LINK_STATE.AutoNegotiationFlags", auto_negotiation_flags, 0x120, 0x20, true, 0x73d596d553c451cb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif