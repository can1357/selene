#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::cached_kstack_list_t, 2>), "_MI_SYSTEM_NODE_INFORMATION.CachedKernelStacks", cached_kernel_stacks, 0x0, 0x0, true, 0x66ca1552fdba6b0)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::dynamic_bitmap_t), "_MI_SYSTEM_NODE_INFORMATION.DynamicBitMapNonPagedPool", dynamic_bit_map_non_paged_pool, 0x200, 0x40, true, 0x3f8538bad61490e1)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_NODE_INFORMATION.CachedNonPagedPoolCount", cached_non_paged_pool_count, 0x440, 0x40, true, 0x86b9bc2542c6e171)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_NODE_INFORMATION.NonPagedPoolSpinLock", non_paged_pool_spin_lock, 0x480, 0x40, true, 0xa1cd9e64f878305d)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpfn_t*), "_MI_SYSTEM_NODE_INFORMATION.CachedNonPagedPool", cached_non_paged_pool, 0x4c0, 0x40, true, 0x2504d830a3b26a2f)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_SYSTEM_NODE_INFORMATION.NonPagedPoolFirstVa", non_paged_pool_first_va, 0x500, 0x40, true, 0xbb091a23b00b8b70)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_SYSTEM_NODE_INFORMATION.NonPagedPoolLastVa", non_paged_pool_last_va, 0x540, 0x40, true, 0xf2f27aa337bc09cf)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_MI_SYSTEM_NODE_INFORMATION.PagedPoolSListHead", paged_pool_s_list_head, 0x0, 0x0, false, 0xceee1bc6546c208e)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union nt::slist_header_t, 3>), "_MI_SYSTEM_NODE_INFORMATION.NonPagedPoolSListHead", non_paged_pool_s_list_head, 0x0, 0x0, false, 0x86f7ca6e516f55cf)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union nt::slist_header_t, 3>), "_MI_SYSTEM_NODE_INFORMATION.NonPagedPoolSListHeadNx", non_paged_pool_s_list_head_nx, 0x0, 0x0, false, 0x7f9000367e00f910)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_NODE_INFORMATION.NonPagedBitMapMaximum", non_paged_bit_map_maximum, 0x0, 0x0, false, 0xfd91a77796d45ae)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_NODE_INFORMATION.NonPagedPoolLowestPage", non_paged_pool_lowest_page, 0x0, 0x0, false, 0x7c8e1c39d2594f09)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_NODE_INFORMATION.NonPagedPoolHighestPage", non_paged_pool_highest_page, 0x0, 0x0, false, 0xcf22fcea3b3ed30d)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_NODE_INFORMATION.AllocatedNonPagedPool", allocated_non_paged_pool, 0x0, 0x0, false, 0xa120ce284d2b4fb9)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_NODE_INFORMATION.PartialLargePoolRegions", partial_large_pool_regions, 0x0, 0x0, false, 0xfdd54a8fec7cb182)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_NODE_INFORMATION.PagesInPartialLargePoolRegions", pages_in_partial_large_pool_regions, 0x0, 0x0, false, 0xc8002b95cc65c69a)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct rtl::bitmap_ex_t, 3>), "_MI_SYSTEM_NODE_INFORMATION.NonPagedBitMap", non_paged_bit_map, 0x0, 0x0, false, 0x3aca8d48fe14479f)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_MI_SYSTEM_NODE_INFORMATION.NonPagedHint", non_paged_hint, 0x0, 0x0, false, 0x82852466d2bbd927)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t*), "_MI_SYSTEM_NODE_INFORMATION.GroupAffinity", group_affinity, 0x0, 0x0, false, 0x42d9b51da3323d8d)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MI_SYSTEM_NODE_INFORMATION.GroupAffinityCount", group_affinity_count, 0x0, 0x0, false, 0x8f9b8556601b1894)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 3>), "_MI_SYSTEM_NODE_INFORMATION.ProcessorCount", processor_count, 0x0, 0x0, false, 0x6e6baf9ca939c12b)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 3>), "_MI_SYSTEM_NODE_INFORMATION.UsableProcessorCount", usable_processor_count, 0x0, 0x0, false, 0xe1d63363d39f76e2)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::node_number_zero_based_t), "_MI_SYSTEM_NODE_INFORMATION.ProcessorNode", processor_node, 0x0, 0x0, false, 0xc532cbde0fbf2c3f)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t), "_MI_SYSTEM_NODE_INFORMATION.ForwardProgressGroupAffinity", forward_progress_group_affinity, 0x0, 0x0, false, 0x20eec9f33df91a50)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_SYSTEM_NODE_INFORMATION.LargePageListOpLock", large_page_list_op_lock, 0x0, 0x0, false, 0x48ac026a4e4fc674)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<struct mi::write_calibration_t, 3>, 3>), "_MI_SYSTEM_NODE_INFORMATION.WriteCalibration", write_calibration, 0x0, 0x0, false, 0xfe65342b4f371a7a)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_SYSTEM_NODE_INFORMATION.IoPfnLock", io_pfn_lock, 0x0, 0x0, false, 0x51d3e39a5c00cdf5)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::deferred_pfns_to_free_t, 4>), "_MI_SYSTEM_NODE_INFORMATION.DeferredPfnsToFree", deferred_pfns_to_free, 0x0, 0x0, false, 0xf33041cf7787c66d)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::deferred_pfns_to_free_t), "_MI_SYSTEM_NODE_INFORMATION.DeferredPfnsReady", deferred_pfns_ready, 0x0, 0x0, false, 0x65e412b7cf824965)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_SYSTEM_NODE_INFORMATION.DeferredPfnsToFreeLock", deferred_pfns_to_free_lock, 0x0, 0x0, false, 0xda13b6220306c9dc)
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
#endif