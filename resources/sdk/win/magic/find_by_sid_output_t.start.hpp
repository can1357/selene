#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FIND_BY_SID_OUTPUT.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x441adfc029f07083)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FIND_BY_SID_OUTPUT.FileIndex", file_index, 0x20, 0x20, true, 0xb8b4741c7c8a0463)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FIND_BY_SID_OUTPUT.FileNameLength", file_name_length, 0x40, 0x20, true, 0xeb41b23c371af9bc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "FIND_BY_SID_OUTPUT.FileName", file_name, 0x60, 0x10, true, 0x8701403e54812da7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif