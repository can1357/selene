#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_POOLED_USAGE_AND_LIMITS.PeakPagedPoolUsage", peak_paged_pool_usage, 0x0, 0x40, true, 0x857f5ea799a736cb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_POOLED_USAGE_AND_LIMITS.PagedPoolUsage", paged_pool_usage, 0x40, 0x40, true, 0xa359673bb9f44067)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_POOLED_USAGE_AND_LIMITS.PagedPoolLimit", paged_pool_limit, 0x80, 0x40, true, 0x42753a6312ccbf46)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_POOLED_USAGE_AND_LIMITS.PeakNonPagedPoolUsage", peak_non_paged_pool_usage, 0xc0, 0x40, true, 0xc5cdcc21eacd1b7a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_POOLED_USAGE_AND_LIMITS.NonPagedPoolUsage", non_paged_pool_usage, 0x100, 0x40, true, 0xc6b72e409c1c355f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_POOLED_USAGE_AND_LIMITS.NonPagedPoolLimit", non_paged_pool_limit, 0x140, 0x40, true, 0xd8fb6bff65c686b2)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_POOLED_USAGE_AND_LIMITS.PeakPagefileUsage", peak_pagefile_usage, 0x180, 0x40, true, 0xdd72b9c44f685062)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_POOLED_USAGE_AND_LIMITS.PagefileUsage", pagefile_usage, 0x1c0, 0x40, true, 0x845723d7331b3695)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_POOLED_USAGE_AND_LIMITS.PagefileLimit", pagefile_limit, 0x200, 0x40, true, 0x5eb3e2604ee94f20)
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