#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LINK_ENTRY_FULL_ID_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0xc7e981bf171549de)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::file_id_128_t), "_FILE_LINK_ENTRY_FULL_ID_INFORMATION.ParentFileId", parent_file_id, 0x20, 0x80, true, 0x3f500c4f004552c2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LINK_ENTRY_FULL_ID_INFORMATION.FileNameLength", file_name_length, 0xa0, 0x20, true, 0x21b9f7903e540f6a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_LINK_ENTRY_FULL_ID_INFORMATION.FileName", file_name, 0xc0, 0x10, true, 0x8409792bdac6804a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif