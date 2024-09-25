#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_QUOTA_LIMITS_EX.PagedPoolLimit", paged_pool_limit, 0x0, 0x40, true, 0x3163d9340c2fd462)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_QUOTA_LIMITS_EX.NonPagedPoolLimit", non_paged_pool_limit, 0x40, 0x40, true, 0x2b7209880227659f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_QUOTA_LIMITS_EX.MinimumWorkingSetSize", minimum_working_set_size, 0x80, 0x40, true, 0x70f8e21821686301)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_QUOTA_LIMITS_EX.MaximumWorkingSetSize", maximum_working_set_size, 0xc0, 0x40, true, 0xadea78f900bc243d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_QUOTA_LIMITS_EX.PagefileLimit", pagefile_limit, 0x100, 0x40, true, 0xa8a7c796da930c91)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_QUOTA_LIMITS_EX.TimeLimit", time_limit, 0x140, 0x40, true, 0xd00669b941628cfc)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_QUOTA_LIMITS_EX.WorkingSetLimit", working_set_limit, 0x180, 0x40, true, 0xac8c14e15c67e62)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_QUOTA_LIMITS_EX.Flags", flags, 0x280, 0x20, true, 0x9496dad683054443)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union win::rate_quota_limit_t), "_QUOTA_LIMITS_EX.CpuRateLimit", cpu_rate_limit, 0x2a0, 0x20, true, 0x2321bceb3afd9ecf)
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
#endif