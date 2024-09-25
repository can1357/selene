#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireExtent.rounded_size", rounded_size, 0x0, 0x20, true, 0x423d58f5dc58c286)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "WireExtent.id", id, 0x20, 0x80, true, 0xfd26036ed576ab74)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireExtent.size", size, 0xa0, 0x20, true, 0x9e965d4402dfa85d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t>), "WireExtent.data", data, 0xc0, 0x0, true, 0x828938a8770d2c1a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif