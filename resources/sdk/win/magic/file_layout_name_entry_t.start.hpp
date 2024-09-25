#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LAYOUT_NAME_ENTRY.NextNameOffset", next_name_offset, 0x0, 0x20, true, 0xbd2d2d03fd95ab2b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LAYOUT_NAME_ENTRY.Flags", flags, 0x20, 0x20, true, 0x28884d309d7c661b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_FILE_LAYOUT_NAME_ENTRY.ParentFileReferenceNumber", parent_file_reference_number, 0x40, 0x40, true, 0x2c4245fa3b5f7699)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LAYOUT_NAME_ENTRY.FileNameLength", file_name_length, 0x80, 0x20, true, 0x7df1ee0971b1295f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_LAYOUT_NAME_ENTRY.FileName", file_name, 0xc0, 0x10, true, 0x9591870bd952a134)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif