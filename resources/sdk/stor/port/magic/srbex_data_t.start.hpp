#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::srbexdatatype_t), "_SRBEX_DATA.Type", type, 0x0, 0x20, true, 0x5603a90ce60c66cb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SRBEX_DATA.Length", length, 0x20, 0x20, true, 0x5d47b6db44af5fd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_SRBEX_DATA.Data", data, 0x40, 0x8, true, 0xc88eb46921782b3e)
#else
#define _m00
#define _m01
#define _m02
#endif