#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_BOTH_DIR_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x13fec3e1f5ee1e3f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_BOTH_DIR_INFORMATION.FileIndex", file_index, 0x20, 0x20, true, 0x60af4cc31e7d7402)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_BOTH_DIR_INFORMATION.CreationTime", creation_time, 0x40, 0x40, true, 0x9f89d3c83b1c03d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_BOTH_DIR_INFORMATION.LastAccessTime", last_access_time, 0x80, 0x40, true, 0x5bd9a8d1d1787b84)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_BOTH_DIR_INFORMATION.LastWriteTime", last_write_time, 0xc0, 0x40, true, 0xf1e6b771c2156d83)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_BOTH_DIR_INFORMATION.ChangeTime", change_time, 0x100, 0x40, true, 0x30756fc9862cef6a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_BOTH_DIR_INFORMATION.EndOfFile", end_of_file, 0x140, 0x40, true, 0x4f945425f8ea64f5)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_BOTH_DIR_INFORMATION.AllocationSize", allocation_size, 0x180, 0x40, true, 0xcefb46fe6796624e)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_BOTH_DIR_INFORMATION.FileAttributes", file_attributes, 0x1c0, 0x20, true, 0x5d2230dbb722babb)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_BOTH_DIR_INFORMATION.FileNameLength", file_name_length, 0x1e0, 0x20, true, 0x246b3924171bf58e)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_BOTH_DIR_INFORMATION.EaSize", ea_size, 0x200, 0x20, true, 0xbca48638309103b0)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_FILE_ID_BOTH_DIR_INFORMATION.ShortNameLength", short_name_length, 0x220, 0x8, true, 0x283e8e51f49213f3)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 12>), "_FILE_ID_BOTH_DIR_INFORMATION.ShortName", short_name, 0x230, 0xc0, true, 0xda3125a1e7526cf4)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_BOTH_DIR_INFORMATION.FileId", file_id, 0x300, 0x40, true, 0x51f9fe497358b557)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_ID_BOTH_DIR_INFORMATION.FileName", file_name, 0x340, 0x10, true, 0x7925edfd3facc452)
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