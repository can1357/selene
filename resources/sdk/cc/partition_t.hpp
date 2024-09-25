#pragma once
#include <sdkgen/support_library.hpp>
#include "lws_packet_t.hpp"
#include "../nt/kevent_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "../nt/lazy_writer_t.hpp"
#include "../io/priority_hint_t.hpp"
#include "../nt/dirty_page_statistics_t.hpp"
#include "../nt/dirty_page_thresholds_t.hpp"
#include "../nt/shared_cache_map_list_cursor_t.hpp"

namespace nt { struct async_read_thread_stats_t; }
namespace nt { struct epartition_t;              }
namespace nt { struct ethread_t;                 }
namespace nt { struct shared_cache_map_t;        }
namespace nt { struct write_behind_throughput_t; }

#include "magic/partition_t.start.hpp"
namespace cc
{
    struct numa_node_t;

    // [struct _CC_PARTITION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct partition_t                                                                               
    {                                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
        //                                                                                           
        _m000 int16_t                                   node_type_code;                                //{ +0x0000    +0x0000    +0x0000    } | .NodeTypeCode
        _m001 int16_t                                   node_byte_size;                                //{ +0x0002    +0x0002    +0x0002    } | .NodeByteSize
        _m002 struct nt::epartition_t*                  partition_object;                              //{ +0x0008    +0x0008    +0x0008    } | .PartitionObject
        _m003 nt::list_entry_t                          clean_shared_cache_map_list;                   //{ +0x0010    +0x0270    +0x0010    } | .CleanSharedCacheMapList
        _m004 nt::list_entry_t                          clean_shared_cache_map_with_log_handle_list;   //{ +0x0020    +0x0280    +0x0020    } | .CleanSharedCacheMapWithLogHandleList
        _m005 struct nt::shared_cache_map_list_cursor_t dirty_shared_cache_map_list;                   //{ +0x0030    +0x0290    +0x0030    } | .DirtySharedCacheMapList
        _m006 struct nt::shared_cache_map_list_cursor_t lazy_write_cursor;                             //{ +0x0048    +0x02a8    +0x0048    } | .LazyWriteCursor
        _m007 nt::list_entry_t                          dirty_shared_cache_map_with_log_handle_list;   //{ +0x0060    +0x02c0    +0x0060    } | .DirtySharedCacheMapWithLogHandleList
        _m008 uint64_t                                  private_lock;                                  //{ +0x0080    +0x0300    +0x0080    } | .PrivateLock
        _m009 uint32_t                                  consecutive_workless_lazy_scan_count;          //{ +0x0088    +0x0308    +0x0088    } | .ConsecutiveWorklessLazyScanCount
        _m010 uint8_t                                   forced_disable_lazywrite_scan;                 //{ +0x008c    +0x030c    +0x008c    } | .ForcedDisableLazywriteScan
        _m011 uint64_t                                  work_queue_lock;                               //{ +0x00c0    +0x0340    +0x00c0    } | .WorkQueueLock
        _m012 uint32_t                                  number_worker_threads;                         //{ +0x00c8    +0x0348    +0x00c8    } | .NumberWorkerThreads
        _m013 nt::list_entry_t                          post_tick_work_queue;                          //{ +0x0110    +0x0350    +0x0110    } | .PostTickWorkQueue
        _m014 uint32_t                                  max_extra_write_behind_threads;                //{ +0x0144    +0x0360    +0x0144    } | .MaxExtraWriteBehindThreads
        _m015 uint32_t                                  max_cache_map_uninit_threads;                  //{ +0x015c    +0x0364    +0x015c    } | .MaxCacheMapUninitThreads
        _m016 uint8_t                                   queue_throttle;                                //{ +0x0160    +0x0368    +0x0160    } | .QueueThrottle
        _m017 uint32_t                                  post_tick_work_item_count;                     //{ +0x0164    +0x036c    +0x0164    } | .PostTickWorkItemCount
        _m018 struct nt::kevent_t                       low_memory_event;                              //{ +0x0178    +0x0370    +0x0178    } | .LowMemoryEvent
        _m019 struct nt::kevent_t                       power_event;                                   //{ +0x0190    +0x0388    +0x0190    } | .PowerEvent
        _m020 struct nt::kevent_t                       waiting_for_teardown_event;                    //{ +0x01c0    +0x03a0    +0x01c0    } | .WaitingForTeardownEvent
        _m021 struct nt::kevent_t                       coalescing_flush_event;                        //{ +0x01d8    +0x03b8    +0x01d8    } | .CoalescingFlushEvent
        _m022 uint32_t                                  pages_yet_to_write;                            //{ +0x01f0    +0x03d0    +0x01f0    } | .PagesYetToWrite
        _m023 struct nt::lazy_writer_t                  lazy_writer;                                   //{ +0x01f8    +0x03d8    +0x01f8    } | .LazyWriter
        _m024 struct nt::dirty_page_statistics_t        dirty_page_statistics;                         //{ +0x0280    +0x0420    +0x0280    } | .DirtyPageStatistics
        _m025 struct nt::dirty_page_thresholds_t        dirty_page_thresholds;                         //{ +0x0298    +0x0438    +0x0298    } | .DirtyPageThresholds
        _m026 struct nt::write_behind_throughput_t*     throughput_stats;                              //{ +0x02d0    +0x0470    +0x02d0    } | .ThroughputStats
        _m027 uint64_t                                  average_available_pages;                       //{ +0x02e0    +0x0478    +0x02e0    } | .AverageAvailablePages
        _m028 uint64_t                                  average_dirty_pages;                           //{ +0x02e8    +0x0480    +0x02e8    } | .AverageDirtyPages
        _m029 uint64_t                                  pages_skipped_due_to_hot_spot;                 //{ +0x02f0    +0x0488    +0x02f0    } | .PagesSkippedDueToHotSpot
        _m030 nt::list_entry_t                          deferred_writes;                               //{ +0x0310    +0x0490    +0x0310    } | .DeferredWrites
        _m031 uint64_t                                  deferred_write_spin_lock;                      //{ +0x0340    +0x04c0    +0x0340    } | .DeferredWriteSpinLock
        _m032 struct ex::push_lock_t                    async_read_work_queue_lock;                    //{ +0x0380    +0x04c8    +0x0380    } | .AsyncReadWorkQueueLock
        _m033 nt::list_entry_t                          vacb_free_high_priority_list;                  //{ +0x0388    +0x04d0    +0x0388    } | .VacbFreeHighPriorityList
        _m034 uint32_t                                  number_of_free_high_priority_vacbs;            //{ +0x0398    +0x04e0    +0x0398    } | .NumberOfFreeHighPriorityVacbs
        _m035 struct nt::ethread_t*                     low_pri_worker_thread;                         //{ +0x03a0    +0x04e8    +0x03a0    } | .LowPriWorkerThread
        _m036 struct nt::shared_cache_map_t*            low_pri_shared_cache_map;                      //{ +0x03a8    +0x04f0    +0x03a8    } | .LowPriSharedCacheMap
        _m037 int32_t                                   low_pri_old_cpu_priority;                      //{ +0x03b0    +0x04f8    +0x03b0    } | .LowPriOldCpuPriority
        _m038 enum io::priority_hint_t                  low_pri_old_io_priority;                       //{ +0x03b4    +0x04fc    +0x03b4    } | .LowPriOldIoPriority
        _m039 struct ex::push_lock_t                    low_priority_worker_thread_lock;               //{ +0x03b8    +0x0500    +0x03b8    } | .LowPriorityWorkerThreadLock
        _m040 uint32_t                                  max_number_of_write_behind_threads;            //{ +0x03c0    +0x0508    +0x03c0    } | .MaxNumberOfWriteBehindThreads
        _m041 uint8_t                                   coalescing_state;                              //{ +0x03c4    +0x050c    +0x03c4    } | .CoalescingState
        _m042 uint8_t                                   active_partition;                              //{ +0x03c5    +0x050d    +0x03c5    } | .ActivePartition
        _m043 uint8_t                                   rundown_phase;                                 //{ +0x03c6    +0x050e    +0x03c6    } | .RundownPhase
        _m044 int64_t                                   ref_count;                                     //{ +0x03c8    +0x0510    +0x03c8    } | .RefCount
        _m045 struct nt::kevent_t                       exit_event;                                    //{ +0x03d0    +0x0518    +0x03d0    } | .ExitEvent
        _m046 struct nt::kevent_t                       final_dereference_event;                       //{ +0x03e8    +0x0530    +0x03e8    } | .FinalDereferenceEvent
        _m047 void*                                     lazy_write_scan_thread_handle;                 //{ +0x0400    +0x0548    +0x0400    } | .LazyWriteScanThreadHandle
                                                                                                     
        // Windows 10 v2004, Windows 10 v20H2                                                        
        //                                                                                           
        _m048 uint32_t                                  number_active_worker_threads;                  //{ +0x00cc    +0x00cc    } | .NumberActiveWorkerThreads
        _m049 nt::list_entry_t                          idle_worker_thread_list;                       //{ +0x00d0    +0x00d0    } | .IdleWorkerThreadList
        _m050 nt::list_entry_t                          fast_teardown_work_queue;                      //{ +0x00e0    +0x00e0    } | .FastTeardownWorkQueue
        _m051 nt::list_entry_t                          express_work_queue;                            //{ +0x00f0    +0x00f0    } | .ExpressWorkQueue
        _m052 nt::list_entry_t                          regular_work_queue;                            //{ +0x0100    +0x0100    } | .RegularWorkQueue
        _m053 nt::list_entry_t                          clean_cachemap_uninit_work_queue;              //{ +0x0120    +0x0120    } | .CleanCachemapUninitWorkQueue
        _m054 nt::list_entry_t                          idle_extra_write_behind_thread_list;           //{ +0x0130    +0x0130    } | .IdleExtraWriteBehindThreadList
        _m055 uint32_t                                  active_extra_write_behind_threads;             //{ +0x0140    +0x0140    } | .ActiveExtraWriteBehindThreads
        _m056 nt::list_entry_t                          idle_cache_map_uninit_thread_list;             //{ +0x0148    +0x0148    } | .IdleCacheMapUninitThreadList
        _m057 uint32_t                                  active_cache_map_uninit_threads;               //{ +0x0158    +0x0158    } | .ActiveCacheMapUninitThreads
        _m058 uint32_t                                  threads_active_before_throttle;                //{ +0x0168    +0x0168    } | .ThreadsActiveBeforeThrottle
        _m059 uint32_t                                  extra_wb_threads_active_before_throttle;       //{ +0x016c    +0x016c    } | .ExtraWBThreadsActiveBeforeThrottle
        _m060 uint32_t                                  executing_write_behind_work_items;             //{ +0x0170    +0x0170    } | .ExecutingWriteBehindWorkItems
        _m061 uint32_t                                  executing_high_priority_work_item;             //{ +0x0174    +0x0174    } | .ExecutingHighPriorityWorkItem
        _m062 struct nt::kevent_t                       periodic_event;                                //{ +0x01a8    +0x01a8    } | .PeriodicEvent
        _m063 int32_t                                   throughput_trend;                              //{ +0x02d8    +0x02d8    } | .ThroughputTrend
        _m064 int64_t                                   prev_regular_queue_item_run_time;              //{ +0x02f8    +0x02f8    } | .PrevRegularQueueItemRunTime
        _m065 int64_t                                   prev_extra_wb_thread_check_time;               //{ +0x0300    +0x0300    } | .PrevExtraWBThreadCheckTime
        _m066 uint8_t                                   add_extra_write_behind_threads;                //{ +0x0308    +0x0308    } | .AddExtraWriteBehindThreads
        _m067 uint8_t                                   remove_extra_thread_pending;                   //{ +0x0309    +0x0309    } | .RemoveExtraThreadPending
        _m068 nt::list_entry_t*                         idle_async_read_worker_thread_list;            //{ +0x0348    +0x0348    } | .IdleAsyncReadWorkerThreadList
        _m069 uint32_t*                                 number_active_async_read_worker_threads;       //{ +0x0350    +0x0350    } | .NumberActiveAsyncReadWorkerThreads
        _m070 uint32_t*                                 number_active_complete_async_read_work_items;  //{ +0x0358    +0x0358    } | .NumberActiveCompleteAsyncReadWorkItems
        _m071 nt::list_entry_t*                         async_read_work_queue;                         //{ +0x0360    +0x0360    } | .AsyncReadWorkQueue
        _m072 nt::list_entry_t*                         async_read_completion_work_queue;              //{ +0x0368    +0x0368    } | .AsyncReadCompletionWorkQueue
        _m073 struct nt::kevent_t*                      new_async_read_request_event;                  //{ +0x0370    +0x0370    } | .NewAsyncReadRequestEvent
        _m074 struct nt::async_read_thread_stats_t*     reader_threads_stats;                          //{ +0x0378    +0x0378    } | .ReaderThreadsStats
                                                                                                     
        // Windows 11                                                                                
        //                                                                                           
        _m075 nt::list_entry_t                          numa_node_list;                                //{ +0x0010    } | .NumaNodeList
        _m076 nt::list_entry_t                          volume_list;                                   //{ +0x0020    } | .VolumeList
        _m077 uint32_t                                  volume_count;                                  //{ +0x0030    } | .VolumeCount
        _m078 struct nt::kevent_t                       last_volume_event;                             //{ +0x0038    } | .LastVolumeEvent
        _m079 nt::list_entry_t                          deleted_volume_list;                           //{ +0x0050    } | .DeletedVolumeList
        _m080 nt::list_entry_t                          delete_pvcm_worker_thread_list;                //{ +0x0060    } | .DeletePVCMWorkerThreadList
        _m081 sdk::array<struct cc::numa_node_t*, 64>   numa_node_block;                               //{ +0x0070    } | .NumaNodeBlock
        _m082 struct cc::lws_packet_t                   lws_packet;                                    //{ +0x0550    } | .LWSPacket
                                                                                                     
        SDK_MAGIC_PROPERTIES( "_CC_PARTITION.$", 0x440, true, 0xda3af332008c0ced );                                             
        SDK_DYNAMIC_SIZE( partition_t );                                                             
    };                                                                                               
};
#include "magic/partition_t.end.hpp"
