#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BYTE_BLOB.clSize", cl_size, 0x0, 0x20, true, 0xf9d1a10346c0fa14)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_BYTE_BLOB.abData", ab_data, 0x20, 0x8, true, 0x3ac85da0d7284407)
#else
#define _m00
#define _m01
#endif