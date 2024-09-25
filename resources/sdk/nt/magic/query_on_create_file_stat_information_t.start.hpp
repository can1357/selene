#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_QUERY_ON_CREATE_FILE_STAT_INFORMATION.FileId", file_id, 0x0, 0x40, true, 0xd6207ebe4f7bcffa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_QUERY_ON_CREATE_FILE_STAT_INFORMATION.CreationTime", creation_time, 0x40, 0x40, true, 0xf5bd1f63144c79ff)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_QUERY_ON_CREATE_FILE_STAT_INFORMATION.LastAccessTime", last_access_time, 0x80, 0x40, true, 0x6ded34055d5e4062)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_QUERY_ON_CREATE_FILE_STAT_INFORMATION.LastWriteTime", last_write_time, 0xc0, 0x40, true, 0xf14962a7010b674e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_QUERY_ON_CREATE_FILE_STAT_INFORMATION.ChangeTime", change_time, 0x100, 0x40, true, 0xb536fffc59688b73)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_QUERY_ON_CREATE_FILE_STAT_INFORMATION.AllocationSize", allocation_size, 0x140, 0x40, true, 0xbc93aab2cbe776ef)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_QUERY_ON_CREATE_FILE_STAT_INFORMATION.EndOfFile", end_of_file, 0x180, 0x40, true, 0xa9fad45fca8c59f0)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_ON_CREATE_FILE_STAT_INFORMATION.FileAttributes", file_attributes, 0x1c0, 0x20, true, 0x34cf7a7b8fe47a6a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_ON_CREATE_FILE_STAT_INFORMATION.ReparseTag", reparse_tag, 0x1e0, 0x20, true, 0x7613920fdcab28ca)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUERY_ON_CREATE_FILE_STAT_INFORMATION.NumberOfLinks", number_of_links, 0x200, 0x20, true, 0x556da5b97d812a63)
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
#endif