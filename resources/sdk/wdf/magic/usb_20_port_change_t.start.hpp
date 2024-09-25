#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_20_PORT_CHANGE.AsUshort16", as_ushort16, 0x0, 0x10, true, 0x4fa99bac21d21f9f)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_20_PORT_CHANGE.ConnectStatusChange", connect_status_change, 0x0, 0x1, true, 0xe4167d5b867ddcf4, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_20_PORT_CHANGE.PortEnableDisableChange", port_enable_disable_change, 0x1, 0x1, true, 0x8726dc3fd5cde0ea, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_20_PORT_CHANGE.SuspendChange", suspend_change, 0x2, 0x1, true, 0xfcf53a1048d11389, 1, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_20_PORT_CHANGE.OverCurrentIndicatorChange", over_current_indicator_change, 0x3, 0x1, true, 0x22f06d22a77d5a15, 1, uint16_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_20_PORT_CHANGE.ResetChange", reset_change, 0x4, 0x1, true, 0x33c0a0aaba1819c6, 1, uint16_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif