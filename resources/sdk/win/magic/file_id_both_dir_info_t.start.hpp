#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_BOTH_DIR_INFO.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0xd63b9af1e6b0e27d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_BOTH_DIR_INFO.FileIndex", file_index, 0x20, 0x20, true, 0x73c6b932f9ed33a2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_BOTH_DIR_INFO.CreationTime", creation_time, 0x40, 0x40, true, 0x91739ba6c63f1bd3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_BOTH_DIR_INFO.LastAccessTime", last_access_time, 0x80, 0x40, true, 0xd820660a78546eeb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_BOTH_DIR_INFO.LastWriteTime", last_write_time, 0xc0, 0x40, true, 0x8a1e9c35ac68c9af)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_BOTH_DIR_INFO.ChangeTime", change_time, 0x100, 0x40, true, 0x45b44376a8b85ceb)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_BOTH_DIR_INFO.EndOfFile", end_of_file, 0x140, 0x40, true, 0xac134be7dd984044)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_BOTH_DIR_INFO.AllocationSize", allocation_size, 0x180, 0x40, true, 0x8fd6d671dc63f3af)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_BOTH_DIR_INFO.FileAttributes", file_attributes, 0x1c0, 0x20, true, 0xb6687c70561d15a9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_BOTH_DIR_INFO.FileNameLength", file_name_length, 0x1e0, 0x20, true, 0x8dda9254b40d0e6f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_BOTH_DIR_INFO.EaSize", ea_size, 0x200, 0x20, true, 0xaebf2d634c7b2f1d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_FILE_ID_BOTH_DIR_INFO.ShortNameLength", short_name_length, 0x220, 0x8, true, 0x25f8fa00382f2de4)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 12>), "_FILE_ID_BOTH_DIR_INFO.ShortName", short_name, 0x230, 0xc0, true, 0xe5aff6036fe0320c)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_BOTH_DIR_INFO.FileId", file_id, 0x300, 0x40, true, 0xd727d49637c027d1)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_ID_BOTH_DIR_INFO.FileName", file_name, 0x340, 0x10, true, 0x85ae5eec81e1e5b8)
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
#endif