#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_COMMON_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0xd7a4c30d124828)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_COMMON_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0xee6716928a211c22)
#else
#define _m00
#define _m01
#endif