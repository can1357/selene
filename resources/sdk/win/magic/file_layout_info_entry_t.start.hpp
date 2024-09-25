#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_LAYOUT_INFO_ENTRY.BasicInformation.CreationTime", creation_time, 0x0, 0x40, true, 0x5029cc9ec419fcc3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_LAYOUT_INFO_ENTRY.BasicInformation.LastAccessTime", last_access_time, 0x40, 0x40, true, 0xb80b93ad5f474155)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_LAYOUT_INFO_ENTRY.BasicInformation.LastWriteTime", last_write_time, 0x80, 0x40, true, 0xe6eff056a6d7ab7b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_LAYOUT_INFO_ENTRY.BasicInformation.ChangeTime", change_time, 0xc0, 0x40, true, 0xad25045d3aa846dc)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LAYOUT_INFO_ENTRY.BasicInformation.FileAttributes", file_attributes, 0x100, 0x20, true, 0x51ae206feec439cb)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_basic_information_t), "_FILE_LAYOUT_INFO_ENTRY.BasicInformation", basic_information, 0x0, 0x40, true, 0x75dacadb67a2851)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LAYOUT_INFO_ENTRY.OwnerId", owner_id, 0x140, 0x20, true, 0x8707ecf6fad3d16d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_LAYOUT_INFO_ENTRY.SecurityId", security_id, 0x160, 0x20, true, 0xa2fd93b32fe7084f)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_LAYOUT_INFO_ENTRY.Usn", usn, 0x180, 0x40, true, 0x8873e069e934b93f)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum win::storage_reserve_id_t), "_FILE_LAYOUT_INFO_ENTRY.StorageReserveId", storage_reserve_id, 0x1c0, 0x20, true, 0x1534de656f39a6ea)
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