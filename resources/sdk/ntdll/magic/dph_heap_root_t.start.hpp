#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPH_HEAP_ROOT.Signature", signature, 0x0, 0x20, true, 0xa4a87caecd4152a0)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPH_HEAP_ROOT.HeapFlags", heap_flags, 0x20, 0x20, true, 0x346cc21941a8b506)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::critical_section_t*), "_DPH_HEAP_ROOT.HeapCritSect", heap_crit_sect, 0x40, 0x40, true, 0xfa33eb7e004f5733)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPH_HEAP_ROOT.nRemoteLockAcquired", n_remote_lock_acquired, 0x80, 0x20, true, 0x14be1cff7ced3d89)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ntdll::dph_heap_block_t*), "_DPH_HEAP_ROOT.pVirtualStorageListHead", p_virtual_storage_list_head, 0xc0, 0x40, true, 0xe34b3130e295ceed)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ntdll::dph_heap_block_t*), "_DPH_HEAP_ROOT.pVirtualStorageListTail", p_virtual_storage_list_tail, 0x100, 0x40, true, 0xcfc77e5560f812d0)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPH_HEAP_ROOT.nVirtualStorageRanges", n_virtual_storage_ranges, 0x140, 0x20, true, 0xcc9e054b879347df)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DPH_HEAP_ROOT.nVirtualStorageBytes", n_virtual_storage_bytes, 0x180, 0x40, true, 0x814c379acb285afd)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_table_t), "_DPH_HEAP_ROOT.BusyNodesTable", busy_nodes_table, 0x1c0, 0x40, true, 0x9151f3a2f1064491)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ntdll::dph_heap_block_t*), "_DPH_HEAP_ROOT.NodeToAllocate", node_to_allocate, 0x500, 0x40, true, 0xf63d157c2b66fe19)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPH_HEAP_ROOT.nBusyAllocations", n_busy_allocations, 0x540, 0x20, true, 0x60626005ab666fc)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DPH_HEAP_ROOT.nBusyAllocationBytesCommitted", n_busy_allocation_bytes_committed, 0x580, 0x40, true, 0x43d05faf0c084918)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ntdll::dph_heap_block_t*), "_DPH_HEAP_ROOT.pFreeAllocationListHead", p_free_allocation_list_head, 0x5c0, 0x40, true, 0x14197cc7c83fb41c)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ntdll::dph_heap_block_t*), "_DPH_HEAP_ROOT.pFreeAllocationListTail", p_free_allocation_list_tail, 0x600, 0x40, true, 0x96c72c98bc062365)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPH_HEAP_ROOT.nFreeAllocations", n_free_allocations, 0x640, 0x20, true, 0x8725e527d44067d7)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DPH_HEAP_ROOT.nFreeAllocationBytesCommitted", n_free_allocation_bytes_committed, 0x680, 0x40, true, 0x17faa3b5a8c59cf2)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_DPH_HEAP_ROOT.AvailableAllocationHead", available_allocation_head, 0x6c0, 0x80, true, 0xb2e9596bed1ab63)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPH_HEAP_ROOT.nAvailableAllocations", n_available_allocations, 0x740, 0x20, true, 0xc1cd6c51e8f2a524)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DPH_HEAP_ROOT.nAvailableAllocationBytesCommitted", n_available_allocation_bytes_committed, 0x780, 0x40, true, 0xaf37b9a93639d7e7)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ntdll::dph_heap_block_t*), "_DPH_HEAP_ROOT.pUnusedNodeListHead", p_unused_node_list_head, 0x7c0, 0x40, true, 0x355604af2822b83f)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ntdll::dph_heap_block_t*), "_DPH_HEAP_ROOT.pUnusedNodeListTail", p_unused_node_list_tail, 0x800, 0x40, true, 0x79e8a806cbdc10ad)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPH_HEAP_ROOT.nUnusedNodes", n_unused_nodes, 0x840, 0x20, true, 0xa0f5f6b9b52bb5eb)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DPH_HEAP_ROOT.nBusyAllocationBytesAccessible", n_busy_allocation_bytes_accessible, 0x880, 0x40, true, 0x4f5f187002f2b6ea)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ntdll::dph_heap_block_t*), "_DPH_HEAP_ROOT.pNodePoolListHead", p_node_pool_list_head, 0x8c0, 0x40, true, 0x49c94834bf6a9184)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ntdll::dph_heap_block_t*), "_DPH_HEAP_ROOT.pNodePoolListTail", p_node_pool_list_tail, 0x900, 0x40, true, 0x960c1e64d42e9c63)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPH_HEAP_ROOT.nNodePools", n_node_pools, 0x940, 0x20, true, 0xf5479bf14c74a6fd)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_DPH_HEAP_ROOT.nNodePoolBytes", n_node_pool_bytes, 0x980, 0x40, true, 0x7973b28dd77a951)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_DPH_HEAP_ROOT.NextHeap", next_heap, 0x9c0, 0x80, true, 0xa64a3e239657e5c5)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPH_HEAP_ROOT.ExtraFlags", extra_flags, 0xa40, 0x20, true, 0xcc47d54d4e16567e)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DPH_HEAP_ROOT.Seed", seed, 0xa60, 0x20, true, 0x464ae7de625a4df)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DPH_HEAP_ROOT.NormalHeap", normal_heap, 0xa80, 0x40, true, 0x250bb060ff6057e7)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::trace_block_t*), "_DPH_HEAP_ROOT.CreateStackTrace", create_stack_trace, 0xac0, 0x40, true, 0x3a4c74950f3d23f)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DPH_HEAP_ROOT.FirstThread", first_thread, 0xb00, 0x40, true, 0xa26c751bcac810cd)
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