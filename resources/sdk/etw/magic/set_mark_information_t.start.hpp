#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_SET_MARK_INFORMATION.Flag", flag, 0x0, 0x20, true, 0xafd98ae2f26c3b19)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_ETW_SET_MARK_INFORMATION.Mark", mark, 0x20, 0x10, true, 0x275896e8c82581eb)
#else
#define _m00
#define _m01
#endif