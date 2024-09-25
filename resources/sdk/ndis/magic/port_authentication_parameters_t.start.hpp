#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_PORT_AUTHENTICATION_PARAMETERS.Header", header, 0x0, 0x20, true, 0xb44ddb72ca56175)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_control_state_t), "_NDIS_PORT_AUTHENTICATION_PARAMETERS.SendControlState", send_control_state, 0x20, 0x20, true, 0x7fc20fdc6bd567da)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_control_state_t), "_NDIS_PORT_AUTHENTICATION_PARAMETERS.RcvControlState", rcv_control_state, 0x40, 0x20, true, 0xc9158256ae2ab773)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_authorization_state_t), "_NDIS_PORT_AUTHENTICATION_PARAMETERS.SendAuthorizationState", send_authorization_state, 0x60, 0x20, true, 0x10f289af36d3a010)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::port_authorization_state_t), "_NDIS_PORT_AUTHENTICATION_PARAMETERS.RcvAuthorizationState", rcv_authorization_state, 0x80, 0x20, true, 0xc2e35c09390ee352)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif