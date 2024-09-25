#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STAT_INFORMATION.FileId", file_id, 0x0, 0x40, true, 0xb2076bb8ada73cd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STAT_INFORMATION.CreationTime", creation_time, 0x40, 0x40, true, 0xb2ea066a8f07de40)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STAT_INFORMATION.LastAccessTime", last_access_time, 0x80, 0x40, true, 0x8e45bc7e074c0ff7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STAT_INFORMATION.LastWriteTime", last_write_time, 0xc0, 0x40, true, 0xb93830df751151c2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STAT_INFORMATION.ChangeTime", change_time, 0x100, 0x40, true, 0x87e3753324963774)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STAT_INFORMATION.AllocationSize", allocation_size, 0x140, 0x40, true, 0x123ceea2f4e12177)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STAT_INFORMATION.EndOfFile", end_of_file, 0x180, 0x40, true, 0xd6d46574abdbb650)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STAT_INFORMATION.FileAttributes", file_attributes, 0x1c0, 0x20, true, 0x263564ec19fe279)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STAT_INFORMATION.ReparseTag", reparse_tag, 0x1e0, 0x20, true, 0x656f9c75369cd4d8)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STAT_INFORMATION.NumberOfLinks", number_of_links, 0x200, 0x20, true, 0xae8cf903928d42c5)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STAT_INFORMATION.EffectiveAccess", effective_access, 0x220, 0x20, true, 0x73b94156f48a0cce)
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