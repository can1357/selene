#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_STRING.Length", length, 0x0, 0x20, true, 0xf0b6ec14c6a22cec)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t>), "_DUMP_STRING.Buffer", buffer, 0x20, 0x0, true, 0xcf5a9558c1971cf6)
#else
#define _m00
#define _m01
#endif