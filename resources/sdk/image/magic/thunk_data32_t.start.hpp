#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_THUNK_DATA32.ForwarderString", forwarder_string, 0x0, 0x20, true, 0x5c244745d011c320)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_THUNK_DATA32.Function", function, 0x0, 0x20, true, 0x964687510f1c8349)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_THUNK_DATA32.Ordinal", ordinal, 0x0, 0x20, true, 0x41b2ad470953684f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IMAGE_THUNK_DATA32.AddressOfData", address_of_data, 0x0, 0x20, true, 0xec4ef5d8362cf3c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif