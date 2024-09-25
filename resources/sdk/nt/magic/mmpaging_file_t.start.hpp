#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMPAGING_FILE.Size", size, 0x0, 0x40, true, 0x2aabafb92e823e22)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMPAGING_FILE.MaximumSize", maximum_size, 0x40, 0x40, true, 0xf80f47609b96fb5)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMPAGING_FILE.MinimumSize", minimum_size, 0x80, 0x40, true, 0x735abc248baacde9)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMPAGING_FILE.FreeSpace", free_space, 0xc0, 0x40, true, 0x9bd159c567b27656)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMPAGING_FILE.PeakUsage", peak_usage, 0x100, 0x40, true, 0xd0057b07f40992ac)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMPAGING_FILE.HighestPage", highest_page, 0x140, 0x40, true, 0xda9c8db34ec1ea00)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMPAGING_FILE.FreeReservationSpace", free_reservation_space, 0x180, 0x40, true, 0x9d49a57550783a9b)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_MMPAGING_FILE.File", file, 0x1c0, 0x40, true, 0x48c991eff8c5ccfc)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<struct nt::mmmod_writer_mdl_entry_t*, 2>, struct nt::mmmod_writer_mdl_entry_t**>), "_MMPAGING_FILE.Entry", entry, 0x200, 0x40, true, 0xbdaa276706d2338)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_MMPAGING_FILE.PfnsToFree", pfns_to_free, 0x280, 0x80, true, 0x6bedb21d3cedfda4)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_MMPAGING_FILE.PageFileName", page_file_name, 0x300, 0x80, true, 0xb7757f0854648503)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::paging_file_space_bitmaps_t*), "_MMPAGING_FILE.Bitmaps", bitmaps, 0x380, 0x40, true, 0xef4db8d6861a4584)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMPAGING_FILE.AllocationBitmapHint", allocation_bitmap_hint, 0x3c0, 0x20, true, 0x6125f6b7337bbda)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMPAGING_FILE.LargestAllocationCluster", largest_allocation_cluster, 0x3e0, 0x20, true, 0x473b017a2c3aa0bd)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMPAGING_FILE.RefreshAllocationCluster", refresh_allocation_cluster, 0x400, 0x20, true, 0xe881b3c35faa5ec0)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMPAGING_FILE.LastRefreshAllocationCluster", last_refresh_allocation_cluster, 0x420, 0x20, true, 0x17c6731c4ef5a8e6)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMPAGING_FILE.ReservedClusterSizeAggregate", reserved_cluster_size_aggregate, 0x440, 0x20, true, 0x526d173155acb98c)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMPAGING_FILE.MaximumRunLengthInBitmaps", maximum_run_length_in_bitmaps, 0x460, 0x20, true, 0x5c8c498aee5f8c81)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::rb_tree_t), "_MMPAGING_FILE.BitmapsCacheLengthTree", bitmaps_cache_length_tree, 0x480, 0x80, true, 0x557be6f9a0dcac09)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::rb_tree_t), "_MMPAGING_FILE.BitmapsCacheLocationTree", bitmaps_cache_location_tree, 0x500, 0x80, true, 0x65d5a65577bab89)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MMPAGING_FILE.BitmapsCacheFreeList", bitmaps_cache_free_list, 0x580, 0x80, true, 0xf492749961bb4426)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::pagefile_bitmaps_cache_entry_t*), "_MMPAGING_FILE.BitmapsCacheEntries", bitmaps_cache_entries, 0x600, 0x40, true, 0xb771768b6dd5d4f)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMPAGING_FILE.ToBeEvictedCount", to_be_evicted_count, 0x640, 0x20, true, 0x5ca8fc02771665ff)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMPAGING_FILE.HybridPriority", hybrid_priority, 0x640, 0x20, true, 0x159d3710218a408e)
#define _m024 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_MMPAGING_FILE.PageFileNumber", page_file_number, 0x660, 0x4, true, 0x4c53ea0e08786cfb, 4, uint16_t)
#define _m025 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPAGING_FILE.WsSwapPagefile", ws_swap_pagefile, 0x664, 0x1, true, 0x2b26925e38996eea, 1, uint16_t)
#define _m026 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPAGING_FILE.NoReservations", no_reservations, 0x665, 0x1, true, 0x12b0ca5ef7b49a24, 1, uint16_t)
#define _m027 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPAGING_FILE.VirtualStorePagefile", virtual_store_pagefile, 0x666, 0x1, true, 0x968c2e83599affee, 1, uint16_t)
#define _m028 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPAGING_FILE.SwapSupported", swap_supported, 0x667, 0x1, true, 0x42c04198bf8b9056, 1, uint16_t)
#define _m029 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPAGING_FILE.NodeInserted", node_inserted, 0x668, 0x1, true, 0x9f4846b8e442f8bb, 1, uint16_t)
#define _m030 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPAGING_FILE.StackNotified", stack_notified, 0x669, 0x1, true, 0x748fccc6cfc006f2, 1, uint16_t)
#define _m031 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPAGING_FILE.AdriftMdls", adrift_mdls, 0x670, 0x1, true, 0xea5dbee1de31680e, 1, uint8_t)
#define _m032 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPAGING_FILE.IgnoreReservations", ignore_reservations, 0x678, 0x1, true, 0xbecf6cd0f15c80ac, 1, uint8_t)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMPAGING_FILE.PageHashPages", page_hash_pages, 0x680, 0x20, true, 0x79ab4f683a0ff79a)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMPAGING_FILE.PageHashPagesPeak", page_hash_pages_peak, 0x6a0, 0x20, true, 0xa279085cfe9e2006)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<uint32_t*, struct mi::page_hash_t*>), "_MMPAGING_FILE.PageHash", page_hash, 0x6c0, 0x40, true, 0x1792fb9ca2a0517)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMPAGING_FILE.FileHandle", file_handle, 0x700, 0x40, true, 0x34b94eb53d85c5d8)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MMPAGING_FILE.FlowThroughReadRoot", flow_through_read_root, 0x780, 0x40, true, 0x62124c068437abf3)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::partition_t*), "_MMPAGING_FILE.Partition", partition, 0x7c0, 0x40, true, 0x9b53dac9bf9f4d15)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_MMPAGING_FILE.FileObjectNode", file_object_node, 0x800, 0xc0, true, 0xba6a2c636076cd76)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MMPAGING_FILE.NumberOfModWriterEntries", number_of_mod_writer_entries, 0x240, 0x20, true, 0x5a1754bfdc32d189)
#define _m041 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPAGING_FILE.BackedBySCM", backed_by_scm, 0x66a, 0x1, true, 0x56dbfd366c64974e, 1, uint16_t)
#define _m042 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MMPAGING_FILE.SpecialPurposeMemory", special_purpose_memory, 0x66b, 0x1, true, 0xc4b3b80aec6f3e01, 1, uint16_t)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MMPAGING_FILE.SpinLock", spin_lock, 0x740, 0x20, true, 0xa2f81851ec02c96e)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::rb_tree_t), "_MMPAGING_FILE.ExtentsTree", extents_tree, 0x0, 0x0, false, 0xe9cb7bb91924dab5)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMPAGING_FILE.Lock", lock, 0x0, 0x0, false, 0x6f35eab4b757c9f9)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_MMPAGING_FILE.LockOwner", lock_owner, 0x0, 0x0, false, 0xd5a5813a7a51898c)
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
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#endif