#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FULL_DIR_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0xfb5cb6ac627eea8f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FULL_DIR_INFORMATION.FileIndex", file_index, 0x20, 0x20, true, 0xad74feb3b869472d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FULL_DIR_INFORMATION.CreationTime", creation_time, 0x40, 0x40, true, 0x32ef59ea269457a3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FULL_DIR_INFORMATION.LastAccessTime", last_access_time, 0x80, 0x40, true, 0xb841e5c0e247fa9a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FULL_DIR_INFORMATION.LastWriteTime", last_write_time, 0xc0, 0x40, true, 0xcb8d07e2afd32692)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FULL_DIR_INFORMATION.ChangeTime", change_time, 0x100, 0x40, true, 0x7000e04598de4903)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FULL_DIR_INFORMATION.EndOfFile", end_of_file, 0x140, 0x40, true, 0xfe5d95664c9375a8)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FULL_DIR_INFORMATION.AllocationSize", allocation_size, 0x180, 0x40, true, 0x31527fead3bf8d1d)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FULL_DIR_INFORMATION.FileAttributes", file_attributes, 0x1c0, 0x20, true, 0x244023d3421b5153)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FULL_DIR_INFORMATION.FileNameLength", file_name_length, 0x1e0, 0x20, true, 0x1b3bdc9f7a757225)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FULL_DIR_INFORMATION.EaSize", ea_size, 0x200, 0x20, true, 0x79bd3c7a571c0fbb)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_FULL_DIR_INFORMATION.FileName", file_name, 0x220, 0x10, true, 0xaadfd4d96c0fb839)
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