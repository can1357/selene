#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0x84a596e9b021faf6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0x4aa475c0297463f6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR.bDevCapabilityType", b_dev_capability_type, 0x10, 0x8, true, 0x47d1c6f432ba5c67)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR.bReserved", b_reserved, 0x18, 0x8, true, 0x6bb11d52c07ffe72)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR.bmCapabilities.AsUshort", as_ushort, 0x0, 0x10, true, 0x4797dadaeba10bef)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR.bmCapabilities.BatteryCharging", battery_charging, 0x0, 0x1, true, 0xc444800c0bc341c3, 1, uint16_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR.bmCapabilities.USBPowerDelivery", usb_power_delivery, 0x1, 0x1, true, 0x751c6969ec4b5397, 1, uint16_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR.bmCapabilities.USBTypeCCurrent", usb_type_c_current, 0x2, 0x1, true, 0x11ca5751afe83b1c, 1, uint16_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_bm_capabilities_t), "_USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR.bmCapabilities", bm_capabilities, 0x20, 0x10, true, 0x28d80205f54c39f1)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR.wMinVoltage", w_min_voltage, 0x30, 0x10, true, 0x4c15d5551173192b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR.wMaxVoltage", w_max_voltage, 0x40, 0x10, true, 0xa9d7d3ad5da2d2e7)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR.wReserved", w_reserved, 0x50, 0x10, true, 0xa6415db36288617c)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR.dwMaxOperatingPower", dw_max_operating_power, 0x60, 0x20, true, 0x21747c626399df78)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR.dwMaxPeakPower", dw_max_peak_power, 0x80, 0x20, true, 0x7b170ca2cbeaa7c0)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_DEVICE_CAPABILITY_PD_CONSUMER_PORT_DESCRIPTOR.dwMaxPeakPowerTime", dw_max_peak_power_time, 0xa0, 0x20, true, 0xd097e91cadf13f4d)
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
#define _m12
#define _m13
#define _m14
#endif