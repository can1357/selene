#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PROCESS_PERFCTR32.ProcessId", process_id, 0x0, 0x20, true, 0xcf4abb5e4002a950)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PROCESS_PERFCTR32.PageFaultCount", page_fault_count, 0x20, 0x20, true, 0x2bf0ec62bbc0605d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PROCESS_PERFCTR32.HandleCount", handle_count, 0x40, 0x20, true, 0x6d9caf6ac1df1f32)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PROCESS_PERFCTR32.PeakVirtualSize", peak_virtual_size, 0x80, 0x20, true, 0x742bb3609f4ae9d0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PROCESS_PERFCTR32.PeakWorkingSetSize", peak_working_set_size, 0xa0, 0x20, true, 0x5c91a5824c4573e3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PROCESS_PERFCTR32.PeakPagefileUsage", peak_pagefile_usage, 0xc0, 0x20, true, 0x1b9eb075816a0a23)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PROCESS_PERFCTR32.QuotaPeakPagedPoolUsage", quota_peak_paged_pool_usage, 0xe0, 0x20, true, 0xc766bc718a1e5fa6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PROCESS_PERFCTR32.QuotaPeakNonPagedPoolUsage", quota_peak_non_paged_pool_usage, 0x100, 0x20, true, 0x258b4dc2c0dbe347)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PROCESS_PERFCTR32.VirtualSize", virtual_size, 0x120, 0x20, true, 0xf3425ee3058e06af)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PROCESS_PERFCTR32.WorkingSetSize", working_set_size, 0x140, 0x20, true, 0x767e2aea0587063a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PROCESS_PERFCTR32.PagefileUsage", pagefile_usage, 0x160, 0x20, true, 0xeac6e0c989608803)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PROCESS_PERFCTR32.QuotaPagedPoolUsage", quota_paged_pool_usage, 0x180, 0x20, true, 0x465e1f02a000ee1e)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PROCESS_PERFCTR32.QuotaNonPagedPoolUsage", quota_non_paged_pool_usage, 0x1a0, 0x20, true, 0x8bea9b361629a26b)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PROCESS_PERFCTR32.PrivatePageCount", private_page_count, 0x1c0, 0x20, true, 0x9e5c6b71b9a6231e)
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