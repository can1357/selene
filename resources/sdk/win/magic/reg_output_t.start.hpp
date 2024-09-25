#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RegOutput.dwSize", dw_size, 0x0, 0x20, true, 0x1a52f687c1339101)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_RegOutput.RegKeys", reg_keys, 0x20, 0x20, true, 0xb443e5401722b29d)
#else
#define _m00
#define _m01
#endif