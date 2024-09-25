#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_BOTH_DIR_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x256979c6495274f8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_BOTH_DIR_INFORMATION.FileIndex", file_index, 0x20, 0x20, true, 0x53c6c2d828f2ae35)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_BOTH_DIR_INFORMATION.CreationTime", creation_time, 0x40, 0x40, true, 0xca2e2b4152b41b25)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_BOTH_DIR_INFORMATION.LastAccessTime", last_access_time, 0x80, 0x40, true, 0xf937e227515b11c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_BOTH_DIR_INFORMATION.LastWriteTime", last_write_time, 0xc0, 0x40, true, 0xf715cdf57e8029c4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_BOTH_DIR_INFORMATION.ChangeTime", change_time, 0x100, 0x40, true, 0x70166df7ccfbad04)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_BOTH_DIR_INFORMATION.EndOfFile", end_of_file, 0x140, 0x40, true, 0x9e58661310df08be)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_BOTH_DIR_INFORMATION.AllocationSize", allocation_size, 0x180, 0x40, true, 0x6615ca11a3899be8)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_BOTH_DIR_INFORMATION.FileAttributes", file_attributes, 0x1c0, 0x20, true, 0x19783a3058bd1351)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_BOTH_DIR_INFORMATION.FileNameLength", file_name_length, 0x1e0, 0x20, true, 0x82def1a5b2cfb557)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_BOTH_DIR_INFORMATION.EaSize", ea_size, 0x200, 0x20, true, 0x258de838bda80852)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char), "_FILE_BOTH_DIR_INFORMATION.ShortNameLength", short_name_length, 0x220, 0x8, true, 0xbcc6d9bc9230e230)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 12>), "_FILE_BOTH_DIR_INFORMATION.ShortName", short_name, 0x230, 0xc0, true, 0x47107a5eacc2eac8)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_BOTH_DIR_INFORMATION.FileName", file_name, 0x2f0, 0x10, true, 0xbd5d0fe00e8bb01)
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
#endif