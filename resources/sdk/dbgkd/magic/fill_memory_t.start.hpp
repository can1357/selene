#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DBGKD_FILL_MEMORY.Address", address, 0x0, 0x40, true, 0x2bbdd45b8acf6706)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKD_FILL_MEMORY.Length", length, 0x40, 0x20, true, 0xd5718263e9821e71)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DBGKD_FILL_MEMORY.Flags", flags, 0x60, 0x10, true, 0x2a3abd5794671acc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_DBGKD_FILL_MEMORY.PatternLength", pattern_length, 0x70, 0x10, true, 0xd63374b15fea7ef5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif