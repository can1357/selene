#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_POOLTAG_INFORMATION.Count", count, 0x0, 0x20, true, 0xe5e4cd82620561ec)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::system_pooltag_t, 1>), "_SYSTEM_POOLTAG_INFORMATION.TagInfo", tag_info, 0x40, 0x40, true, 0xee49747197728e26)
#else
#define _m00
#define _m01
#endif