#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_CONFIGURATION_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0xaf7ccb766a4d5e00)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_CONFIGURATION_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0xccaf1c0177fae2a7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_CONFIGURATION_DESCRIPTOR.wTotalLength", w_total_length, 0x10, 0x10, true, 0xf1721ea12768ef2c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_CONFIGURATION_DESCRIPTOR.bNumInterfaces", b_num_interfaces, 0x20, 0x8, true, 0x6d46b5111f6e0f1b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_CONFIGURATION_DESCRIPTOR.bConfigurationValue", b_configuration_value, 0x28, 0x8, true, 0x3c80f96ef82d0a37)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_CONFIGURATION_DESCRIPTOR.iConfiguration", i_configuration, 0x30, 0x8, true, 0xe869665a9532c2fe)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_CONFIGURATION_DESCRIPTOR.bmAttributes", bm_attributes, 0x38, 0x8, true, 0x42267b46b2e14308)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_CONFIGURATION_DESCRIPTOR.MaxPower", max_power, 0x40, 0x8, true, 0x8fc253e40982b0f)
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