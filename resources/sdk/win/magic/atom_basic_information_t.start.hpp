#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ATOM_BASIC_INFORMATION.UsageCount", usage_count, 0x0, 0x10, true, 0xb4ecc77d98284c3c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ATOM_BASIC_INFORMATION.Flags", flags, 0x10, 0x10, true, 0xb45efda970efaeeb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_ATOM_BASIC_INFORMATION.NameLength", name_length, 0x20, 0x10, true, 0xd59198d4a623788b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_ATOM_BASIC_INFORMATION.Name", name, 0x30, 0x10, true, 0x354e3c4b21fcb078)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif