#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_DIRECTORY_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x987ee20e9535ddc1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_DIRECTORY_INFORMATION.FileIndex", file_index, 0x20, 0x20, true, 0x492f1b51421dc093)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_DIRECTORY_INFORMATION.CreationTime", creation_time, 0x40, 0x40, true, 0x3550d96379970ffc)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_DIRECTORY_INFORMATION.LastAccessTime", last_access_time, 0x80, 0x40, true, 0xc803b21e23d46171)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_DIRECTORY_INFORMATION.LastWriteTime", last_write_time, 0xc0, 0x40, true, 0xdfec6f6a2114c143)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_DIRECTORY_INFORMATION.ChangeTime", change_time, 0x100, 0x40, true, 0x5cc2c22a3a018bbe)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_DIRECTORY_INFORMATION.EndOfFile", end_of_file, 0x140, 0x40, true, 0x106541057e02bfe9)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_DIRECTORY_INFORMATION.AllocationSize", allocation_size, 0x180, 0x40, true, 0x249a98bfd332b2ef)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_DIRECTORY_INFORMATION.FileAttributes", file_attributes, 0x1c0, 0x20, true, 0x352d02603089b7e)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_DIRECTORY_INFORMATION.FileNameLength", file_name_length, 0x1e0, 0x20, true, 0xe0fe7f64bd9c627b)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_DIRECTORY_INFORMATION.FileName", file_name, 0x200, 0x10, true, 0xdee68c6ecdac37cd)
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
#endif