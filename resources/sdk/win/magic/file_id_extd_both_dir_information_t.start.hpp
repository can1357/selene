#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_EXTD_BOTH_DIR_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x9f3ace9a4c5d30c3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_EXTD_BOTH_DIR_INFORMATION.FileIndex", file_index, 0x20, 0x20, true, 0xf3648a6635770c4a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_EXTD_BOTH_DIR_INFORMATION.CreationTime", creation_time, 0x40, 0x40, true, 0x97ded72ce5a69108)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_EXTD_BOTH_DIR_INFORMATION.LastAccessTime", last_access_time, 0x80, 0x40, true, 0xa6f85ffbc16a6d8a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_EXTD_BOTH_DIR_INFORMATION.LastWriteTime", last_write_time, 0xc0, 0x40, true, 0xaaddc64c0a1f95b5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_EXTD_BOTH_DIR_INFORMATION.ChangeTime", change_time, 0x100, 0x40, true, 0x174c08080aaeeea)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_EXTD_BOTH_DIR_INFORMATION.EndOfFile", end_of_file, 0x140, 0x40, true, 0x39f081294099a16)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_EXTD_BOTH_DIR_INFORMATION.AllocationSize", allocation_size, 0x180, 0x40, true, 0x9ecf0d67258d2099)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_EXTD_BOTH_DIR_INFORMATION.FileAttributes", file_attributes, 0x1c0, 0x20, true, 0xbdfa8bff09822544)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_EXTD_BOTH_DIR_INFORMATION.FileNameLength", file_name_length, 0x1e0, 0x20, true, 0xecae023b2c47d224)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_EXTD_BOTH_DIR_INFORMATION.EaSize", ea_size, 0x200, 0x20, true, 0xba0da7db114ed760)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_EXTD_BOTH_DIR_INFORMATION.ReparsePointTag", reparse_point_tag, 0x220, 0x20, true, 0xe03d119a3ffce21c)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::file_id_128_t), "_FILE_ID_EXTD_BOTH_DIR_INFORMATION.FileId", file_id, 0x240, 0x80, true, 0xb70e043fb4cc7acd)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_FILE_ID_EXTD_BOTH_DIR_INFORMATION.ShortNameLength", short_name_length, 0x2c0, 0x8, true, 0x6c71b4496f7d8dfd)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 12>), "_FILE_ID_EXTD_BOTH_DIR_INFORMATION.ShortName", short_name, 0x2d0, 0xc0, true, 0x93ac52d8b8a5ab2d)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_ID_EXTD_BOTH_DIR_INFORMATION.FileName", file_name, 0x390, 0x10, true, 0xabd5da12bca9242a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#endif