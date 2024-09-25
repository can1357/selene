#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESS_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0x36b5f242ff59c374)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESS_INFORMATION.NumberOfThreads", number_of_threads, 0x20, 0x20, true, 0x6cbf1f358d5de0e)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PROCESS_INFORMATION.WorkingSetPrivateSize", working_set_private_size, 0x40, 0x40, true, 0xb3b282c51de1c369)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESS_INFORMATION.HardFaultCount", hard_fault_count, 0x80, 0x20, true, 0xc1eb0089811896db)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESS_INFORMATION.NumberOfThreadsHighWatermark", number_of_threads_high_watermark, 0xa0, 0x20, true, 0xc55b407c5a018221)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESS_INFORMATION.CycleTime", cycle_time, 0xc0, 0x40, true, 0xcde0398f7ac22d98)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PROCESS_INFORMATION.CreateTime", create_time, 0x100, 0x40, true, 0xed1c8c91ea68efee)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PROCESS_INFORMATION.UserTime", user_time, 0x140, 0x40, true, 0xf15175de455faf4e)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PROCESS_INFORMATION.KernelTime", kernel_time, 0x180, 0x40, true, 0xc4200166809ce5be)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SYSTEM_PROCESS_INFORMATION.ImageName", image_name, 0x1c0, 0x80, true, 0x83d518cc8fc19eb2)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_SYSTEM_PROCESS_INFORMATION.BasePriority", base_priority, 0x240, 0x20, true, 0x6a78e2cda614d2d1)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_PROCESS_INFORMATION.UniqueProcessId", unique_process_id, 0x280, 0x40, true, 0x9902e92f7be40f7d)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_PROCESS_INFORMATION.InheritedFromUniqueProcessId", inherited_from_unique_process_id, 0x2c0, 0x40, true, 0xd98ce4bc572110bf)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESS_INFORMATION.HandleCount", handle_count, 0x300, 0x20, true, 0x7196635eec7fcf1f)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESS_INFORMATION.SessionId", session_id, 0x320, 0x20, true, 0x17f23cbd9d1060df)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESS_INFORMATION.UniqueProcessKey", unique_process_key, 0x340, 0x40, true, 0xc1d9b751a0009e2b)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESS_INFORMATION.PeakVirtualSize", peak_virtual_size, 0x380, 0x40, true, 0x59d17fc3ce67b49e)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESS_INFORMATION.VirtualSize", virtual_size, 0x3c0, 0x40, true, 0xcc8080b16df46f9e)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PROCESS_INFORMATION.PageFaultCount", page_fault_count, 0x400, 0x20, true, 0xa69f1fb5e1796364)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESS_INFORMATION.PeakWorkingSetSize", peak_working_set_size, 0x440, 0x40, true, 0xc23c9700f2a2edf7)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESS_INFORMATION.WorkingSetSize", working_set_size, 0x480, 0x40, true, 0x6f5214c6c87f85c6)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESS_INFORMATION.QuotaPeakPagedPoolUsage", quota_peak_paged_pool_usage, 0x4c0, 0x40, true, 0xf190cbf95fc1ece0)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESS_INFORMATION.QuotaPagedPoolUsage", quota_paged_pool_usage, 0x500, 0x40, true, 0xb8f90e92be4fad19)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESS_INFORMATION.QuotaPeakNonPagedPoolUsage", quota_peak_non_paged_pool_usage, 0x540, 0x40, true, 0x9a6dd747b60240f1)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESS_INFORMATION.QuotaNonPagedPoolUsage", quota_non_paged_pool_usage, 0x580, 0x40, true, 0x3d79ce439c8ee47)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESS_INFORMATION.PagefileUsage", pagefile_usage, 0x5c0, 0x40, true, 0xd8c1499c1dde314c)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESS_INFORMATION.PeakPagefileUsage", peak_pagefile_usage, 0x600, 0x40, true, 0xa08756b9849daf54)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PROCESS_INFORMATION.PrivatePageCount", private_page_count, 0x640, 0x40, true, 0x928f74cb2ed21029)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PROCESS_INFORMATION.ReadOperationCount", read_operation_count, 0x680, 0x40, true, 0x13a9dc620516da3a)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PROCESS_INFORMATION.WriteOperationCount", write_operation_count, 0x6c0, 0x40, true, 0x926a89cbf73d3e80)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PROCESS_INFORMATION.OtherOperationCount", other_operation_count, 0x700, 0x40, true, 0x277b0ab9aada0fc8)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PROCESS_INFORMATION.ReadTransferCount", read_transfer_count, 0x740, 0x40, true, 0xe3369f14ca01dd8c)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PROCESS_INFORMATION.WriteTransferCount", write_transfer_count, 0x780, 0x40, true, 0x257b5547fbc8a639)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PROCESS_INFORMATION.OtherTransferCount", other_transfer_count, 0x7c0, 0x40, true, 0x3c466287db8e88db)
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
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#endif