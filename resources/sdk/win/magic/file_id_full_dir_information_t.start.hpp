#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_FULL_DIR_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0xc2a473041bc48c5a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_FULL_DIR_INFORMATION.FileIndex", file_index, 0x20, 0x20, true, 0xb4c6fb09fcc6a9f7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_FULL_DIR_INFORMATION.CreationTime", creation_time, 0x40, 0x40, true, 0xc09fa376f8889a73)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_FULL_DIR_INFORMATION.LastAccessTime", last_access_time, 0x80, 0x40, true, 0x7dad665d16285e1c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_FULL_DIR_INFORMATION.LastWriteTime", last_write_time, 0xc0, 0x40, true, 0x72cb390b6b1eaa19)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_FULL_DIR_INFORMATION.ChangeTime", change_time, 0x100, 0x40, true, 0xd894db1e25a6e0f1)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_FULL_DIR_INFORMATION.EndOfFile", end_of_file, 0x140, 0x40, true, 0xa3f7b79c60b1919)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_FULL_DIR_INFORMATION.AllocationSize", allocation_size, 0x180, 0x40, true, 0x34b50a6341ee7d1b)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_FULL_DIR_INFORMATION.FileAttributes", file_attributes, 0x1c0, 0x20, true, 0x4c033525f3503bbe)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_FULL_DIR_INFORMATION.FileNameLength", file_name_length, 0x1e0, 0x20, true, 0x96c6b4a0c2eef931)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_FULL_DIR_INFORMATION.EaSize", ea_size, 0x200, 0x20, true, 0x79dae31cb0336dec)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_FULL_DIR_INFORMATION.FileId", file_id, 0x240, 0x40, true, 0xa28b6fd82e5420c)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_ID_FULL_DIR_INFORMATION.FileName", file_name, 0x280, 0x10, true, 0x593e39777dd36917)
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
#endif