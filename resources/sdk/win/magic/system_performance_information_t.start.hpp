#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PERFORMANCE_INFORMATION.IdleProcessTime", idle_process_time, 0x0, 0x40, true, 0x64f6ebfc822b902e)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PERFORMANCE_INFORMATION.IoReadTransferCount", io_read_transfer_count, 0x40, 0x40, true, 0x52fb3fa592541e76)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PERFORMANCE_INFORMATION.IoWriteTransferCount", io_write_transfer_count, 0x80, 0x40, true, 0x623ac75bfb9c067f)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PERFORMANCE_INFORMATION.IoOtherTransferCount", io_other_transfer_count, 0xc0, 0x40, true, 0xfa6cbe024f1e4fc9)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.IoReadOperationCount", io_read_operation_count, 0x100, 0x20, true, 0x655e50ff294f1037)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.IoWriteOperationCount", io_write_operation_count, 0x120, 0x20, true, 0x3982db13bf19ed75)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.IoOtherOperationCount", io_other_operation_count, 0x140, 0x20, true, 0x110ae0dae258a987)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.AvailablePages", available_pages, 0x160, 0x20, true, 0x1ed85dc1c1ea3b31)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CommittedPages", committed_pages, 0x180, 0x20, true, 0xca7c834780d4f82f)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CommitLimit", commit_limit, 0x1a0, 0x20, true, 0x27277d9f7e3d4a11)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.PeakCommitment", peak_commitment, 0x1c0, 0x20, true, 0x3b8cb875208f309e)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.PageFaultCount", page_fault_count, 0x1e0, 0x20, true, 0xd2b797cbdd38bc5c)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CopyOnWriteCount", copy_on_write_count, 0x200, 0x20, true, 0xdf6ce991a0122ee3)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.TransitionCount", transition_count, 0x220, 0x20, true, 0xb2aa7cb37bb18274)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CacheTransitionCount", cache_transition_count, 0x240, 0x20, true, 0xd5ba1c1c2d06f489)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.DemandZeroCount", demand_zero_count, 0x260, 0x20, true, 0xb87c89ed876cdb83)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.PageReadCount", page_read_count, 0x280, 0x20, true, 0xdcfd77d38ee8f030)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.PageReadIoCount", page_read_io_count, 0x2a0, 0x20, true, 0x8365073d395c8aa7)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CacheReadCount", cache_read_count, 0x2c0, 0x20, true, 0x85d150959084b81b)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CacheIoCount", cache_io_count, 0x2e0, 0x20, true, 0xbfeb10d0685f90e6)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.DirtyPagesWriteCount", dirty_pages_write_count, 0x300, 0x20, true, 0x5599c729817cb8ad)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.DirtyWriteIoCount", dirty_write_io_count, 0x320, 0x20, true, 0x1ea071ca5c8398c)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.MappedPagesWriteCount", mapped_pages_write_count, 0x340, 0x20, true, 0xd891920eced6cf33)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.MappedWriteIoCount", mapped_write_io_count, 0x360, 0x20, true, 0xb3389a34000fa7e8)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.PagedPoolPages", paged_pool_pages, 0x380, 0x20, true, 0xca17e831f30e08a0)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.NonPagedPoolPages", non_paged_pool_pages, 0x3a0, 0x20, true, 0xc4c7d993e74fb034)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.PagedPoolAllocs", paged_pool_allocs, 0x3c0, 0x20, true, 0xfbc731e832df9662)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.PagedPoolFrees", paged_pool_frees, 0x3e0, 0x20, true, 0x4fe1f93856a7bb4b)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.NonPagedPoolAllocs", non_paged_pool_allocs, 0x400, 0x20, true, 0xbd35a6c8dcfe28dd)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.NonPagedPoolFrees", non_paged_pool_frees, 0x420, 0x20, true, 0xdffdb1e554dded70)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.FreeSystemPtes", free_system_ptes, 0x440, 0x20, true, 0xc6c03322854160dc)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.ResidentSystemCodePage", resident_system_code_page, 0x460, 0x20, true, 0x924b09c25de2c397)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.TotalSystemDriverPages", total_system_driver_pages, 0x480, 0x20, true, 0xa3b0834569cfca2)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.TotalSystemCodePages", total_system_code_pages, 0x4a0, 0x20, true, 0x61d75e635f52fed9)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.NonPagedPoolLookasideHits", non_paged_pool_lookaside_hits, 0x4c0, 0x20, true, 0x86ef3af5c0128dc3)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.PagedPoolLookasideHits", paged_pool_lookaside_hits, 0x4e0, 0x20, true, 0xae5e6d0364fa743)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.AvailablePagedPoolPages", available_paged_pool_pages, 0x500, 0x20, true, 0x36ca9fffcdf52e64)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.ResidentSystemCachePage", resident_system_cache_page, 0x520, 0x20, true, 0xb6f1d63f4e398f4)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.ResidentPagedPoolPage", resident_paged_pool_page, 0x540, 0x20, true, 0x9083d1e914e968)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.ResidentSystemDriverPage", resident_system_driver_page, 0x560, 0x20, true, 0x8abe3e5094a01489)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcFastReadNoWait", cc_fast_read_no_wait, 0x580, 0x20, true, 0xf9dfe877c7ad571)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcFastReadWait", cc_fast_read_wait, 0x5a0, 0x20, true, 0x1fc9313028bcda0f)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcFastReadResourceMiss", cc_fast_read_resource_miss, 0x5c0, 0x20, true, 0xa6c3d7cd676285ad)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcFastReadNotPossible", cc_fast_read_not_possible, 0x5e0, 0x20, true, 0x8d07786f69a36151)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcFastMdlReadNoWait", cc_fast_mdl_read_no_wait, 0x600, 0x20, true, 0x377dc13a75830002)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcFastMdlReadWait", cc_fast_mdl_read_wait, 0x620, 0x20, true, 0x1b32617c8502fc19)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcFastMdlReadResourceMiss", cc_fast_mdl_read_resource_miss, 0x640, 0x20, true, 0x72200867bca0f56c)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcFastMdlReadNotPossible", cc_fast_mdl_read_not_possible, 0x660, 0x20, true, 0xd6ba3368b3a32c9a)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcMapDataNoWait", cc_map_data_no_wait, 0x680, 0x20, true, 0x7c93c14d46ddecfd)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcMapDataWait", cc_map_data_wait, 0x6a0, 0x20, true, 0xd923747642d54581)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcMapDataNoWaitMiss", cc_map_data_no_wait_miss, 0x6c0, 0x20, true, 0xf83b7cb6c36664bb)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcMapDataWaitMiss", cc_map_data_wait_miss, 0x6e0, 0x20, true, 0xd23986240d3eec0e)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcPinMappedDataCount", cc_pin_mapped_data_count, 0x700, 0x20, true, 0x16055b324d2b65a5)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcPinReadNoWait", cc_pin_read_no_wait, 0x720, 0x20, true, 0xb5f525fc3ea4b097)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcPinReadWait", cc_pin_read_wait, 0x740, 0x20, true, 0xd84d3cf897f51197)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcPinReadNoWaitMiss", cc_pin_read_no_wait_miss, 0x760, 0x20, true, 0x3d06ea1f5f3951f2)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcPinReadWaitMiss", cc_pin_read_wait_miss, 0x780, 0x20, true, 0x9242c43055731b41)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcCopyReadNoWait", cc_copy_read_no_wait, 0x7a0, 0x20, true, 0x9dd775a7c29ae064)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcCopyReadWait", cc_copy_read_wait, 0x7c0, 0x20, true, 0x1465720980907ea6)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcCopyReadNoWaitMiss", cc_copy_read_no_wait_miss, 0x7e0, 0x20, true, 0x6588a2a9fef7c8c2)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcCopyReadWaitMiss", cc_copy_read_wait_miss, 0x800, 0x20, true, 0xd6c46d91382da79f)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcMdlReadNoWait", cc_mdl_read_no_wait, 0x820, 0x20, true, 0x9b708f2fbdffb68c)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcMdlReadWait", cc_mdl_read_wait, 0x840, 0x20, true, 0x5f8dd441171d06c6)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcMdlReadNoWaitMiss", cc_mdl_read_no_wait_miss, 0x860, 0x20, true, 0xf3d668cf7e0ba622)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcMdlReadWaitMiss", cc_mdl_read_wait_miss, 0x880, 0x20, true, 0xf5456d034143a214)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcReadAheadIos", cc_read_ahead_ios, 0x8a0, 0x20, true, 0xa73db35a898e34e6)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcLazyWriteIos", cc_lazy_write_ios, 0x8c0, 0x20, true, 0x75854318e76e90b1)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcLazyWritePages", cc_lazy_write_pages, 0x8e0, 0x20, true, 0x523b3b45cdc7d5ff)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcDataFlushes", cc_data_flushes, 0x900, 0x20, true, 0x584deab2841f6e5b)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcDataPages", cc_data_pages, 0x920, 0x20, true, 0x9affe7e721ca4645)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.ContextSwitches", context_switches, 0x940, 0x20, true, 0x9a22e8727eadc30e)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.FirstLevelTbFills", first_level_tb_fills, 0x960, 0x20, true, 0xb7b4b8dc5b1a1478)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.SecondLevelTbFills", second_level_tb_fills, 0x980, 0x20, true, 0xa394c9e862c68ed5)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_PERFORMANCE_INFORMATION.SystemCalls", system_calls, 0x9a0, 0x20, true, 0xbc1d3c9414c62464)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcTotalDirtyPages", cc_total_dirty_pages, 0x9c0, 0x40, true, 0xd76ca3c79db59741)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PERFORMANCE_INFORMATION.CcDirtyPageThreshold", cc_dirty_page_threshold, 0xa00, 0x40, true, 0xd0aef6c7d713e6bd)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_PERFORMANCE_INFORMATION.ResidentAvailablePages", resident_available_pages, 0xa40, 0x40, true, 0xfbdbe166078e20db)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_PERFORMANCE_INFORMATION.SharedCommittedPages", shared_committed_pages, 0xa80, 0x40, true, 0xc224ecbf39d3c1c7)
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
#define _m047
#define _m048
#define _m049
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m060
#define _m061
#define _m062
#define _m063
#define _m064
#define _m065
#define _m066
#define _m067
#define _m068
#define _m069
#define _m070
#define _m071
#define _m072
#define _m073
#define _m074
#define _m075
#define _m076
#define _m077
#endif