#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_VISIBLE_PARTITION.LowestPhysicalPage", lowest_physical_page, 0x0, 0x40, true, 0x568ae3025e092937)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_VISIBLE_PARTITION.HighestPhysicalPage", highest_physical_page, 0x40, 0x40, true, 0x35208ed3b27ebc94)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_VISIBLE_PARTITION.NumberOfPhysicalPages", number_of_physical_pages, 0x80, 0x40, true, 0xe0326e97ffe075bc)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_MI_VISIBLE_PARTITION.NumberOfPagingFiles", number_of_paging_files, 0xc0, 0x20, true, 0xae62e18203fb0559)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_VISIBLE_PARTITION.SystemCacheInitialized", system_cache_initialized, 0xe0, 0x8, true, 0xa02bc155fd5e6cf)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::mmpaging_file_t*, 16>), "_MI_VISIBLE_PARTITION.PagingFile", paging_file, 0x100, 0x0, true, 0x2ec92ba94e0c38b7)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_VISIBLE_PARTITION.AvailablePages", available_pages, 0x600, 0x40, true, 0x780674bf0418975)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_VISIBLE_PARTITION.ResidentAvailablePages", resident_available_pages, 0x800, 0x40, true, 0xd12962e75396cab3)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::mmsupport_instance_t, 1>), "_MI_VISIBLE_PARTITION.PartitionWs", partition_ws, 0xa00, 0x0, true, 0x7c8eadf858116c63)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::mmwsl_instance_t, 1>), "_MI_VISIBLE_PARTITION.PartitionWorkingSetLists", partition_working_set_lists, 0x1000, 0x40, true, 0x4309324d9d21db60)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_VISIBLE_PARTITION.TotalCommittedPages", total_committed_pages, 0x1140, 0x40, true, 0xede383ce0e64ddce)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfnlist_t), "_MI_VISIBLE_PARTITION.ModifiedPageListHead", modified_page_list_head, 0x1200, 0x40, true, 0x3fcfa4df8220c5f9)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfnlist_t), "_MI_VISIBLE_PARTITION.ModifiedNoWritePageListHead", modified_no_write_page_list_head, 0x1400, 0x40, true, 0x9a1c37b51248ef4f)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_VISIBLE_PARTITION.TotalCommitLimit", total_commit_limit, 0x1540, 0x40, true, 0xb427293b615142ed)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_VISIBLE_PARTITION.TotalPagesForPagingFile", total_pages_for_paging_file, 0x1580, 0x40, true, 0x48477022fe6c522)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_VISIBLE_PARTITION.VadPhysicalPages", vad_physical_pages, 0x15c0, 0x40, true, 0x7a0885609e45bc86)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_VISIBLE_PARTITION.ProcessLockedFilePages", process_locked_file_pages, 0x1600, 0x40, true, 0x8b6c7216dc8f6205)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_MI_VISIBLE_PARTITION.ChargeCommitmentFailures", charge_commitment_failures, 0x16c0, 0x80, true, 0xd713ecef924bf4e)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_VISIBLE_PARTITION.PageFileTraceIndex", page_file_trace_index, 0x1740, 0x20, true, 0x5b57641083ed421e)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::pagefile_traces_t, 32>), "_MI_VISIBLE_PARTITION.PageFileTraces", page_file_traces, 0x1780, 0x0, true, 0xd0e3722fef9ac4eb)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_VISIBLE_PARTITION.SharedCommit", shared_commit, 0x1640, 0x40, true, 0x639d51ba4ab25b89)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_VISIBLE_PARTITION.SlabAllocatorPages", slab_allocator_pages, 0x1680, 0x40, true, 0xbd76b94ba7865d09)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_VISIBLE_PARTITION.PageTableBitmapPages", page_table_bitmap_pages, 0x0, 0x0, false, 0xc703f374b4519f1f)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_VISIBLE_PARTITION.SlabAllocatorPagesUncharged", slab_allocator_pages_uncharged, 0x0, 0x0, false, 0x636d16242dd18e26)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_VISIBLE_PARTITION.BootSlabPages", boot_slab_pages, 0x0, 0x0, false, 0x5d884b150300f0a5)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_VISIBLE_PARTITION.SecureKernelPagesFromNonChargedSlabs", secure_kernel_pages_from_non_charged_slabs, 0x0, 0x0, false, 0xd5fdb3df8d473cea)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_VISIBLE_PARTITION.KernelShadowStackPages", kernel_shadow_stack_pages, 0x0, 0x0, false, 0x9103fa6c2684dd66)
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
#endif