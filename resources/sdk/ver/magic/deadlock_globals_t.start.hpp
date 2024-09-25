#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_VI_DEADLOCK_GLOBALS.TimeAcquire", time_acquire, 0x0, 0x40, true, 0xa150ed1f9c53b329)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_VI_DEADLOCK_GLOBALS.TimeRelease", time_release, 0x40, 0x40, true, 0x471da6604bdeaf03)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_VI_DEADLOCK_GLOBALS.ResourceDatabase", resource_database, 0x80, 0x40, true, 0x3fefb029aeddc3c5)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VI_DEADLOCK_GLOBALS.ResourceDatabaseCount", resource_database_count, 0xc0, 0x40, true, 0x16777d3b32480ba8)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct verf::address_range_t, 1023>), "_VI_DEADLOCK_GLOBALS.ResourceAddressRange", resource_address_range, 0x100, 0x80, true, 0xcd3097432cd84ebc)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_VI_DEADLOCK_GLOBALS.ThreadDatabase", thread_database, 0x20080, 0x40, true, 0xaf229936012b52cb)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VI_DEADLOCK_GLOBALS.ThreadDatabaseCount", thread_database_count, 0x200c0, 0x40, true, 0xdc714166ab01e0e1)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct verf::address_range_t, 1023>), "_VI_DEADLOCK_GLOBALS.ThreadAddressRange", thread_address_range, 0x20100, 0x80, true, 0x3b1bb869ef83f55b)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_VI_DEADLOCK_GLOBALS.AllocationFailures", allocation_failures, 0x40080, 0x20, true, 0xfa03279230cefa9f)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VI_DEADLOCK_GLOBALS.NodesTrimmedBasedOnAge", nodes_trimmed_based_on_age, 0x400a0, 0x20, true, 0x8fe84d2da0b1a4a5)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VI_DEADLOCK_GLOBALS.NodesTrimmedBasedOnCount", nodes_trimmed_based_on_count, 0x400c0, 0x20, true, 0xbc5c4d3dada61593)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VI_DEADLOCK_GLOBALS.NodesSearched", nodes_searched, 0x400e0, 0x20, true, 0x5ece16ad50ea671e)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VI_DEADLOCK_GLOBALS.MaxNodesSearched", max_nodes_searched, 0x40100, 0x20, true, 0x385cd8d19c627d60)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VI_DEADLOCK_GLOBALS.SequenceNumber", sequence_number, 0x40120, 0x20, true, 0x753f8f536e16f3e)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VI_DEADLOCK_GLOBALS.RecursionDepthLimit", recursion_depth_limit, 0x40140, 0x20, true, 0x9440a4eddedee3da)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VI_DEADLOCK_GLOBALS.SearchedNodesLimit", searched_nodes_limit, 0x40160, 0x20, true, 0x10eeb8d8e0ba1756)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VI_DEADLOCK_GLOBALS.DepthLimitHits", depth_limit_hits, 0x40180, 0x20, true, 0xc801802164d64d66)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VI_DEADLOCK_GLOBALS.SearchLimitHits", search_limit_hits, 0x401a0, 0x20, true, 0x8ed744f74887a409)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VI_DEADLOCK_GLOBALS.StackLimitHits", stack_limit_hits, 0x401c0, 0x20, true, 0x58ae581b2c006bd6)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VI_DEADLOCK_GLOBALS.ABC_ACB_Skipped", abc_acb_skipped, 0x401e0, 0x20, true, 0x45f08d8c03a05c0b)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VI_DEADLOCK_GLOBALS.OutOfOrderReleases", out_of_order_releases, 0x40200, 0x20, true, 0x532d340a269e8b8d)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VI_DEADLOCK_GLOBALS.NodesReleasedOutOfOrder", nodes_released_out_of_order, 0x40220, 0x20, true, 0x605990ea03d02920)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VI_DEADLOCK_GLOBALS.TotalReleases", total_releases, 0x40240, 0x20, true, 0x64c74cccef05274d)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VI_DEADLOCK_GLOBALS.RootNodesDeleted", root_nodes_deleted, 0x40260, 0x20, true, 0x639427bf5b2e5e28)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VI_DEADLOCK_GLOBALS.ForgetHistoryCounter", forget_history_counter, 0x40280, 0x20, true, 0x343e255ba9d1b146)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_VI_DEADLOCK_GLOBALS.Instigator", instigator, 0x402c0, 0x40, true, 0xdac2bc212a696c46)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_VI_DEADLOCK_GLOBALS.NumberOfParticipants", number_of_participants, 0x40300, 0x20, true, 0xb9eb60885d37c1dc)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ver::deadlock_node_t*, 32>), "_VI_DEADLOCK_GLOBALS.Participant", participant, 0x40340, 0x0, true, 0x9a350d1809da0ad)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VI_DEADLOCK_GLOBALS.ChildrenCountWatermark", children_count_watermark, 0x40b40, 0x20, true, 0xd73c82c0b0ca5c20)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kernel_stack_limits_t), "_VI_DEADLOCK_GLOBALS.StackType", stack_type, 0x40b60, 0x20, true, 0x23c9a536e88004fb)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VI_DEADLOCK_GLOBALS.StackLowLimit", stack_low_limit, 0x40b80, 0x40, true, 0x9e6a1e6c44fa7e4d)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VI_DEADLOCK_GLOBALS.StackHighLimit", stack_high_limit, 0x40bc0, 0x40, true, 0x2151b1926fb0a6e5)
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
#endif