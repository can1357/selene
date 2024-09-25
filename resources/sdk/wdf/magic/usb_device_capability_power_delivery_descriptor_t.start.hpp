#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0xb5c30d694878665b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0xcad90bd6832f2700)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bDevCapabilityType", b_dev_capability_type, 0x10, 0x8, true, 0xd80186f4f1b93f2c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bReserved", b_reserved, 0x18, 0x8, true, 0x3b661f54aab79929)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bmAttributes.AsUlong", as_ulong, 0x0, 0x20, true, 0x62e3ab5807679470)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bmAttributes.BatteryCharging", battery_charging, 0x1, 0x1, true, 0x9f3ce2cc062951c4, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bmAttributes.USBPowerDelivery", usb_power_delivery, 0x2, 0x1, true, 0xecc09f9099053f7, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bmAttributes.Provider", provider, 0x3, 0x1, true, 0xc7bb7bda42720fb8, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bmAttributes.Consumer", consumer, 0x4, 0x1, true, 0x823cc7136589524, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bmAttributes.ChargingPolicy", charging_policy, 0x5, 0x1, true, 0xdade4a03bb148494, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bmAttributes.TypeCCurrent", type_c_current, 0x6, 0x1, true, 0xcdba3f570624db67, 1, uint32_t)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bmAttributes.ACSupply", ac_supply, 0x8, 0x1, true, 0xf3cfe1aa27912bb8, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bmAttributes.Battery", battery, 0x9, 0x1, true, 0x6b0e9cc91453a811, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bmAttributes.Other", other, 0xa, 0x1, true, 0x2cba469a2c99c15e, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bmAttributes.NumBatteries", num_batteries, 0xb, 0x3, true, 0x99c37e53433c62e9, 3, uint32_t)
#define _m15 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bmAttributes.UsesVbus", uses_vbus, 0xe, 0x1, true, 0x9e85f4162c385060, 1, uint32_t)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_bm_attributes_t), "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bmAttributes", bm_attributes, 0x20, 0x20, true, 0xd761dc0ab79c2315)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bmProviderPorts", bm_provider_ports, 0x40, 0x10, true, 0xbdac3c7df90214e2)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bmConsumerPorts", bm_consumer_ports, 0x50, 0x10, true, 0xb023deb8061d975)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bcdBCVersion", bcd_bc_version, 0x60, 0x10, true, 0xd05f54484f0821ca)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bcdPDVersion", bcd_pd_version, 0x70, 0x10, true, 0x2e7b2fcc2f5a87d2)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_DEVICE_CAPABILITY_POWER_DELIVERY_DESCRIPTOR.bcdUSBTypeCVersion", bcd_usb_type_c_version, 0x80, 0x10, true, 0x98c86ca5673c20af)
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
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#endif