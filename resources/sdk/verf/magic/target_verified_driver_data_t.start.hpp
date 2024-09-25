#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct verf::suspect_driver_entry_t*), "_VF_TARGET_VERIFIED_DRIVER_DATA.SuspectDriverEntry", suspect_driver_entry, 0x0, 0x40, true, 0x7a503f9f0951db4f)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_VF_TARGET_VERIFIED_DRIVER_DATA.WMICallback", wmi_callback, 0x40, 0x40, true, 0xfcdd3b5f48d852db)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.EtwHandlesListHead", etw_handles_list_head, 0x80, 0x80, true, 0x34a65966c63181f4)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_flags_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.Flags", flags, 0x100, 0x20, true, 0xd7fb02c8c54de734)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.Whole", whole, 0x100, 0x20, true, 0x20ef1e4ff229084a)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.Signature", signature, 0x140, 0x40, true, 0xdb12628474f70877)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.PoolPageHeaders", pool_page_headers, 0x200, 0x80, true, 0x8f28d1aa5e60c6c4)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.PoolTrackers", pool_trackers, 0x280, 0x80, true, 0x62fd73331770b89)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.CurrentPagedPoolAllocations", current_paged_pool_allocations, 0x340, 0x20, true, 0xd7f89e090dc5e2c)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.CurrentNonPagedPoolAllocations", current_non_paged_pool_allocations, 0x360, 0x20, true, 0xb50fe6aea0b2f0c)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.PeakPagedPoolAllocations", peak_paged_pool_allocations, 0x380, 0x20, true, 0x7dbe9f8961dc6051)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.PeakNonPagedPoolAllocations", peak_non_paged_pool_allocations, 0x3a0, 0x20, true, 0xfd499ad1c638e003)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.PagedBytes", paged_bytes, 0x3c0, 0x40, true, 0xf5b08d3871a32f81)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.NonPagedBytes", non_paged_bytes, 0x400, 0x40, true, 0xb3c62d1ce5a6e92f)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.PeakPagedBytes", peak_paged_bytes, 0x440, 0x40, true, 0x416627f014b6eb45)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.PeakNonPagedBytes", peak_non_paged_bytes, 0x480, 0x40, true, 0xeddb1b6f7b045d99)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.RaiseIrqls", raise_irqls, 0x4c0, 0x20, true, 0xcfc49abec79bd5dc)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.AcquireSpinLocks", acquire_spin_locks, 0x4e0, 0x20, true, 0xa9d18eabd987f216)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.SynchronizeExecutions", synchronize_executions, 0x500, 0x20, true, 0x77b8afeb57d82892)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.AllocationsWithNoTag", allocations_with_no_tag, 0x520, 0x20, true, 0x6571d6d93e462d6e)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.AllocationsFailed", allocations_failed, 0x540, 0x20, true, 0x6531d5f55a78c20)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.AllocationsFailedDeliberately", allocations_failed_deliberately, 0x560, 0x20, true, 0x9aa631cd982bf65d)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.LockedBytes", locked_bytes, 0x580, 0x40, true, 0x63f856dc15d8226b)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.PeakLockedBytes", peak_locked_bytes, 0x5c0, 0x40, true, 0xd7baf82bd272a535)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.MappedLockedBytes", mapped_locked_bytes, 0x600, 0x40, true, 0x90b46fb77f65e75e)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.PeakMappedLockedBytes", peak_mapped_locked_bytes, 0x640, 0x40, true, 0x706507a23193fa17)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.MappedIoSpaceBytes", mapped_io_space_bytes, 0x680, 0x40, true, 0xd44b28ac8b37af8d)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.PeakMappedIoSpaceBytes", peak_mapped_io_space_bytes, 0x6c0, 0x40, true, 0xb86b4c0fe39aa9fe)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.Flags.MissedEtwRegistration", missed_etw_registration, 0x0, 0x1, true, 0x2814ebc1ca8c7729, 1, uint32_t)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.PagesForMdlBytes", pages_for_mdl_bytes, 0x700, 0x40, true, 0xd69a94b39ee77953)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.PeakPagesForMdlBytes", peak_pages_for_mdl_bytes, 0x740, 0x40, true, 0x3b26cd6b813fb1c2)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.ContiguousMemoryBytes", contiguous_memory_bytes, 0x780, 0x40, true, 0xaf3947e40d216828)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.PeakContiguousMemoryBytes", peak_contiguous_memory_bytes, 0x7c0, 0x40, true, 0x9c046f1a0ef129b1)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.ContiguousMemoryListHead", contiguous_memory_list_head, 0x800, 0x80, true, 0xbd06a19f7c1e703f)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.ExecutePoolTypes", execute_pool_types, 0x880, 0x20, true, 0x6eadfbd95778cff4)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.ExecutePageProtections", execute_page_protections, 0x8a0, 0x20, true, 0xdb91c31b46a9317b)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.ExecutePageMappings", execute_page_mappings, 0x8c0, 0x20, true, 0x534b058e50fc6d33)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.ExecuteWriteSections", execute_write_sections, 0x8e0, 0x20, true, 0xe1dd4676be2de67c)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.SectionAlignmentFailures", section_alignment_failures, 0x900, 0x20, true, 0x7eaf21c89645b44)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.Flags.IsBootDriver", is_boot_driver, 0x1, 0x1, true, 0xcb892f4ca6dc1a1d, 1, uint32_t)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.IATInExecutableSection", iat_in_executable_section, 0x920, 0x20, true, 0x2929c20b53f8307)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.SeSigningLevel", se_signing_level, 0x180, 0x8, true, 0x93b61cf34899ba1)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_VF_TARGET_VERIFIED_DRIVER_DATA.DifPluginData", dif_plugin_data, 0x300, 0x40, true, 0xd04c2cdb13b93a0a)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.DifPluginPerDriverDataContextHead", dif_plugin_per_driver_data_context_head, 0x0, 0x0, false, 0x8fe78467cc9ed601)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_VF_TARGET_VERIFIED_DRIVER_DATA.UnsupportedRelocs", unsupported_relocs, 0x0, 0x0, false, 0x4d701ae84969395c)
#else
#define _m000
#define _m001
#define _m002
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
#define _m03
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m04
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#endif