#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MM_DRIVER_VERIFIER_DATA.Level", level, 0x0, 0x20, true, 0x72b8240b228e7452)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MM_DRIVER_VERIFIER_DATA.RaiseIrqls", raise_irqls, 0x20, 0x20, true, 0x44882eee1358ab8c)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MM_DRIVER_VERIFIER_DATA.AcquireSpinLocks", acquire_spin_locks, 0x40, 0x20, true, 0x4b1e229223db80dd)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MM_DRIVER_VERIFIER_DATA.SynchronizeExecutions", synchronize_executions, 0x60, 0x20, true, 0xa49f3d7ba8d6bdf9)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MM_DRIVER_VERIFIER_DATA.AllocationsAttempted", allocations_attempted, 0x80, 0x20, true, 0x996cd68ec294e001)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MM_DRIVER_VERIFIER_DATA.AllocationsSucceeded", allocations_succeeded, 0xa0, 0x20, true, 0x26d2e439b933cf)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MM_DRIVER_VERIFIER_DATA.AllocationsSucceededSpecialPool", allocations_succeeded_special_pool, 0xc0, 0x20, true, 0x11b8a241aa8cf5ab)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MM_DRIVER_VERIFIER_DATA.AllocationsWithNoTag", allocations_with_no_tag, 0xe0, 0x20, true, 0x24bf120efc6ba020)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MM_DRIVER_VERIFIER_DATA.TrimRequests", trim_requests, 0x100, 0x20, true, 0x7611bace8c2e6437)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MM_DRIVER_VERIFIER_DATA.Trims", trims, 0x120, 0x20, true, 0xc8d55036df281299)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MM_DRIVER_VERIFIER_DATA.AllocationsFailed", allocations_failed, 0x140, 0x20, true, 0x7065d649a7169b75)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MM_DRIVER_VERIFIER_DATA.AllocationsFailedDeliberately", allocations_failed_deliberately, 0x160, 0x20, true, 0x7c5899c397f560fd)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MM_DRIVER_VERIFIER_DATA.Loads", loads, 0x180, 0x20, true, 0x3ba0c3f336c1083a)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MM_DRIVER_VERIFIER_DATA.Unloads", unloads, 0x1a0, 0x20, true, 0x3b940c34bbe762d)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MM_DRIVER_VERIFIER_DATA.UnTrackedPool", un_tracked_pool, 0x1c0, 0x20, true, 0xa32e3a7e25251f15)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MM_DRIVER_VERIFIER_DATA.UserTrims", user_trims, 0x1e0, 0x20, true, 0xabc0478f52415080)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MM_DRIVER_VERIFIER_DATA.CurrentPagedPoolAllocations", current_paged_pool_allocations, 0x200, 0x20, true, 0x3cc5446169314991)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MM_DRIVER_VERIFIER_DATA.CurrentNonPagedPoolAllocations", current_non_paged_pool_allocations, 0x220, 0x20, true, 0x4306534fbb8d136b)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MM_DRIVER_VERIFIER_DATA.PeakPagedPoolAllocations", peak_paged_pool_allocations, 0x240, 0x20, true, 0x74a10a0e0182f092)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MM_DRIVER_VERIFIER_DATA.PeakNonPagedPoolAllocations", peak_non_paged_pool_allocations, 0x260, 0x20, true, 0xd48de24641aa2495)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MM_DRIVER_VERIFIER_DATA.PagedBytes", paged_bytes, 0x280, 0x40, true, 0xbe92fa289f31a1a0)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MM_DRIVER_VERIFIER_DATA.NonPagedBytes", non_paged_bytes, 0x2c0, 0x40, true, 0x4d48fd58b0ac6069)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MM_DRIVER_VERIFIER_DATA.PeakPagedBytes", peak_paged_bytes, 0x300, 0x40, true, 0x9f5bf700e6b55f29)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MM_DRIVER_VERIFIER_DATA.PeakNonPagedBytes", peak_non_paged_bytes, 0x340, 0x40, true, 0x2ac884cb0e3b6cd1)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MM_DRIVER_VERIFIER_DATA.BurstAllocationsFailedDeliberately", burst_allocations_failed_deliberately, 0x380, 0x20, true, 0x2cfa18f8433b2c96)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MM_DRIVER_VERIFIER_DATA.SessionTrims", session_trims, 0x3a0, 0x20, true, 0x727ac1d44a12588e)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MM_DRIVER_VERIFIER_DATA.OptionChanges", option_changes, 0x3c0, 0x20, true, 0x570e512c76da8f0)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MM_DRIVER_VERIFIER_DATA.VerifyMode", verify_mode, 0x3e0, 0x20, true, 0x68986e765d78727)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MM_DRIVER_VERIFIER_DATA.PreviousBucketName", previous_bucket_name, 0x400, 0x80, true, 0x4b5c09d509535185)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MM_DRIVER_VERIFIER_DATA.ExecutePoolTypes", execute_pool_types, 0x480, 0x20, true, 0x5117553c5fee920c)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MM_DRIVER_VERIFIER_DATA.ExecutePageProtections", execute_page_protections, 0x4a0, 0x20, true, 0x16295d1f12fa09f)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MM_DRIVER_VERIFIER_DATA.ExecutePageMappings", execute_page_mappings, 0x4c0, 0x20, true, 0x52d416f6f903d013)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MM_DRIVER_VERIFIER_DATA.ExecuteWriteSections", execute_write_sections, 0x4e0, 0x20, true, 0x2659f3dfb91aaa0e)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MM_DRIVER_VERIFIER_DATA.SectionAlignmentFailures", section_alignment_failures, 0x500, 0x20, true, 0x8185e7d00f34835c)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MM_DRIVER_VERIFIER_DATA.IATInExecutableSection", iat_in_executable_section, 0x520, 0x20, true, 0x716d89b858b91514)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MM_DRIVER_VERIFIER_DATA.UnsupportedRelocs", unsupported_relocs, 0x0, 0x0, false, 0x64735adb223334ff)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MM_DRIVER_VERIFIER_DATA.AllocationFreed", allocation_freed, 0x0, 0x0, false, 0x37ecf5f6eb547508)
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
#define _m034
#define _m035
#define _m036
#endif