#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 256>), "_LFH_RANDOM_DATA.Bytes", bytes, 0x0, 0x0, true, 0xd950cc4337d36a5a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 128>), "_LFH_RANDOM_DATA.Words", words, 0x0, 0x0, true, 0xf503f0a7024b75a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 32>), "_LFH_RANDOM_DATA.Quadwords", quadwords, 0x0, 0x0, true, 0x50c30fade5c2bf6e)
#else
#define _m00
#define _m01
#define _m02
#endif