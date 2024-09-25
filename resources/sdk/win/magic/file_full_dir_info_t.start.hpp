#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FULL_DIR_INFO.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0xccdd2085d9137e5c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FULL_DIR_INFO.FileIndex", file_index, 0x20, 0x20, true, 0x41b673aec80f70de)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FULL_DIR_INFO.CreationTime", creation_time, 0x40, 0x40, true, 0x6170d77955922a48)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FULL_DIR_INFO.LastAccessTime", last_access_time, 0x80, 0x40, true, 0x5b60a8e5d85fc6a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FULL_DIR_INFO.LastWriteTime", last_write_time, 0xc0, 0x40, true, 0x5786975873e37018)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FULL_DIR_INFO.ChangeTime", change_time, 0x100, 0x40, true, 0x81e725d32c5f2b5e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FULL_DIR_INFO.EndOfFile", end_of_file, 0x140, 0x40, true, 0x243ec7d4fae33444)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FULL_DIR_INFO.AllocationSize", allocation_size, 0x180, 0x40, true, 0x9b0be573cff759cd)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FULL_DIR_INFO.FileAttributes", file_attributes, 0x1c0, 0x20, true, 0x5ce7d1d20057ab9d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FULL_DIR_INFO.FileNameLength", file_name_length, 0x1e0, 0x20, true, 0x67032cad728a7f40)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FULL_DIR_INFO.EaSize", ea_size, 0x200, 0x20, true, 0x25f4fc9c9b8b3082)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_FULL_DIR_INFO.FileName", file_name, 0x220, 0x10, true, 0xa3dd388e5e6a1ab3)
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
#endif