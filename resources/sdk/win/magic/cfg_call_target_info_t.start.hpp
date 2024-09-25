#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CFG_CALL_TARGET_INFO.Offset", offset, 0x0, 0x40, true, 0x4343a48751571b08)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CFG_CALL_TARGET_INFO.Flags", flags, 0x40, 0x40, true, 0xe0c271d9a5f8ca69)
#else
#define _m00
#define _m01
#endif