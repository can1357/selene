#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagINPUT_INJECTION_VALUE.page", page, 0x0, 0x10, true, 0x8e7a920640db7bf2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagINPUT_INJECTION_VALUE.usage", usage, 0x10, 0x10, true, 0x339a87812e334c85)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "tagINPUT_INJECTION_VALUE.value", value, 0x20, 0x20, true, 0x3994544d4d062dbd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "tagINPUT_INJECTION_VALUE.index", index, 0x40, 0x10, true, 0x7cee90852299ea88)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif