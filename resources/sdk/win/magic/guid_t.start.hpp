#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "Guid.Data1", data1, 0x0, 0x0, false, 0x6245b7733c61e68f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "Guid.Data2", data2, 0x0, 0x0, false, 0x8842e50417d56a93)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "Guid.Data3", data3, 0x0, 0x0, false, 0x9ae4465acc16f271)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "Guid.Data4", data4, 0x0, 0x0, false, 0x66f1ba11797f8f9a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif