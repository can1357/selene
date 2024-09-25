#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0xb8364ab2517e5d24)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0xd04a57c94e31ff0e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_DEVICE_DESCRIPTOR.bcdUSB", bcd_usb, 0x10, 0x10, true, 0xf10877f719d57c5f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_DESCRIPTOR.bDeviceClass", b_device_class, 0x20, 0x8, true, 0xc0531889df528f69)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_DESCRIPTOR.bDeviceSubClass", b_device_sub_class, 0x28, 0x8, true, 0xf5824a4286bdffb6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_DESCRIPTOR.bDeviceProtocol", b_device_protocol, 0x30, 0x8, true, 0xbc61a82509b77e9e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_DESCRIPTOR.bMaxPacketSize0", b_max_packet_size0, 0x38, 0x8, true, 0xdc5a04292db8501f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_DEVICE_DESCRIPTOR.idVendor", id_vendor, 0x40, 0x10, true, 0x350d7320e6dbd3c5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_DEVICE_DESCRIPTOR.idProduct", id_product, 0x50, 0x10, true, 0xcca538e107a945a4)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_DEVICE_DESCRIPTOR.bcdDevice", bcd_device, 0x60, 0x10, true, 0x3bb78f1c5e7a4022)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_DESCRIPTOR.iManufacturer", i_manufacturer, 0x70, 0x8, true, 0x614601eb603c02ac)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_DESCRIPTOR.iProduct", i_product, 0x78, 0x8, true, 0xcfb690d106a9a7b5)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_DESCRIPTOR.iSerialNumber", i_serial_number, 0x80, 0x8, true, 0x72e66ff71c996891)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_DEVICE_DESCRIPTOR.bNumConfigurations", b_num_configurations, 0x88, 0x8, true, 0xd8bff0b7ccde4fa3)
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
#endif