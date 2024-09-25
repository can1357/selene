#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PROCESS_PERFCTR.ProcessId", process_id, 0x0, 0x20, true, 0x112f94546ee085b2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PROCESS_PERFCTR.PageFaultCount", page_fault_count, 0x20, 0x20, true, 0x72359f48c08a0c4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PROCESS_PERFCTR.HandleCount", handle_count, 0x40, 0x20, true, 0xd598c139b615c6ac)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_PERFCTR.PeakVirtualSize", peak_virtual_size, 0x80, 0x40, true, 0x8441321386652b93)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_PERFCTR.PeakWorkingSetSize", peak_working_set_size, 0xc0, 0x40, true, 0xf4d576aa8e3289b6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_PERFCTR.PeakPagefileUsage", peak_pagefile_usage, 0x100, 0x40, true, 0x20ce403a9318aa15)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_PERFCTR.QuotaPeakPagedPoolUsage", quota_peak_paged_pool_usage, 0x140, 0x40, true, 0x74fa4eaa837a8a89)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_PERFCTR.QuotaPeakNonPagedPoolUsage", quota_peak_non_paged_pool_usage, 0x180, 0x40, true, 0xad1881494238df7b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_PERFCTR.VirtualSize", virtual_size, 0x1c0, 0x40, true, 0x206aa6e3c2599109)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_PERFCTR.WorkingSetSize", working_set_size, 0x200, 0x40, true, 0xa2f1ede4dcd1f87e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_PERFCTR.PagefileUsage", pagefile_usage, 0x240, 0x40, true, 0xd047c0e05f0a686f)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_PERFCTR.QuotaPagedPoolUsage", quota_paged_pool_usage, 0x280, 0x40, true, 0x4040eee6eb59f51b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_PERFCTR.QuotaNonPagedPoolUsage", quota_non_paged_pool_usage, 0x2c0, 0x40, true, 0xff178b62e237dc15)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_PERFCTR.PrivatePageCount", private_page_count, 0x300, 0x40, true, 0x2b4cd701cedfc73d)
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