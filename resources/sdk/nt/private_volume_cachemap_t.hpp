#pragma once
#include <sdkgen/support_library.hpp>
#include "kevent_t.hpp"
#include "lazy_writer_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "../cc/lws_packet_t.hpp"
#include "dirty_page_statistics_t.hpp"
#include "dirty_page_thresholds_t.hpp"
#include "shared_cache_map_list_cursor_t.hpp"

namespace cc { struct numa_node_t; }
namespace cc { struct partition_t; }

#include "magic/private_volume_cachemap_t.start.hpp"
namespace nt
{
    struct device_object_t;
    struct volume_cache_map_t;
    struct write_behind_throughput_t;

    // [struct _PRIVATE_VOLUME_CACHEMAP]
    // => Windows 11
    //
    struct private_volume_cachemap_t                                                                
    {                                                                                               
        // Windows 11                                                                               
        //                                                                                          
        _m000 int16_t                                   node_type_code;                               //{ +0x0000    } | .NodeTypeCode
        _m001 int16_t                                   node_byte_size;                               //{ +0x0002    } | .NodeByteSize
        _m002 uint32_t                                  use_count;                                    //{ +0x0004    } | .UseCount
        _m003 int64_t                                   ref_count;                                    //{ +0x0008    } | .RefCount
        _m004 struct nt::device_object_t*               device_object;                                //{ +0x0010    } | .DeviceObject
        _m005 uint32_t                                  volume_id;                                    //{ +0x0018    } | .VolumeId
        _m006 struct cc::partition_t*                   partition;                                    //{ +0x0020    } | .Partition
        _m007 struct nt::volume_cache_map_t*            volume_cache_map;                             //{ +0x0028    } | .VolumeCacheMap
        _m008 nt::list_entry_t                          numa_node_list;                               //{ +0x0030    } | .NumaNodeList
        _m009 sdk::array<struct cc::numa_node_t*, 64>   numa_node_block;                              //{ +0x0040    } | .NumaNodeBlock
        _m010 nt::list_entry_t                          partition_volume_links;                       //{ +0x0240    } | .PartitionVolumeLinks
        _m011 nt::list_entry_t                          volume_cache_map_links;                       //{ +0x0250    } | .VolumeCacheMapLinks
        _m012 nt::list_entry_t                          clean_shared_cache_map_list;                  //{ +0x0260    } | .CleanSharedCacheMapList
        _m013 nt::list_entry_t                          clean_shared_cache_map_with_log_handle_list;  //{ +0x0270    } | .CleanSharedCacheMapWithLogHandleList
        _m014 struct nt::shared_cache_map_list_cursor_t dirty_shared_cache_map_list;                  //{ +0x0280    } | .DirtySharedCacheMapList
        _m015 struct nt::shared_cache_map_list_cursor_t lazy_write_cursor;                            //{ +0x0298    } | .LazyWriteCursor
        _m016 nt::list_entry_t                          dirty_shared_cache_map_with_log_handle_list;  //{ +0x02b0    } | .DirtySharedCacheMapWithLogHandleList
        _m017 uint32_t                                  consecutive_workless_lazy_scan_count;         //{ +0x02c0    } | .ConsecutiveWorklessLazyScanCount
        _m018 uint8_t                                   forced_disable_lazywrite_scan;                //{ +0x02c4    } | .ForcedDisableLazywriteScan
        _m019 uint64_t                                  work_queue_lock;                              //{ +0x0300    } | .WorkQueueLock
        _m020 uint32_t                                  number_worker_threads;                        //{ +0x0308    } | .NumberWorkerThreads
        _m021 nt::list_entry_t                          post_tick_work_queue;                         //{ +0x0310    } | .PostTickWorkQueue
        _m022 uint32_t                                  max_extra_write_behind_threads;               //{ +0x0320    } | .MaxExtraWriteBehindThreads
        _m023 uint32_t                                  max_cache_map_uninit_threads;                 //{ +0x0324    } | .MaxCacheMapUninitThreads
        _m024 uint8_t                                   queue_throttle;                               //{ +0x0328    } | .QueueThrottle
        _m025 uint32_t                                  post_tick_work_item_count;                    //{ +0x032c    } | .PostTickWorkItemCount
        _m026 struct nt::kevent_t                       low_memory_event;                             //{ +0x0330    } | .LowMemoryEvent
        _m027 struct nt::kevent_t                       power_event;                                  //{ +0x0348    } | .PowerEvent
        _m028 struct nt::kevent_t                       waiting_for_teardown_event;                   //{ +0x0360    } | .WaitingForTeardownEvent
        _m029 struct nt::kevent_t                       coalescing_flush_event;                       //{ +0x0378    } | .CoalescingFlushEvent
        _m030 uint32_t                                  pages_yet_to_write;                           //{ +0x0390    } | .PagesYetToWrite
        _m031 struct nt::lazy_writer_t                  lazy_writer;                                  //{ +0x0398    } | .LazyWriter
        _m032 struct nt::dirty_page_statistics_t        dirty_page_statistics;                        //{ +0x03e0    } | .DirtyPageStatistics
        _m033 struct nt::dirty_page_thresholds_t        dirty_page_thresholds;                        //{ +0x03f8    } | .DirtyPageThresholds
        _m034 struct nt::write_behind_throughput_t*     throughput_stats;                             //{ +0x0430    } | .ThroughputStats
        _m035 uint64_t                                  average_available_pages;                      //{ +0x0438    } | .AverageAvailablePages
        _m036 uint64_t                                  average_dirty_pages;                          //{ +0x0440    } | .AverageDirtyPages
        _m037 uint64_t                                  pages_skipped_due_to_hot_spot;                //{ +0x0448    } | .PagesSkippedDueToHotSpot
        _m038 nt::list_entry_t                          deferred_writes;                              //{ +0x0450    } | .DeferredWrites
        _m039 uint64_t                                  deferred_write_spin_lock;                     //{ +0x0480    } | .DeferredWriteSpinLock
        _m040 struct ex::push_lock_t                    async_read_work_queue_lock;                   //{ +0x0488    } | .AsyncReadWorkQueueLock
        _m041 uint32_t                                  max_number_of_write_behind_threads;           //{ +0x0490    } | .MaxNumberOfWriteBehindThreads
        _m042 uint8_t                                   coalescing_state;                             //{ +0x0494    } | .CoalescingState
        _m043 uint8_t                                   init_complete;                                //{ +0x0495    } | .InitComplete
        _m044 struct nt::kevent_t                       exit_event;                                   //{ +0x0498    } | .ExitEvent
        _m045 struct nt::kevent_t                       final_dereference_event;                      //{ +0x04b0    } | .FinalDereferenceEvent
        _m046 void*                                     lazy_write_scan_thread_handle;                //{ +0x04c8    } | .LazyWriteScanThreadHandle
        _m047 struct cc::lws_packet_t                   lws_packet;                                   //{ +0x04d0    } | .LWSPacket
        _m048 nt::list_entry_t                          external_cache_list;                          //{ +0x04e0    } | .ExternalCacheList
        _m049 uint32_t                                  throughput_idx;                               //{ +0x04f0    } | .ThroughputIdx
        _m050 uint64_t                                  avg_pages_per_second;                         //{ +0x04f8    } | .AvgPagesPerSecond
        _m051 sdk::array<uint64_t, 32>                  throughput_history;                           //{ +0x0500    } | .ThroughputHistory
        _m052 uint32_t                                  dirty_threshold_in_seconds;                   //{ +0x0600    } | .DirtyThresholdInSeconds
        _m053 uint32_t                                  dirty_page_target_in_seconds;                 //{ +0x0604    } | .DirtyPageTargetInSeconds
        _m054 nt::list_entry_t                          quick_lws_thread_list;                        //{ +0x0608    } | .QuickLWSThreadList
        _m055 struct nt::kevent_t                       quick_lazy_scan_event;                        //{ +0x0618    } | .QuickLazyScanEvent
        _m056 int64_t                                   prev_lazy_write_scan_time;                    //{ +0x0630    } | .PrevLazyWriteScanTime
        _m057 uint32_t                                  async_lazywrite_queue_depth;                  //{ +0x0638    } | .AsyncLazywriteQueueDepth
        _m058 uint32_t                                  max_async_lazywrite_completion_workers;       //{ +0x063c    } | .MaxAsyncLazywriteCompletionWorkers
        _m059 uint32_t                                  flags;                                        //{ +0x0640    } | .Flags
                                                                                                    
        SDK_MAGIC_PROPERTIES( "_PRIVATE_VOLUME_CACHEMAP.$", 0x0, false, 0xa2024a568a287ff );                                            
        SDK_FIXED_SIZE( private_volume_cachemap_t, 0x680 );                                            
    };                                                                                              
};
#include "magic/private_volume_cachemap_t.end.hpp"
SDK_VERIFY( struct nt::private_volume_cachemap_t, 0x680 );
