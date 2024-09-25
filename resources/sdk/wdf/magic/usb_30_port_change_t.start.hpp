#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_30_PORT_CHANGE.AsUshort16", as_ushort16, 0x0, 0x10, true, 0x87211ff8a747e2a0)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_30_PORT_CHANGE.ConnectStatusChange", connect_status_change, 0x0, 0x1, true, 0x8a6b595e86188b34, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_30_PORT_CHANGE.OverCurrentIndicatorChange", over_current_indicator_change, 0x3, 0x1, true, 0x292d2f3f381dfafd, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_30_PORT_CHANGE.ResetChange", reset_change, 0x4, 0x1, true, 0x75872440375ab6df, 1, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_30_PORT_CHANGE.BHResetChange", bh_reset_change, 0x5, 0x1, true, 0x7888873f9581837e, 1, uint16_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_30_PORT_CHANGE.PortLinkStateChange", port_link_state_change, 0x6, 0x1, true, 0x5ac28c9caefc7875, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_30_PORT_CHANGE.PortConfigErrorChange", port_config_error_change, 0x7, 0x1, true, 0x2ac23fc1a55535e1, 1, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif