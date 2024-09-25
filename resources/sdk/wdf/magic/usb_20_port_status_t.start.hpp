#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_20_PORT_STATUS.AsUshort16", as_ushort16, 0x0, 0x10, true, 0x6f0d338d57d8cce5)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_20_PORT_STATUS.CurrentConnectStatus", current_connect_status, 0x0, 0x1, true, 0xf0b83f57ab37fb03, 1, uint16_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_20_PORT_STATUS.PortEnabledDisabled", port_enabled_disabled, 0x1, 0x1, true, 0x80e510c427975ec1, 1, uint16_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_20_PORT_STATUS.Suspend", suspend, 0x2, 0x1, true, 0xb58bcb7c465f94a9, 1, uint16_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_20_PORT_STATUS.OverCurrent", over_current, 0x3, 0x1, true, 0x61bb3b5a2eb02438, 1, uint16_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_20_PORT_STATUS.Reset", reset, 0x4, 0x1, true, 0xe89403c2e23f11c0, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_20_PORT_STATUS.L1", l1, 0x5, 0x1, true, 0x7f7cfaf37b8e46, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_20_PORT_STATUS.PortPower", port_power, 0x8, 0x1, true, 0x91cd9c5c02531d3b, 1, uint16_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_20_PORT_STATUS.LowSpeedDeviceAttached", low_speed_device_attached, 0x9, 0x1, true, 0x770e66e77b4199a9, 1, uint16_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_20_PORT_STATUS.HighSpeedDeviceAttached", high_speed_device_attached, 0xa, 0x1, true, 0xd4db8187bfeea4fa, 1, uint16_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_20_PORT_STATUS.PortTestMode", port_test_mode, 0xb, 0x1, true, 0x5be2262a110b8c69, 1, uint16_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_20_PORT_STATUS.PortIndicatorControl", port_indicator_control, 0xc, 0x1, true, 0x215a9fd619cef869, 1, uint16_t)
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