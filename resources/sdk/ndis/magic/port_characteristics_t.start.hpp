#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PORT_CHARACTERISTICS.Header", header, 0x0, 0x20, true, 0xca576da8a553b113)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PORT_CHARACTERISTICS.PortNumber", port_number, 0x20, 0x20, true, 0xfc73742d58b0a39)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PORT_CHARACTERISTICS.Flags", flags, 0x40, 0x20, true, 0xa687db153293ae7f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_type_t), "_NDIS_PORT_CHARACTERISTICS.Type", type, 0x60, 0x20, true, 0x556ac4e852165d77)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_connect_state_t), "_NDIS_PORT_CHARACTERISTICS.MediaConnectState", media_connect_state, 0x80, 0x20, true, 0xe0c7f9fdad0d4070)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PORT_CHARACTERISTICS.XmitLinkSpeed", xmit_link_speed, 0xc0, 0x40, true, 0x4b7a60ccfb780604)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PORT_CHARACTERISTICS.RcvLinkSpeed", rcv_link_speed, 0x100, 0x40, true, 0x7b9dc214d12b7fd9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_direction_type_t), "_NDIS_PORT_CHARACTERISTICS.Direction", direction, 0x140, 0x20, true, 0xa619ab4f97cf9e9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_control_state_t), "_NDIS_PORT_CHARACTERISTICS.SendControlState", send_control_state, 0x160, 0x20, true, 0xbc507e1712915740)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_control_state_t), "_NDIS_PORT_CHARACTERISTICS.RcvControlState", rcv_control_state, 0x180, 0x20, true, 0x8f616410c3b76fe7)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_authorization_state_t), "_NDIS_PORT_CHARACTERISTICS.SendAuthorizationState", send_authorization_state, 0x1a0, 0x20, true, 0xa33b972446a5dbca)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_authorization_state_t), "_NDIS_PORT_CHARACTERISTICS.RcvAuthorizationState", rcv_authorization_state, 0x1c0, 0x20, true, 0xc1362fe5f2a1c0bd)
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
#endif