#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION.NextEntryOffset", next_entry_offset, 0x0, 0x20, true, 0xdd872f426c0de750)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION.Level", level, 0x20, 0x20, true, 0xe99d644ec325995e)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SYSTEM_VERIFIER_INFORMATION.DriverName", driver_name, 0xc0, 0x80, true, 0xa7b55b9f9889d98f)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION.RaiseIrqls", raise_irqls, 0x140, 0x20, true, 0x332979f9d2e755e0)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION.AcquireSpinLocks", acquire_spin_locks, 0x160, 0x20, true, 0xe3fbb95a1f28e494)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION.SynchronizeExecutions", synchronize_executions, 0x180, 0x20, true, 0xad58539928f5311f)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION.AllocationsAttempted", allocations_attempted, 0x1a0, 0x20, true, 0xc13f54006daaa335)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION.AllocationsSucceeded", allocations_succeeded, 0x1c0, 0x20, true, 0x2cd5fb7115ee8208)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION.AllocationsSucceededSpecialPool", allocations_succeeded_special_pool, 0x1e0, 0x20, true, 0x54153ca7542c66bb)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION.AllocationsWithNoTag", allocations_with_no_tag, 0x200, 0x20, true, 0x3f32ae9cbabaead9)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION.TrimRequests", trim_requests, 0x220, 0x20, true, 0xc73ee9795b326432)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION.Trims", trims, 0x240, 0x20, true, 0x9172db02a7058e9b)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION.AllocationsFailed", allocations_failed, 0x260, 0x20, true, 0x7ef01c2d69321255)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION.AllocationsFailedDeliberately", allocations_failed_deliberately, 0x280, 0x20, true, 0x7427129141cfc628)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION.Loads", loads, 0x2a0, 0x20, true, 0xca42677b87f753bb)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION.Unloads", unloads, 0x2c0, 0x20, true, 0x3c3c832b76ed1f58)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION.UnTrackedPool", un_tracked_pool, 0x2e0, 0x20, true, 0xa8d3f7d9cf7e73d)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION.CurrentPagedPoolAllocations", current_paged_pool_allocations, 0x300, 0x20, true, 0xf30c7f3c18e1417c)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION.CurrentNonPagedPoolAllocations", current_non_paged_pool_allocations, 0x320, 0x20, true, 0x4acc0d1643e922f)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION.PeakPagedPoolAllocations", peak_paged_pool_allocations, 0x340, 0x20, true, 0x33506d7adb6ae357)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION.PeakNonPagedPoolAllocations", peak_non_paged_pool_allocations, 0x360, 0x20, true, 0xbd67d1d7de415960)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_VERIFIER_INFORMATION.PagedPoolUsageInBytes", paged_pool_usage_in_bytes, 0x380, 0x40, true, 0xf05a80e5010d009d)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_VERIFIER_INFORMATION.NonPagedPoolUsageInBytes", non_paged_pool_usage_in_bytes, 0x3c0, 0x40, true, 0x2b77222dafcc8e72)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_VERIFIER_INFORMATION.PeakPagedPoolUsageInBytes", peak_paged_pool_usage_in_bytes, 0x400, 0x40, true, 0x796f5467cc290c05)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_VERIFIER_INFORMATION.PeakNonPagedPoolUsageInBytes", peak_non_paged_pool_usage_in_bytes, 0x440, 0x40, true, 0xb6eeec9d4fc3cd91)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 2>), "_SYSTEM_VERIFIER_INFORMATION.RuleClasses", rule_classes, 0x40, 0x40, true, 0xfa7cd303b17d31d4)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION.TriageContext", triage_context, 0x80, 0x20, true, 0x8f3dcdd6e34b641f)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_SYSTEM_VERIFIER_INFORMATION.Flags", flags, 0xa0, 0x20, true, 0x99ec3cc1d798b51)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VERIFIER_INFORMATION.Whole", whole, 0xa0, 0x20, true, 0x9f45d37e6bb99100)
#define _m27 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_VERIFIER_INFORMATION.Flags.AreAllDriversBeingVerified", are_all_drivers_being_verified, 0x0, 0x1, true, 0x469246816fea6314, 1, uint32_t)
#define _m28 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_VERIFIER_INFORMATION.Flags.DisabledFromCrash", disabled_from_crash, 0x1, 0x1, true, 0x2f4ed55fc98e5a0d, 1, uint32_t)
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
#define _m029
#define _m030
#define _m27
#define _m28
#endif