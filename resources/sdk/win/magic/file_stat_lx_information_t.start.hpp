#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STAT_LX_INFORMATION.FileId", file_id, 0x0, 0x40, true, 0x94bb9bf27226350)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STAT_LX_INFORMATION.CreationTime", creation_time, 0x40, 0x40, true, 0x4588874b6f239dba)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STAT_LX_INFORMATION.LastAccessTime", last_access_time, 0x80, 0x40, true, 0xec4f40dce5493e0a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STAT_LX_INFORMATION.LastWriteTime", last_write_time, 0xc0, 0x40, true, 0x4cc15038ce5f0462)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STAT_LX_INFORMATION.ChangeTime", change_time, 0x100, 0x40, true, 0xcd75ed95621a8c66)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STAT_LX_INFORMATION.AllocationSize", allocation_size, 0x140, 0x40, true, 0xc56f215829f991e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_STAT_LX_INFORMATION.EndOfFile", end_of_file, 0x180, 0x40, true, 0x4dc8553956f24c1)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STAT_LX_INFORMATION.FileAttributes", file_attributes, 0x1c0, 0x20, true, 0x9e2f363467adde43)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STAT_LX_INFORMATION.ReparseTag", reparse_tag, 0x1e0, 0x20, true, 0xeb5714b27b341bef)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STAT_LX_INFORMATION.NumberOfLinks", number_of_links, 0x200, 0x20, true, 0xdcc118dabc6a7c32)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STAT_LX_INFORMATION.EffectiveAccess", effective_access, 0x220, 0x20, true, 0x451e31de40089d7f)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STAT_LX_INFORMATION.LxFlags", lx_flags, 0x240, 0x20, true, 0xee031e4029b28ccb)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STAT_LX_INFORMATION.LxUid", lx_uid, 0x260, 0x20, true, 0xa6805990db9d2133)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STAT_LX_INFORMATION.LxGid", lx_gid, 0x280, 0x20, true, 0xbd3d9d5f6b051a1a)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STAT_LX_INFORMATION.LxMode", lx_mode, 0x2a0, 0x20, true, 0xfafa9089b0582174)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STAT_LX_INFORMATION.LxDeviceIdMajor", lx_device_id_major, 0x2c0, 0x20, true, 0xff02c9a21ee100da)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_STAT_LX_INFORMATION.LxDeviceIdMinor", lx_device_id_minor, 0x2e0, 0x20, true, 0x36c0a9fd22ee61ed)
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
#define _m15
#define _m16
#endif