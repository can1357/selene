#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_STRING_DESCRIPTOR.bLength", b_length, 0x0, 0x8, true, 0xbd6a3bf43761b04e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_USB_STRING_DESCRIPTOR.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0x8e0e32b5b0bf2ac6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_USB_STRING_DESCRIPTOR.bString", b_string, 0x10, 0x10, true, 0xd3b86e96370f5ab4)
#else
#define _m00
#define _m01
#define _m02
#endif