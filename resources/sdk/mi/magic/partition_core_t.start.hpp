#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_MI_PARTITION_CORE.PartitionId", partition_id, 0x0, 0x10, true, 0xe20dbd080e0e0838)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PARTITION_CORE.LongFlags", long_flags, 0x20, 0x20, true, 0x3b93e5d983f6b34e)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::partition_flags_t), "_MI_PARTITION_CORE.Flags", flags, 0x20, 0x20, true, 0x3eab389bed6e3e0)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PARTITION_CORE.Signature", signature, 0x40, 0x20, true, 0x5d9a38585a0e8e14)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::node_information_t*), "_MI_PARTITION_CORE.NodeInformation", node_information, 0x80, 0x40, true, 0x5928d784a1ba06d7)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_PARTITION_CORE.PageRoot", page_root, 0xc0, 0x40, true, 0xa8de38703b81e4fa)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::physical_memory_descriptor_t*), "_MI_PARTITION_CORE.MemoryNodeRuns", memory_node_runs, 0x100, 0x40, true, 0x93147418309963ed)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_CORE.MemoryBlockReferences", memory_block_references, 0x140, 0x40, true, 0x4a7ab64964951b98)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_MI_PARTITION_CORE.PfnUnmapWorkItem", pfn_unmap_work_item, 0x180, 0x0, true, 0x282f8809be1b5f95)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_CORE.PfnUnmapCount", pfn_unmap_count, 0x280, 0x40, true, 0xdff2d4d259208dbb)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_PARTITION_CORE.PfnUnmapWaitList", pfn_unmap_wait_list, 0x2c0, 0x40, true, 0x76733c31b75836cd)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::physical_memory_descriptor_t*), "_MI_PARTITION_CORE.MemoryRuns", memory_runs, 0x300, 0x40, true, 0xe8562f7d937714e1)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PARTITION_CORE.ExitEvent", exit_event, 0x340, 0xc0, true, 0xadcb44407cc09643)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 5>), "_MI_PARTITION_CORE.SystemThreadHandles", system_thread_handles, 0x400, 0x80, true, 0x92c4956a30ff7e46)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<void*, struct nt::epartition_t*>), "_MI_PARTITION_CORE.PartitionObject", partition_object, 0x580, 0x40, true, 0x6df59fecbe5437fd)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_PARTITION_CORE.DynamicMemoryPushLock", dynamic_memory_push_lock, 0x600, 0x40, true, 0x296f89d4813e44f8)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PARTITION_CORE.DynamicMemoryLock", dynamic_memory_lock, 0x640, 0x20, true, 0x63d4decb179090ab)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_PARTITION_CORE.PfnUnmapActive", pfn_unmap_active, 0x660, 0x8, true, 0xb090b1b72f7975cd)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PARTITION_CORE.TemporaryMemoryEvent", temporary_memory_event, 0x680, 0xc0, true, 0xd2f599e8b3ee515)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::kevent_t*, 11>), "_MI_PARTITION_CORE.MemoryEvents", memory_events, 0x7c0, 0xc0, true, 0x249e31d8620722b)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_PARTITION_CORE.MemoryConfigurationChanged", memory_configuration_changed, 0x60, 0x8, true, 0x4d5da9f637f27996)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_PARTITION_CORE.PartitionSystemThreadsLock", partition_system_threads_lock, 0x5c0, 0x40, true, 0xa997ce81112675c3)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_PARTITION_CORE.RootDirectory", root_directory, 0x740, 0x40, true, 0xd53d2509eed64318)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_PARTITION_CORE.KernelObjectsDirectory", kernel_objects_directory, 0x780, 0x40, true, 0x22e3ee9cfdc2c1dc)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 11>), "_MI_PARTITION_CORE.MemoryEventHandles", memory_event_handles, 0xa80, 0xc0, true, 0x1776a4502f7f9151)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_CORE.TotalHugeIoRanges", total_huge_io_ranges, 0xd40, 0x40, true, 0x7b33b79c5067215b)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_CORE.NonChargedSecurePages", non_charged_secure_pages, 0xd80, 0x40, true, 0x317bd7225d7513cd)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_CORE.ReferenceCount", reference_count, 0x0, 0x0, false, 0xbf51fbf298353b08)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::partition_t*), "_MI_PARTITION_CORE.ParentPartition", parent_partition, 0x0, 0x0, false, 0x4b72dc537a32e5fc)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_PARTITION_CORE.ListEntry", list_entry, 0x0, 0x0, false, 0xf9bb2c1f15820517)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_PARTITION_CORE.PartitionObjectHandle", partition_object_handle, 0x0, 0x0, false, 0x157afa89854537db)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PARTITION_CORE.ConductorNeededEvent", conductor_needed_event, 0x0, 0x0, false, 0x95fabd64e17c15be)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_MI_PARTITION_CORE.FreeKernelShadowStackCacheEntries", free_kernel_shadow_stack_cache_entries, 0x0, 0x0, false, 0x9259f3ad82dd95fd)
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
#endif