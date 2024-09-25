#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PSS_PROCESS_INFORMATION.ExitStatus", exit_status, 0x0, 0x20, true, 0xa274a4183d5d73a0)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "PSS_PROCESS_INFORMATION.PebBaseAddress", peb_base_address, 0x40, 0x40, true, 0x59451610ee8f9342)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PROCESS_INFORMATION.AffinityMask", affinity_mask, 0x80, 0x40, true, 0x4c32355dbce3510b)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "PSS_PROCESS_INFORMATION.BasePriority", base_priority, 0xc0, 0x20, true, 0x9ae64885fb5f5e58)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PSS_PROCESS_INFORMATION.ProcessId", process_id, 0xe0, 0x20, true, 0x8ed976547769331c)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PSS_PROCESS_INFORMATION.ParentProcessId", parent_process_id, 0x100, 0x20, true, 0xb6404942ddac6cba)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::pss_process_flags_t), "PSS_PROCESS_INFORMATION.Flags", flags, 0x120, 0x20, true, 0x265c17ca862622d1)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "PSS_PROCESS_INFORMATION.CreateTime", create_time, 0x140, 0x40, true, 0x3f8ec9718d4eda78)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "PSS_PROCESS_INFORMATION.ExitTime", exit_time, 0x180, 0x40, true, 0xac0c5d89d3f8ade9)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "PSS_PROCESS_INFORMATION.KernelTime", kernel_time, 0x1c0, 0x40, true, 0xd9951324172b8a7a)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "PSS_PROCESS_INFORMATION.UserTime", user_time, 0x200, 0x40, true, 0xb1772a6314dc7136)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PSS_PROCESS_INFORMATION.PriorityClass", priority_class, 0x240, 0x20, true, 0x63b041811c0cdea8)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PROCESS_INFORMATION.PeakVirtualSize", peak_virtual_size, 0x280, 0x40, true, 0xbb4b59533e90a8e7)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PROCESS_INFORMATION.VirtualSize", virtual_size, 0x2c0, 0x40, true, 0xdcf3935f49dd127e)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PSS_PROCESS_INFORMATION.PageFaultCount", page_fault_count, 0x300, 0x20, true, 0x3fe86bfd93b4c16a)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PROCESS_INFORMATION.PeakWorkingSetSize", peak_working_set_size, 0x340, 0x40, true, 0x44ed38489c4d7ef2)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PROCESS_INFORMATION.WorkingSetSize", working_set_size, 0x380, 0x40, true, 0xba49e9d5390a9210)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PROCESS_INFORMATION.QuotaPeakPagedPoolUsage", quota_peak_paged_pool_usage, 0x3c0, 0x40, true, 0x705116c9e73c99c4)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PROCESS_INFORMATION.QuotaPagedPoolUsage", quota_paged_pool_usage, 0x400, 0x40, true, 0x13cba5ef8767e25d)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PROCESS_INFORMATION.QuotaPeakNonPagedPoolUsage", quota_peak_non_paged_pool_usage, 0x440, 0x40, true, 0xcdfcea3af920ed46)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PROCESS_INFORMATION.QuotaNonPagedPoolUsage", quota_non_paged_pool_usage, 0x480, 0x40, true, 0x478bf44c0b49b8f4)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PROCESS_INFORMATION.PagefileUsage", pagefile_usage, 0x4c0, 0x40, true, 0x613552c7d14a5ba2)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PROCESS_INFORMATION.PeakPagefileUsage", peak_pagefile_usage, 0x500, 0x40, true, 0x56448b9452bf76cd)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "PSS_PROCESS_INFORMATION.PrivateUsage", private_usage, 0x540, 0x40, true, 0x72ea2bc17452ff72)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "PSS_PROCESS_INFORMATION.ExecuteFlags", execute_flags, 0x580, 0x20, true, 0xe42a758d3787b4a5)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "PSS_PROCESS_INFORMATION.ImageFileName", image_file_name, 0x5a0, 0x40, true, 0xc681d50baef06e9)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#endif