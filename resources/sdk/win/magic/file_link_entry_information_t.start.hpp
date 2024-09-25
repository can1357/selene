#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LINK_ENTRY_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x670b2be647c2664e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_LINK_ENTRY_INFORMATION.ParentFileId", parent_file_id, 0x40, 0x40, true, 0xcd0b18a0733775b9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LINK_ENTRY_INFORMATION.FileNameLength", file_name_length, 0x80, 0x20, true, 0xa0e216afd9ff0293)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_LINK_ENTRY_INFORMATION.FileName", file_name, 0xa0, 0x10, true, 0xe38d8c242bbff041)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif