#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "tagORPC_EXTENT.id", id, 0x0, 0x80, true, 0xb5e570105517868b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagORPC_EXTENT.size", size, 0x80, 0x20, true, 0xbe46cd62993f323d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "tagORPC_EXTENT.data", data, 0xa0, 0x8, true, 0x7df6f0014dc584d5)
#else
#define _m00
#define _m01
#define _m02
#endif