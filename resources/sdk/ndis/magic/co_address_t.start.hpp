#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CO_ADDRESS.AddressSize", address_size, 0x0, 0x20, true, 0xa8e185c2b51b1da5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_CO_ADDRESS.Address", address, 0x20, 0x8, true, 0x7f554e444c22784a)
#else
#define _m00
#define _m01
#endif