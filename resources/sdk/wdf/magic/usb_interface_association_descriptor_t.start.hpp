#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_ASSOCIATION_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0x765cc0bb0c95c918)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_ASSOCIATION_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0x6bb4702e380fbcc8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_ASSOCIATION_DESCRIPTOR.bFirstInterface", b_first_interface, 0x10, 0x8, true, 0xb3369cc8630680db)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_ASSOCIATION_DESCRIPTOR.bInterfaceCount", b_interface_count, 0x18, 0x8, true, 0x3dca38683b6348f1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_ASSOCIATION_DESCRIPTOR.bFunctionClass", b_function_class, 0x20, 0x8, true, 0xc1e3ca5380e28bf3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_ASSOCIATION_DESCRIPTOR.bFunctionSubClass", b_function_sub_class, 0x28, 0x8, true, 0x1b4e720ea832f665)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_ASSOCIATION_DESCRIPTOR.bFunctionProtocol", b_function_protocol, 0x30, 0x8, true, 0xe790424ee6f43748)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_INTERFACE_ASSOCIATION_DESCRIPTOR.iFunction", i_function, 0x38, 0x8, true, 0x21b7e37978bcce4c)
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