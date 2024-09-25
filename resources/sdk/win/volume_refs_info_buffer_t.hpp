#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/volume_refs_info_buffer_t.start.hpp"
namespace win
{
    // [struct _VOLUME_REFS_INFO_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct volume_refs_info_buffer_t                                     
    {                                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                  
        //                                                               
        _m000 int64_t  cache_size_in_bytes;                                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CacheSizeInBytes
        _m001 int64_t  allocated_cache_in_bytes;                           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocatedCacheInBytes
        _m002 int64_t  populated_cache_in_bytes;                           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .PopulatedCacheInBytes
        _m003 int64_t  in_error_cache_in_bytes;                            //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .InErrorCacheInBytes
        _m004 int64_t  memory_used_for_cache_metadata;                     //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .MemoryUsedForCacheMetadata
        _m005 uint32_t cache_line_size;                                    //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .CacheLineSize
        _m006 int32_t  cache_transactions_outstanding;                     //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .CacheTransactionsOutstanding
        _m007 int32_t  cache_lines_free;                                   //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .CacheLinesFree
        _m008 int32_t  cache_lines_in_error;                               //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .CacheLinesInError
        _m009 int64_t  cache_hits_in_bytes;                                //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .CacheHitsInBytes
        _m010 int64_t  cache_misses_in_bytes;                              //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .CacheMissesInBytes
        _m011 int64_t  cache_population_updates_in_bytes;                  //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .CachePopulationUpdatesInBytes
        _m012 int64_t  cache_write_through_updates_in_bytes;               //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .CacheWriteThroughUpdatesInBytes
        _m013 int64_t  cache_invalidations_in_bytes;                       //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .CacheInvalidationsInBytes
        _m014 int64_t  cache_over_reads_in_bytes;                          //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .CacheOverReadsInBytes
        _m015 int64_t  metadata_written_bytes;                             //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .MetadataWrittenBytes
        _m016 int32_t  cache_hit_counter;                                  //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .CacheHitCounter
        _m017 int32_t  cache_miss_counter;                                 //{ +0x0074    +0x0074    +0x0074    +0x0074    +0x0074    } | .CacheMissCounter
        _m018 int32_t  cache_line_allocation_counter;                      //{ +0x0078    +0x0078    +0x0078    +0x0078    +0x0078    } | .CacheLineAllocationCounter
        _m019 int32_t  cache_invalidations_counter;                        //{ +0x007c    +0x007c    +0x007c    +0x007c    +0x007c    } | .CacheInvalidationsCounter
        _m020 int32_t  cache_population_updates_counter;                   //{ +0x0080    +0x0080    +0x0080    +0x0080    +0x0080    } | .CachePopulationUpdatesCounter
        _m021 int32_t  cache_write_through_updates_counter;                //{ +0x0084    +0x0084    +0x0084    +0x0084    +0x0084    } | .CacheWriteThroughUpdatesCounter
        _m022 int32_t  max_cache_transactions_outstanding;                 //{ +0x0088    +0x0088    +0x0088    +0x0088    +0x0088    } | .MaxCacheTransactionsOutstanding
        _m023 int32_t  data_writes_reallocation_count;                     //{ +0x008c    +0x008c    +0x008c    +0x008c    +0x008c    } | .DataWritesReallocationCount
        _m024 int32_t  data_in_place_write_count;                          //{ +0x0090    +0x0090    +0x0090    +0x0090    +0x0090    } | .DataInPlaceWriteCount
        _m025 int32_t  metadata_allocations_fast_tier_count;               //{ +0x0094    +0x0094    +0x0094    +0x0094    +0x0094    } | .MetadataAllocationsFastTierCount
        _m026 int32_t  metadata_allocations_slow_tier_count;               //{ +0x0098    +0x0098    +0x0098    +0x0098    +0x0098    } | .MetadataAllocationsSlowTierCount
        _m027 int32_t  data_allocations_fast_tier_count;                   //{ +0x009c    +0x009c    +0x009c    +0x009c    +0x009c    } | .DataAllocationsFastTierCount
        _m028 int32_t  data_allocations_slow_tier_count;                   //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .DataAllocationsSlowTierCount
        _m029 int32_t  destages_slow_tier_to_fast_tier;                    //{ +0x00a4    +0x00a4    +0x00a4    +0x00a4    +0x00a4    } | .DestagesSlowTierToFastTier
        _m030 int32_t  destages_fast_tier_to_slow_tier;                    //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .DestagesFastTierToSlowTier
        _m031 int32_t  slow_tier_data_fill_ratio;                          //{ +0x00ac    +0x00ac    +0x00ac    +0x00ac    +0x00ac    } | .SlowTierDataFillRatio
        _m032 int32_t  fast_tier_data_fill_ratio;                          //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .FastTierDataFillRatio
        _m033 int32_t  slow_tier_metadata_fill_ratio;                      //{ +0x00b4    +0x00b4    +0x00b4    +0x00b4    +0x00b4    } | .SlowTierMetadataFillRatio
        _m034 int32_t  fast_tier_metadata_fill_ratio;                      //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .FastTierMetadataFillRatio
        _m035 int32_t  slow_to_fast_destage_read_latency;                  //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .SlowToFastDestageReadLatency
        _m036 int32_t  slow_to_fast_destage_read_latency_base;             //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .SlowToFastDestageReadLatencyBase
        _m037 int32_t  slow_to_fast_destage_write_latency;                 //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .SlowToFastDestageWriteLatency
        _m038 int32_t  slow_to_fast_destage_write_latency_base;            //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .SlowToFastDestageWriteLatencyBase
        _m039 int32_t  fast_to_slow_destage_read_latency;                  //{ +0x00cc    +0x00cc    +0x00cc    +0x00cc    +0x00cc    } | .FastToSlowDestageReadLatency
        _m040 int32_t  fast_to_slow_destage_read_latency_base;             //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .FastToSlowDestageReadLatencyBase
        _m041 int32_t  fast_to_slow_destage_write_latency;                 //{ +0x00d4    +0x00d4    +0x00d4    +0x00d4    +0x00d4    } | .FastToSlowDestageWriteLatency
        _m042 int32_t  fast_to_slow_destage_write_latency_base;            //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .FastToSlowDestageWriteLatencyBase
        _m043 int32_t  slow_tier_container_fill_ratio;                     //{ +0x00dc    +0x00dc    +0x00dc    +0x00dc    +0x00dc    } | .SlowTierContainerFillRatio
        _m044 int32_t  slow_tier_container_fill_ratio_base;                //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .SlowTierContainerFillRatioBase
        _m045 int32_t  fast_tier_container_fill_ratio;                     //{ +0x00e4    +0x00e4    +0x00e4    +0x00e4    +0x00e4    } | .FastTierContainerFillRatio
        _m046 int32_t  fast_tier_container_fill_ratio_base;                //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .FastTierContainerFillRatioBase
        _m047 int32_t  tree_update_latency;                                //{ +0x00ec    +0x00f4    +0x00ec    +0x00ec    +0x00ec    } | .TreeUpdateLatency
        _m048 int32_t  tree_update_latency_base;                           //{ +0x00f0    +0x00f8    +0x00f0    +0x00f0    +0x00f0    } | .TreeUpdateLatencyBase
        _m049 int32_t  checkpoint_latency;                                 //{ +0x00f4    +0x00fc    +0x00f4    +0x00f4    +0x00f4    } | .CheckpointLatency
        _m050 int32_t  checkpoint_latency_base;                            //{ +0x00f8    +0x0100    +0x00f8    +0x00f8    +0x00f8    } | .CheckpointLatencyBase
        _m051 int32_t  tree_update_count;                                  //{ +0x00fc    +0x0104    +0x00fc    +0x00fc    +0x00fc    } | .TreeUpdateCount
        _m052 int32_t  checkpoint_count;                                   //{ +0x0100    +0x0108    +0x0100    +0x0100    +0x0100    } | .CheckpointCount
        _m053 int32_t  log_write_count;                                    //{ +0x0104    +0x010c    +0x0104    +0x0104    +0x0104    } | .LogWriteCount
        _m054 int32_t  log_fill_ratio;                                     //{ +0x0108    +0x0110    +0x0108    +0x0108    +0x0108    } | .LogFillRatio
        _m055 int32_t  read_cache_invalidations_for_overwrite;             //{ +0x010c    +0x0114    +0x010c    +0x010c    +0x010c    } | .ReadCacheInvalidationsForOverwrite
        _m056 int32_t  read_cache_invalidations_for_reuse;                 //{ +0x0110    +0x0118    +0x0110    +0x0110    +0x0110    } | .ReadCacheInvalidationsForReuse
        _m057 int32_t  read_cache_invalidations_general;                   //{ +0x0114    +0x011c    +0x0114    +0x0114    +0x0114    } | .ReadCacheInvalidationsGeneral
        _m058 int32_t  read_cache_checks_on_mount;                         //{ +0x0118    +0x0120    +0x0118    +0x0118    +0x0118    } | .ReadCacheChecksOnMount
        _m059 int32_t  read_cache_issues_on_mount;                         //{ +0x011c    +0x0124    +0x011c    +0x011c    +0x011c    } | .ReadCacheIssuesOnMount
        _m060 int32_t  trim_latency;                                       //{ +0x0120    +0x0128    +0x0120    +0x0120    +0x0120    } | .TrimLatency
        _m061 int32_t  trim_latency_base;                                  //{ +0x0124    +0x012c    +0x0124    +0x0124    +0x0124    } | .TrimLatencyBase
                                                                         
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                  
        //                                                               
        _m062 int32_t  data_compaction_count;                              //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .DataCompactionCount
        _m063 int32_t  compaction_read_latency;                            //{ +0x012c    +0x012c    +0x012c    +0x012c    } | .CompactionReadLatency
        _m064 int32_t  compaction_read_latency_base;                       //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .CompactionReadLatencyBase
        _m065 int32_t  compaction_write_latency;                           //{ +0x0134    +0x0134    +0x0134    +0x0134    } | .CompactionWriteLatency
        _m066 int32_t  compaction_write_latency_base;                      //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .CompactionWriteLatencyBase
        _m067 int64_t  data_in_place_write_cluster_count;                  //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .DataInPlaceWriteClusterCount
        _m068 int32_t  compaction_failed_due_to_ineligible_container;      //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .CompactionFailedDueToIneligibleContainer
        _m069 int32_t  compaction_failed_due_to_max_fragmentation;         //{ +0x014c    +0x014c    +0x014c    +0x014c    } | .CompactionFailedDueToMaxFragmentation
        _m070 int32_t  compacted_container_fill_ratio;                     //{ +0x0150    +0x0150    +0x0150    +0x0150    } | .CompactedContainerFillRatio
        _m071 int32_t  compacted_container_fill_ratio_base;                //{ +0x0154    +0x0154    +0x0154    +0x0154    } | .CompactedContainerFillRatioBase
        _m072 int32_t  container_move_retry_count;                         //{ +0x0158    +0x0158    +0x0158    +0x0158    } | .ContainerMoveRetryCount
        _m073 int32_t  container_move_failed_due_to_ineligible_container;  //{ +0x015c    +0x015c    +0x015c    +0x015c    } | .ContainerMoveFailedDueToIneligibleContainer
        _m074 int32_t  compaction_failure_count;                           //{ +0x0160    +0x0160    +0x0160    +0x0160    } | .CompactionFailureCount
        _m075 int32_t  container_move_failure_count;                       //{ +0x0164    +0x0164    +0x0164    +0x0164    } | .ContainerMoveFailureCount
        _m076 int64_t  number_of_dirty_metadata_pages;                     //{ +0x0168    +0x0168    +0x0168    +0x0168    } | .NumberOfDirtyMetadataPages
        _m077 int32_t  number_of_dirty_table_list_entries;                 //{ +0x0170    +0x0170    +0x0170    +0x0170    } | .NumberOfDirtyTableListEntries
        _m078 int32_t  number_of_delete_queue_entries;                     //{ +0x0174    +0x0174    +0x0174    +0x0174    } | .NumberOfDeleteQueueEntries
                                                                         
        // Windows 10 v1607                                                  
        //                                                               
        _m079 int32_t  slow_to_fast_tier_reallocation;                     //{ +0x00ec    } | .SlowToFastTierReallocation
        _m080 int32_t  fast_to_slow_tier_reallocation;                     //{ +0x00f0    } | .FastToSlowTierReallocation
                                                                         
        SDK_MAGIC_PROPERTIES( "_VOLUME_REFS_INFO_BUFFER.$", 0x178, true, 0xcded47ef7d91ecc8 );                                                  
        SDK_DYNAMIC_SIZE( volume_refs_info_buffer_t );                                                  
    };                                                                   
};
#include "magic/volume_refs_info_buffer_t.end.hpp"
