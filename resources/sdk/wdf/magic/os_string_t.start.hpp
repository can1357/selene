#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OS_STRING.bLength", b_length, 0x0, 0x8, true, 0xb933da69e49577c1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OS_STRING.bDescriptorType", b_descriptor_type, 0x8, 0x8, true, 0xfa175d2322aa6c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 7>), "_OS_STRING.MicrosoftString", microsoft_string, 0x10, 0x70, true, 0xde5f9d22ae40c467)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OS_STRING.bVendorCode", b_vendor_code, 0x80, 0x8, true, 0xd323d3ba0d73adc5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OS_STRING.bPad", b_pad, 0x88, 0x8, true, 0xa77e1de17368a023)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_OS_STRING.bFlags", b_flags, 0x88, 0x8, true, 0xdc8980671c08c427)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif