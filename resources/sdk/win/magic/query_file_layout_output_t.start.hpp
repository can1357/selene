#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_FILE_LAYOUT_OUTPUT.FileEntryCount", file_entry_count, 0x0, 0x20, true, 0x10a5326a3e742ef6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_FILE_LAYOUT_OUTPUT.FirstFileOffset", first_file_offset, 0x20, 0x20, true, 0x573fba12d6480bcf)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_FILE_LAYOUT_OUTPUT.Flags", flags, 0x40, 0x20, true, 0xac2bc33687fb6e5)
#else
#define _m00
#define _m01
#define _m02
#endif