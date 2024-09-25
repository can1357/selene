#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_30_PORT_STATUS.AsUshort16", as_ushort16, 0x0, 0x10, true, 0xcc560641b127b525)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_30_PORT_STATUS.CurrentConnectStatus", current_connect_status, 0x0, 0x1, true, 0x42400420bae032f4, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_30_PORT_STATUS.PortEnabledDisabled", port_enabled_disabled, 0x1, 0x1, true, 0x8ceafefa5f6c672b, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_30_PORT_STATUS.OverCurrent", over_current, 0x3, 0x1, true, 0x94eb6656883c6de1, 1, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_30_PORT_STATUS.Reset", reset, 0x4, 0x1, true, 0xe8f1ae0f238e6215, 1, uint16_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_USB_30_PORT_STATUS.PortLinkState", port_link_state, 0x5, 0x4, true, 0x808102311f7dba1f, 4, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_30_PORT_STATUS.PortPower", port_power, 0x9, 0x1, true, 0xadb198c7eba37148, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_USB_30_PORT_STATUS.NegotiatedDeviceSpeed", negotiated_device_speed, 0xa, 0x3, true, 0xcc2a2d9d550c3113, 3, uint16_t)
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