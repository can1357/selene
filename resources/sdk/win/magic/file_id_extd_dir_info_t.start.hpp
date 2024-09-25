#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_EXTD_DIR_INFO.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x1612a6b5e60644b3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_EXTD_DIR_INFO.FileIndex", file_index, 0x20, 0x20, true, 0xb386d8ecdc4dbb0b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_EXTD_DIR_INFO.CreationTime", creation_time, 0x40, 0x40, true, 0xd1b94eaa15b6215)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_EXTD_DIR_INFO.LastAccessTime", last_access_time, 0x80, 0x40, true, 0x54ce56916004a9c9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_EXTD_DIR_INFO.LastWriteTime", last_write_time, 0xc0, 0x40, true, 0xddea1fd089e89c94)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_EXTD_DIR_INFO.ChangeTime", change_time, 0x100, 0x40, true, 0x372f44ca20d6712e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_EXTD_DIR_INFO.EndOfFile", end_of_file, 0x140, 0x40, true, 0x9375bd33b5056241)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_ID_EXTD_DIR_INFO.AllocationSize", allocation_size, 0x180, 0x40, true, 0x1fd16dc5d043ef0e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_EXTD_DIR_INFO.FileAttributes", file_attributes, 0x1c0, 0x20, true, 0x32acbe15c182e36e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_EXTD_DIR_INFO.FileNameLength", file_name_length, 0x1e0, 0x20, true, 0x26a8757aeb1e7b56)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_EXTD_DIR_INFO.EaSize", ea_size, 0x200, 0x20, true, 0x82ec8e6c2fe7928d)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_ID_EXTD_DIR_INFO.ReparsePointTag", reparse_point_tag, 0x220, 0x20, true, 0xde2b010b219c3843)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::file_id_128_t), "_FILE_ID_EXTD_DIR_INFO.FileId", file_id, 0x240, 0x80, true, 0x8361be0ab0997615)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_FILE_ID_EXTD_DIR_INFO.FileName", file_name, 0x2c0, 0x10, true, 0x657422344fd47822)
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