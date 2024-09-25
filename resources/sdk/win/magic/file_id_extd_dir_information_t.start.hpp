#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_EXTD_DIR_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x7faac16c44bfbb9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_EXTD_DIR_INFORMATION.FileIndex", file_index, 0x20, 0x20, true, 0xc2860a65587a3e7c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_EXTD_DIR_INFORMATION.CreationTime", creation_time, 0x40, 0x40, true, 0x7974417a728cd81e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_EXTD_DIR_INFORMATION.LastAccessTime", last_access_time, 0x80, 0x40, true, 0x213eda53efa67de0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_EXTD_DIR_INFORMATION.LastWriteTime", last_write_time, 0xc0, 0x40, true, 0xa6e3b2c507676305)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_EXTD_DIR_INFORMATION.ChangeTime", change_time, 0x100, 0x40, true, 0x2f7a8d21c4b24198)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_EXTD_DIR_INFORMATION.EndOfFile", end_of_file, 0x140, 0x40, true, 0x7676c93056cb8e88)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_EXTD_DIR_INFORMATION.AllocationSize", allocation_size, 0x180, 0x40, true, 0x35c96243d8af3fbb)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_EXTD_DIR_INFORMATION.FileAttributes", file_attributes, 0x1c0, 0x20, true, 0x3d75f2220a721bfb)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_EXTD_DIR_INFORMATION.FileNameLength", file_name_length, 0x1e0, 0x20, true, 0xa0cd205030f1f74a)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_EXTD_DIR_INFORMATION.EaSize", ea_size, 0x200, 0x20, true, 0x7d30974c274c0d8)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_EXTD_DIR_INFORMATION.ReparsePointTag", reparse_point_tag, 0x220, 0x20, true, 0x9b5c5f5b4dbaab77)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::file_id_128_t), "_FILE_ID_EXTD_DIR_INFORMATION.FileId", file_id, 0x240, 0x80, true, 0x6851587178b1c912)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_ID_EXTD_DIR_INFORMATION.FileName", file_name, 0x2c0, 0x10, true, 0x66af49abe7923d3d)
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