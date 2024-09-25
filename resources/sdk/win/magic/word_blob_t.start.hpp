#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WORD_BLOB.clSize", cl_size, 0x0, 0x20, true, 0xfc4043a71e64a9cc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 1>), "_WORD_BLOB.asData", as_data, 0x20, 0x10, true, 0xca48335bfbbc37dd)
#else
#define _m00
#define _m01
#endif