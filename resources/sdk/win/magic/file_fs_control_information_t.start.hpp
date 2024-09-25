#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FS_CONTROL_INFORMATION.FreeSpaceStartFiltering", free_space_start_filtering, 0x0, 0x40, true, 0xefabc99025450053)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FS_CONTROL_INFORMATION.FreeSpaceThreshold", free_space_threshold, 0x40, 0x40, true, 0xcc49f2d40fd58285)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FS_CONTROL_INFORMATION.FreeSpaceStopFiltering", free_space_stop_filtering, 0x80, 0x40, true, 0x298f05387e0c515a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FS_CONTROL_INFORMATION.DefaultQuotaThreshold", default_quota_threshold, 0xc0, 0x40, true, 0x58966e3ab73fb41d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_FS_CONTROL_INFORMATION.DefaultQuotaLimit", default_quota_limit, 0x100, 0x40, true, 0xf9ab5762743cdd8d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_FS_CONTROL_INFORMATION.FileSystemControlFlags", file_system_control_flags, 0x140, 0x20, true, 0x7c8beff46345191b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif