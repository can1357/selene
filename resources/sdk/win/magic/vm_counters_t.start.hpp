#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS.PeakVirtualSize", peak_virtual_size, 0x0, 0x40, true, 0x81c9749def87a5b2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS.VirtualSize", virtual_size, 0x40, 0x40, true, 0x450a29a38d838953)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VM_COUNTERS.PageFaultCount", page_fault_count, 0x80, 0x20, true, 0x249a2be4558f027)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS.PeakWorkingSetSize", peak_working_set_size, 0xc0, 0x40, true, 0xad50a7bec486c722)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS.WorkingSetSize", working_set_size, 0x100, 0x40, true, 0x5cbc5eef619c7af6)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS.QuotaPeakPagedPoolUsage", quota_peak_paged_pool_usage, 0x140, 0x40, true, 0x721a6c5b9361776a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS.QuotaPagedPoolUsage", quota_paged_pool_usage, 0x180, 0x40, true, 0x137c15d7e49db44c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS.QuotaPeakNonPagedPoolUsage", quota_peak_non_paged_pool_usage, 0x1c0, 0x40, true, 0x90d30c3a53871b65)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS.QuotaNonPagedPoolUsage", quota_non_paged_pool_usage, 0x200, 0x40, true, 0xcbad84dc58372faf)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS.PagefileUsage", pagefile_usage, 0x240, 0x40, true, 0xae2c9a9fe239c403)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS.PeakPagefileUsage", peak_pagefile_usage, 0x280, 0x40, true, 0xff1bdba039eb914c)
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
#endif