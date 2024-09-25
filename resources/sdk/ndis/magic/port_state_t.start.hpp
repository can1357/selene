#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PORT_STATE.Header", header, 0x0, 0x20, true, 0x90bbca241ac33e2c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_media_connect_state_t), "_NDIS_PORT_STATE.MediaConnectState", media_connect_state, 0x20, 0x20, true, 0x5668b0076ce73135)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PORT_STATE.XmitLinkSpeed", xmit_link_speed, 0x40, 0x40, true, 0xda81dfb5c73bb547)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_PORT_STATE.RcvLinkSpeed", rcv_link_speed, 0x80, 0x40, true, 0x16aa5e8c6f72330e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::net_if_direction_type_t), "_NDIS_PORT_STATE.Direction", direction, 0xc0, 0x20, true, 0x5c3eec22b892d756)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_control_state_t), "_NDIS_PORT_STATE.SendControlState", send_control_state, 0xe0, 0x20, true, 0xcbab63d94909d307)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_control_state_t), "_NDIS_PORT_STATE.RcvControlState", rcv_control_state, 0x100, 0x20, true, 0x8ba7fb7b007ab62e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_authorization_state_t), "_NDIS_PORT_STATE.SendAuthorizationState", send_authorization_state, 0x120, 0x20, true, 0x5b91a58e44f0ba7c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_authorization_state_t), "_NDIS_PORT_STATE.RcvAuthorizationState", rcv_authorization_state, 0x140, 0x20, true, 0xf800a27ac7181659)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PORT_STATE.Flags", flags, 0x160, 0x20, true, 0x4c3309ecf87d8987)
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
#endif