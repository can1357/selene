#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_NAMES_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x1a02ea4175f73956)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_NAMES_INFORMATION.FileIndex", file_index, 0x20, 0x20, true, 0x9ba0ee6fcb31cc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_NAMES_INFORMATION.FileNameLength", file_name_length, 0x40, 0x20, true, 0xa59f1e603e16247c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_NAMES_INFORMATION.FileName", file_name, 0x60, 0x10, true, 0x3685cdcab27aca90)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif