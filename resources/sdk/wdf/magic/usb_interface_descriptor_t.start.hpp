#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0xf128fa22fe9b2e33)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0xc1782a56aa3ec005)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_DESCRIPTOR.bInterfaceNumber", b_interface_number, 0x10, 0x8, true, 0x27867c7eb908e94e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_DESCRIPTOR.bAlternateSetting", b_alternate_setting, 0x18, 0x8, true, 0x6c56a17da2ed2a9b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_DESCRIPTOR.bNumEndpoints", b_num_endpoints, 0x20, 0x8, true, 0xd29147d688ddb896)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_DESCRIPTOR.bInterfaceClass", b_interface_class, 0x28, 0x8, true, 0x593a9f79efa6b710)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_DESCRIPTOR.bInterfaceSubClass", b_interface_sub_class, 0x30, 0x8, true, 0x1ba7a5c0666aca96)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_DESCRIPTOR.bInterfaceProtocol", b_interface_protocol, 0x38, 0x8, true, 0xd69975f535c409ed)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_DESCRIPTOR.iInterface", i_interface, 0x40, 0x8, true, 0xb3c852dd6d0ba9a3)
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