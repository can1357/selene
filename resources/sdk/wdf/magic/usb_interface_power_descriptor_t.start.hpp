#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_POWER_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0x3b1bf0354b9e8c78)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_POWER_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0xa62a64bcc799a578)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_POWER_DESCRIPTOR.bmCapabilitiesFlags", bm_capabilities_flags, 0x10, 0x8, true, 0x71a2d6d217e40da8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_POWER_DESCRIPTOR.bBusPowerSavingD1", b_bus_power_saving_d1, 0x18, 0x8, true, 0xc5c4410644777145)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_POWER_DESCRIPTOR.bSelfPowerSavingD1", b_self_power_saving_d1, 0x20, 0x8, true, 0x129d2600dc4caca9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_POWER_DESCRIPTOR.bBusPowerSavingD2", b_bus_power_saving_d2, 0x28, 0x8, true, 0x446855731fe9a187)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_POWER_DESCRIPTOR.bSelfPowerSavingD2", b_self_power_saving_d2, 0x30, 0x8, true, 0x207bf0574633463f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_POWER_DESCRIPTOR.bBusPowerSavingD3", b_bus_power_saving_d3, 0x38, 0x8, true, 0x6f69deeb37deb803)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_POWER_DESCRIPTOR.bSelfPowerSavingD3", b_self_power_saving_d3, 0x40, 0x8, true, 0xa559a1179223e302)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_INTERFACE_POWER_DESCRIPTOR.TransitionTimeFromD1", transition_time_from_d1, 0x48, 0x10, true, 0x38d29920fa32dfd5)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_INTERFACE_POWER_DESCRIPTOR.TransitionTimeFromD2", transition_time_from_d2, 0x58, 0x10, true, 0x9f9a14c035867759)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_INTERFACE_POWER_DESCRIPTOR.TransitionTimeFromD3", transition_time_from_d3, 0x68, 0x10, true, 0xd02b099ba02cacb7)
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