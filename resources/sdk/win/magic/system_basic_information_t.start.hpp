#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_BASIC_INFORMATION.TimerResolution", timer_resolution, 0x20, 0x20, true, 0x67391e09fb3f9a7c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_BASIC_INFORMATION.PageSize", page_size, 0x40, 0x20, true, 0x3ed670c1173ddf87)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_BASIC_INFORMATION.NumberOfPhysicalPages", number_of_physical_pages, 0x60, 0x20, true, 0x21632ae7ff350a44)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_BASIC_INFORMATION.LowestPhysicalPageNumber", lowest_physical_page_number, 0x80, 0x20, true, 0x27b30ec1ed0e0f0b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_BASIC_INFORMATION.HighestPhysicalPageNumber", highest_physical_page_number, 0xa0, 0x20, true, 0xd346d0f8ec9a796a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_BASIC_INFORMATION.AllocationGranularity", allocation_granularity, 0xc0, 0x20, true, 0x2276d5b943f3e741)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_BASIC_INFORMATION.MinimumUserModeAddress", minimum_user_mode_address, 0x100, 0x40, true, 0x58418f9d22405ef5)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_BASIC_INFORMATION.MaximumUserModeAddress", maximum_user_mode_address, 0x140, 0x40, true, 0xdb9495ba95d04913)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_BASIC_INFORMATION.ActiveProcessorsAffinityMask", active_processors_affinity_mask, 0x180, 0x40, true, 0x9054d0d78cb114cd)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_SYSTEM_BASIC_INFORMATION.NumberOfProcessors", number_of_processors, 0x1c0, 0x8, true, 0xc26c42c84ee3cb87)
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