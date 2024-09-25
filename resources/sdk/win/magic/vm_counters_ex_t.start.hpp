#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS_EX.PeakVirtualSize", peak_virtual_size, 0x0, 0x40, true, 0xcc49081b944e88d8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS_EX.VirtualSize", virtual_size, 0x40, 0x40, true, 0xfb7fc5f47942c7fe)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VM_COUNTERS_EX.PageFaultCount", page_fault_count, 0x80, 0x20, true, 0x2ef0c1b54c3d59b3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS_EX.PeakWorkingSetSize", peak_working_set_size, 0xc0, 0x40, true, 0x2144850b0e241da5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS_EX.WorkingSetSize", working_set_size, 0x100, 0x40, true, 0xb68a78e4d07bf06b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS_EX.QuotaPeakPagedPoolUsage", quota_peak_paged_pool_usage, 0x140, 0x40, true, 0xba89250ee048ad4a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS_EX.QuotaPagedPoolUsage", quota_paged_pool_usage, 0x180, 0x40, true, 0x2da667c36beb8d4a)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS_EX.QuotaPeakNonPagedPoolUsage", quota_peak_non_paged_pool_usage, 0x1c0, 0x40, true, 0xed478253e5b5e7a5)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS_EX.QuotaNonPagedPoolUsage", quota_non_paged_pool_usage, 0x200, 0x40, true, 0x5086cb1429950658)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS_EX.PagefileUsage", pagefile_usage, 0x240, 0x40, true, 0x1215eb455b3bd5bb)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS_EX.PeakPagefileUsage", peak_pagefile_usage, 0x280, 0x40, true, 0xd61fe24fb48ed8fd)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_VM_COUNTERS_EX.PrivateUsage", private_usage, 0x2c0, 0x40, true, 0x7224cc95300c05db)
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
#endif