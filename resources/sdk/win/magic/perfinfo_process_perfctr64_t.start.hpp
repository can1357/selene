#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PROCESS_PERFCTR64.ProcessId", process_id, 0x0, 0x20, true, 0x4aa896fcd5915ca1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PROCESS_PERFCTR64.PageFaultCount", page_fault_count, 0x20, 0x20, true, 0x4d169aa9dcc30563)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_PROCESS_PERFCTR64.HandleCount", handle_count, 0x40, 0x20, true, 0x722adf7f650a562d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_PERFCTR64.PeakVirtualSize", peak_virtual_size, 0x80, 0x40, true, 0xa69cf9a5f6a3566a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_PERFCTR64.PeakWorkingSetSize", peak_working_set_size, 0xc0, 0x40, true, 0xcbc9f356a286618b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_PERFCTR64.PeakPagefileUsage", peak_pagefile_usage, 0x100, 0x40, true, 0x302ca191f12b5523)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_PERFCTR64.QuotaPeakPagedPoolUsage", quota_peak_paged_pool_usage, 0x140, 0x40, true, 0x4ae60ba8892f37c8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_PERFCTR64.QuotaPeakNonPagedPoolUsage", quota_peak_non_paged_pool_usage, 0x180, 0x40, true, 0x68012a47f23868da)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_PERFCTR64.VirtualSize", virtual_size, 0x1c0, 0x40, true, 0x58b0ce9a4eeb5b09)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_PERFCTR64.WorkingSetSize", working_set_size, 0x200, 0x40, true, 0x1584ea2c3709195d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_PERFCTR64.PagefileUsage", pagefile_usage, 0x240, 0x40, true, 0xd530d1115dfef409)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_PERFCTR64.QuotaPagedPoolUsage", quota_paged_pool_usage, 0x280, 0x40, true, 0x92a7519049edc9f2)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_PERFCTR64.QuotaNonPagedPoolUsage", quota_non_paged_pool_usage, 0x2c0, 0x40, true, 0x9805ae7db31df47f)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_PROCESS_PERFCTR64.PrivatePageCount", private_page_count, 0x300, 0x40, true, 0xa257b304c0c97704)
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