#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireThatPart1.flags", flags, 0x0, 0x20, true, 0x1704bb76c4ad5a3f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WireThatPart1.unique", unique, 0x20, 0x20, true, 0x6b9b3def04b974d3)
#else
#define _m00
#define _m01
#endif