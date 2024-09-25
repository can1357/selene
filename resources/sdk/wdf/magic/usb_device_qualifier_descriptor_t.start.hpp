#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_QUALIFIER_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0x47c2d3bff6e2907f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_QUALIFIER_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0x4472322c14c62497)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_DEVICE_QUALIFIER_DESCRIPTOR.bcdUSB", bcd_usb, 0x10, 0x10, true, 0x9b336d86dbfa3d05)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_QUALIFIER_DESCRIPTOR.bDeviceClass", b_device_class, 0x20, 0x8, true, 0xb1fe7e5c2406b223)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_QUALIFIER_DESCRIPTOR.bDeviceSubClass", b_device_sub_class, 0x28, 0x8, true, 0x6f379f87c21b0518)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_QUALIFIER_DESCRIPTOR.bDeviceProtocol", b_device_protocol, 0x30, 0x8, true, 0xcaf567f3e8ea7eb6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_QUALIFIER_DESCRIPTOR.bMaxPacketSize0", b_max_packet_size0, 0x38, 0x8, true, 0x5f14ce36b7055f1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_QUALIFIER_DESCRIPTOR.bNumConfigurations", b_num_configurations, 0x40, 0x8, true, 0xfc976e007bcc11de)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_QUALIFIER_DESCRIPTOR.bReserved", b_reserved, 0x48, 0x8, true, 0xaaa304baea5447e0)
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
#endif