#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "__s_GUID.Data1", data1, 0x0, 0x20, true, 0xae2fb2aedc8b4f6a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "__s_GUID.Data2", data2, 0x20, 0x10, true, 0xb2c49b6559fc7ed0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "__s_GUID.Data3", data3, 0x30, 0x10, true, 0xcd2cf3a47e664020)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "__s_GUID.Data4", data4, 0x40, 0x40, true, 0xd7448194a68a47a4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif