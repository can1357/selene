#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_VOLUME_REFS_INFO_BUFFER.CacheSizeInBytes", cache_size_in_bytes, 0x0, 0x40, true, 0x553fc77e15638ef4)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_VOLUME_REFS_INFO_BUFFER.AllocatedCacheInBytes", allocated_cache_in_bytes, 0x40, 0x40, true, 0x3b2ba60e179be03c)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_VOLUME_REFS_INFO_BUFFER.PopulatedCacheInBytes", populated_cache_in_bytes, 0x80, 0x40, true, 0xc487cbfa0e3dc3c1)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_VOLUME_REFS_INFO_BUFFER.InErrorCacheInBytes", in_error_cache_in_bytes, 0xc0, 0x40, true, 0xad5587dfcbab1c2c)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_VOLUME_REFS_INFO_BUFFER.MemoryUsedForCacheMetadata", memory_used_for_cache_metadata, 0x100, 0x40, true, 0x89675951ca40f973)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VOLUME_REFS_INFO_BUFFER.CacheLineSize", cache_line_size, 0x140, 0x20, true, 0xb40bff0da8dc0bde)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.CacheTransactionsOutstanding", cache_transactions_outstanding, 0x160, 0x20, true, 0xb1227c680f48528a)
#define _m007 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.CacheLinesFree", cache_lines_free, 0x180, 0x20, true, 0x2827b113acc837de)
#define _m008 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.CacheLinesInError", cache_lines_in_error, 0x1a0, 0x20, true, 0xf83482549b6c1108)
#define _m009 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_VOLUME_REFS_INFO_BUFFER.CacheHitsInBytes", cache_hits_in_bytes, 0x1c0, 0x40, true, 0x565d71d3011815e5)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_VOLUME_REFS_INFO_BUFFER.CacheMissesInBytes", cache_misses_in_bytes, 0x200, 0x40, true, 0x759ce1962ca5bcf4)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_VOLUME_REFS_INFO_BUFFER.CachePopulationUpdatesInBytes", cache_population_updates_in_bytes, 0x240, 0x40, true, 0xcebc512de78a09be)
#define _m012 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_VOLUME_REFS_INFO_BUFFER.CacheWriteThroughUpdatesInBytes", cache_write_through_updates_in_bytes, 0x280, 0x40, true, 0xdc31179551553bd1)
#define _m013 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_VOLUME_REFS_INFO_BUFFER.CacheInvalidationsInBytes", cache_invalidations_in_bytes, 0x2c0, 0x40, true, 0x6f28a78737457fab)
#define _m014 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_VOLUME_REFS_INFO_BUFFER.CacheOverReadsInBytes", cache_over_reads_in_bytes, 0x300, 0x40, true, 0xe3264826a62962c6)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_VOLUME_REFS_INFO_BUFFER.MetadataWrittenBytes", metadata_written_bytes, 0x340, 0x40, true, 0x12608fc1827eb3a4)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.CacheHitCounter", cache_hit_counter, 0x380, 0x20, true, 0xce871eab427ed86e)
#define _m017 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.CacheMissCounter", cache_miss_counter, 0x3a0, 0x20, true, 0x23668993423e54aa)
#define _m018 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.CacheLineAllocationCounter", cache_line_allocation_counter, 0x3c0, 0x20, true, 0xa9873cf89ee595c3)
#define _m019 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.CacheInvalidationsCounter", cache_invalidations_counter, 0x3e0, 0x20, true, 0x41c047bb6b2cc3b4)
#define _m020 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.CachePopulationUpdatesCounter", cache_population_updates_counter, 0x400, 0x20, true, 0x908f0df064fc53e0)
#define _m021 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.CacheWriteThroughUpdatesCounter", cache_write_through_updates_counter, 0x420, 0x20, true, 0x5b411b990140427c)
#define _m022 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.MaxCacheTransactionsOutstanding", max_cache_transactions_outstanding, 0x440, 0x20, true, 0x14f1d7877febb7db)
#define _m023 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.DataWritesReallocationCount", data_writes_reallocation_count, 0x460, 0x20, true, 0x2ce82dbf8720a0a5)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.DataInPlaceWriteCount", data_in_place_write_count, 0x480, 0x20, true, 0x8eb7e9aaeabe4f7e)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.MetadataAllocationsFastTierCount", metadata_allocations_fast_tier_count, 0x4a0, 0x20, true, 0x5da4c44bd214314c)
#define _m026 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.MetadataAllocationsSlowTierCount", metadata_allocations_slow_tier_count, 0x4c0, 0x20, true, 0xcf8b0e0e1d63632f)
#define _m027 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.DataAllocationsFastTierCount", data_allocations_fast_tier_count, 0x4e0, 0x20, true, 0x2aeff9e1ee416563)
#define _m028 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.DataAllocationsSlowTierCount", data_allocations_slow_tier_count, 0x500, 0x20, true, 0xac13243b10cd9053)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.DestagesSlowTierToFastTier", destages_slow_tier_to_fast_tier, 0x520, 0x20, true, 0x9d140ddab2749fed)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.DestagesFastTierToSlowTier", destages_fast_tier_to_slow_tier, 0x540, 0x20, true, 0xf868e0e0e3e2a202)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.SlowTierDataFillRatio", slow_tier_data_fill_ratio, 0x560, 0x20, true, 0x8e835161c39ad165)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.FastTierDataFillRatio", fast_tier_data_fill_ratio, 0x580, 0x20, true, 0x1a0e180e888bb7e6)
#define _m033 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.SlowTierMetadataFillRatio", slow_tier_metadata_fill_ratio, 0x5a0, 0x20, true, 0xa580696b075553da)
#define _m034 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.FastTierMetadataFillRatio", fast_tier_metadata_fill_ratio, 0x5c0, 0x20, true, 0x7104a4cd85284fb0)
#define _m035 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.SlowToFastDestageReadLatency", slow_to_fast_destage_read_latency, 0x5e0, 0x20, true, 0x54ac8b15cdbfdb5b)
#define _m036 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.SlowToFastDestageReadLatencyBase", slow_to_fast_destage_read_latency_base, 0x600, 0x20, true, 0xaf8d44eeaf9f1605)
#define _m037 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.SlowToFastDestageWriteLatency", slow_to_fast_destage_write_latency, 0x620, 0x20, true, 0xe2e1dfbfebcc7b53)
#define _m038 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.SlowToFastDestageWriteLatencyBase", slow_to_fast_destage_write_latency_base, 0x640, 0x20, true, 0xeab807c55ab53e0e)
#define _m039 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.FastToSlowDestageReadLatency", fast_to_slow_destage_read_latency, 0x660, 0x20, true, 0xcf098c885074a9f0)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.FastToSlowDestageReadLatencyBase", fast_to_slow_destage_read_latency_base, 0x680, 0x20, true, 0x1bdbec1c8adbae15)
#define _m041 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.FastToSlowDestageWriteLatency", fast_to_slow_destage_write_latency, 0x6a0, 0x20, true, 0x6960ae4ff0f67476)
#define _m042 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.FastToSlowDestageWriteLatencyBase", fast_to_slow_destage_write_latency_base, 0x6c0, 0x20, true, 0xd0ebef291eca5419)
#define _m043 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.SlowTierContainerFillRatio", slow_tier_container_fill_ratio, 0x6e0, 0x20, true, 0xba130a2ea04169bd)
#define _m044 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.SlowTierContainerFillRatioBase", slow_tier_container_fill_ratio_base, 0x700, 0x20, true, 0x15e11ebec49213c3)
#define _m045 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.FastTierContainerFillRatio", fast_tier_container_fill_ratio, 0x720, 0x20, true, 0x6601cb1175419beb)
#define _m046 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.FastTierContainerFillRatioBase", fast_tier_container_fill_ratio_base, 0x740, 0x20, true, 0xf800aa94c35da1a9)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.TreeUpdateLatency", tree_update_latency, 0x760, 0x20, true, 0xeee9bba8685df4bc)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.TreeUpdateLatencyBase", tree_update_latency_base, 0x780, 0x20, true, 0x3e72bc4302cc3cd6)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.CheckpointLatency", checkpoint_latency, 0x7a0, 0x20, true, 0xf25d38bf09d6993f)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.CheckpointLatencyBase", checkpoint_latency_base, 0x7c0, 0x20, true, 0x186853d5353195da)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.TreeUpdateCount", tree_update_count, 0x7e0, 0x20, true, 0x4f845b1da346d1ea)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.CheckpointCount", checkpoint_count, 0x800, 0x20, true, 0x9f2c8900ccc4193f)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.LogWriteCount", log_write_count, 0x820, 0x20, true, 0xd3c2e8dd8aca1fb3)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.LogFillRatio", log_fill_ratio, 0x840, 0x20, true, 0xa31017cf53336e38)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.ReadCacheInvalidationsForOverwrite", read_cache_invalidations_for_overwrite, 0x860, 0x20, true, 0x184870fa02a75758)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.ReadCacheInvalidationsForReuse", read_cache_invalidations_for_reuse, 0x880, 0x20, true, 0xa022c95438c51c9f)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.ReadCacheInvalidationsGeneral", read_cache_invalidations_general, 0x8a0, 0x20, true, 0xf528e5f8a33fea84)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.ReadCacheChecksOnMount", read_cache_checks_on_mount, 0x8c0, 0x20, true, 0xd44c52094d0a0ff3)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.ReadCacheIssuesOnMount", read_cache_issues_on_mount, 0x8e0, 0x20, true, 0x1ca29c4732ec2af2)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.TrimLatency", trim_latency, 0x900, 0x20, true, 0xe4bb3d323bdad0d9)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.TrimLatencyBase", trim_latency_base, 0x920, 0x20, true, 0xad1bb00461eadb7b)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.DataCompactionCount", data_compaction_count, 0x940, 0x20, true, 0xa3c8a21770e6f24e)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.CompactionReadLatency", compaction_read_latency, 0x960, 0x20, true, 0xf6d052b30164f1a1)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.CompactionReadLatencyBase", compaction_read_latency_base, 0x980, 0x20, true, 0x2225c2f0e05a7e47)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.CompactionWriteLatency", compaction_write_latency, 0x9a0, 0x20, true, 0x4c6e65e288fd515f)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.CompactionWriteLatencyBase", compaction_write_latency_base, 0x9c0, 0x20, true, 0x27f293cadf745307)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_VOLUME_REFS_INFO_BUFFER.DataInPlaceWriteClusterCount", data_in_place_write_cluster_count, 0xa00, 0x40, true, 0x4d8ad182a5936a)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.CompactionFailedDueToIneligibleContainer", compaction_failed_due_to_ineligible_container, 0xa40, 0x20, true, 0x652dd77316cf0a9b)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.CompactionFailedDueToMaxFragmentation", compaction_failed_due_to_max_fragmentation, 0xa60, 0x20, true, 0xc4eb0770b4014093)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.CompactedContainerFillRatio", compacted_container_fill_ratio, 0xa80, 0x20, true, 0x8a0e31a6729b86da)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.CompactedContainerFillRatioBase", compacted_container_fill_ratio_base, 0xaa0, 0x20, true, 0xb0c1a598acc039c9)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.ContainerMoveRetryCount", container_move_retry_count, 0xac0, 0x20, true, 0x7febb3d108968aef)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.ContainerMoveFailedDueToIneligibleContainer", container_move_failed_due_to_ineligible_container, 0xae0, 0x20, true, 0x19c548283026be17)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.CompactionFailureCount", compaction_failure_count, 0xb00, 0x20, true, 0x691f3f2a4cd158ca)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.ContainerMoveFailureCount", container_move_failure_count, 0xb20, 0x20, true, 0xca90b1683a0c93c8)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_VOLUME_REFS_INFO_BUFFER.NumberOfDirtyMetadataPages", number_of_dirty_metadata_pages, 0xb40, 0x40, true, 0x428dfbc21f9b252)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.NumberOfDirtyTableListEntries", number_of_dirty_table_list_entries, 0xb80, 0x20, true, 0x9ec43e2bc05ec051)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.NumberOfDeleteQueueEntries", number_of_delete_queue_entries, 0xba0, 0x20, true, 0x5de1a340138b1593)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.SlowToFastTierReallocation", slow_to_fast_tier_reallocation, 0x0, 0x0, false, 0x8f1684075d1b8115)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_VOLUME_REFS_INFO_BUFFER.FastToSlowTierReallocation", fast_to_slow_tier_reallocation, 0x0, 0x0, false, 0x2cb9b67a196d21e6)
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
#define _m078
#define _m079
#define _m080
#endif