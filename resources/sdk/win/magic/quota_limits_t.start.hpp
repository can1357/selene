#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_QUOTA_LIMITS.PagedPoolLimit", paged_pool_limit, 0x0, 0x40, true, 0x30133e3507d8832c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_QUOTA_LIMITS.NonPagedPoolLimit", non_paged_pool_limit, 0x40, 0x40, true, 0x9b01bec6b66b9290)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_QUOTA_LIMITS.MinimumWorkingSetSize", minimum_working_set_size, 0x80, 0x40, true, 0xb6bae67f9f98107f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_QUOTA_LIMITS.MaximumWorkingSetSize", maximum_working_set_size, 0xc0, 0x40, true, 0x43330af7545315ce)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_QUOTA_LIMITS.PagefileLimit", pagefile_limit, 0x100, 0x40, true, 0xb4f8056187dbf41)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_QUOTA_LIMITS.TimeLimit", time_limit, 0x140, 0x40, true, 0x8b518d749c715baf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif