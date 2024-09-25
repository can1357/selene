#pragma once
#include <sdkgen/support_library.hpp>
#include "numa_type_t.hpp"
#include "../nt/kevent_t.hpp"
#include "../nt/async_lazywrite_thread_stats_t.hpp"

namespace nt { struct async_read_thread_stats_t; }
namespace nt { struct private_volume_cachemap_t; }

#include "magic/numa_node_t.start.hpp"
namespace cc
{
    struct partition_t;

    // [struct _CC_NUMA_NODE]
    // => Windows 11
    //
    struct numa_node_t                                                                                   
    {                                                                                                    
        // Windows 11                                                                                    
        //                                                                                               
        _m000 int16_t                                   node_type_code;                                    //{ +0x0000    } | .NodeTypeCode
        _m001 int16_t                                   node_byte_size;                                    //{ +0x0002    } | .NodeByteSize
        _m002 enum cc::numa_type_t                      numa_node_type;                                    //{ +0x0004    } | .NumaNodeType
        _m003 struct cc::partition_t*                   partition;                                         //{ +0x0008    } | .Partition
        _m004 struct nt::private_volume_cachemap_t*     private_volume_cache_map;                          //{ +0x0010    } | .PrivateVolumeCacheMap
        _m005 uint32_t                                  node_number;                                       //{ +0x0018    } | .NodeNumber
        _m006 nt::list_entry_t                          node_list;                                         //{ +0x0020    } | .NodeList
        _m007 uint32_t                                  number_active_worker_threads;                      //{ +0x0030    } | .NumberActiveWorkerThreads
        _m008 nt::list_entry_t                          idle_worker_thread_list;                           //{ +0x0038    } | .IdleWorkerThreadList
        _m009 nt::list_entry_t                          fast_teardown_work_queue;                          //{ +0x0048    } | .FastTeardownWorkQueue
        _m010 nt::list_entry_t                          express_work_queue;                                //{ +0x0058    } | .ExpressWorkQueue
        _m011 nt::list_entry_t                          regular_work_queue;                                //{ +0x0068    } | .RegularWorkQueue
        _m012 nt::list_entry_t                          clean_cachemap_uninit_work_queue;                  //{ +0x0078    } | .CleanCachemapUninitWorkQueue
        _m013 nt::list_entry_t                          idle_extra_write_behind_thread_list;               //{ +0x0088    } | .IdleExtraWriteBehindThreadList
        _m014 uint32_t                                  active_extra_write_behind_threads;                 //{ +0x0098    } | .ActiveExtraWriteBehindThreads
        _m015 nt::list_entry_t                          idle_cache_map_uninit_thread_list;                 //{ +0x00a0    } | .IdleCacheMapUninitThreadList
        _m016 uint32_t                                  active_cache_map_uninit_threads;                   //{ +0x00b0    } | .ActiveCacheMapUninitThreads
        _m017 uint32_t                                  threads_active_before_throttle;                    //{ +0x00b4    } | .ThreadsActiveBeforeThrottle
        _m018 uint32_t                                  extra_wb_threads_active_before_throttle;           //{ +0x00b8    } | .ExtraWBThreadsActiveBeforeThrottle
        _m019 uint32_t                                  executing_write_behind_work_items;                 //{ +0x00bc    } | .ExecutingWriteBehindWorkItems
        _m020 uint32_t                                  executing_high_priority_work_item;                 //{ +0x00c0    } | .ExecutingHighPriorityWorkItem
        _m021 int32_t                                   throughput_trend;                                  //{ +0x00c4    } | .ThroughputTrend
        _m022 int64_t                                   prev_regular_queue_item_run_time;                  //{ +0x00c8    } | .PrevRegularQueueItemRunTime
        _m023 int64_t                                   prev_extra_wb_thread_check_time;                   //{ +0x00d0    } | .PrevExtraWBThreadCheckTime
        _m024 uint8_t                                   add_extra_write_behind_threads;                    //{ +0x00d8    } | .AddExtraWriteBehindThreads
        _m025 uint8_t                                   remove_extra_thread_pending;                       //{ +0x00d9    } | .RemoveExtraThreadPending
        _m026 nt::list_entry_t*                         idle_async_read_worker_thread_list;                //{ +0x00e0    } | .IdleAsyncReadWorkerThreadList
        _m027 uint32_t*                                 number_active_async_read_worker_threads;           //{ +0x00e8    } | .NumberActiveAsyncReadWorkerThreads
        _m028 uint32_t*                                 number_active_complete_async_read_work_items;      //{ +0x00f0    } | .NumberActiveCompleteAsyncReadWorkItems
        _m029 nt::list_entry_t*                         async_read_work_queue;                             //{ +0x00f8    } | .AsyncReadWorkQueue
        _m030 nt::list_entry_t*                         async_read_completion_work_queue;                  //{ +0x0100    } | .AsyncReadCompletionWorkQueue
        _m031 struct nt::kevent_t*                      new_async_read_request_event;                      //{ +0x0108    } | .NewAsyncReadRequestEvent
        _m032 struct nt::async_read_thread_stats_t*     reader_threads_stats;                              //{ +0x0110    } | .ReaderThreadsStats
        _m033 nt::list_entry_t                          idle_async_lazywrite_worker_thread_list;           //{ +0x0118    } | .IdleAsyncLazywriteWorkerThreadList
        _m034 uint32_t                                  number_active_async_lazywrite_worker_threads;      //{ +0x0128    } | .NumberActiveAsyncLazywriteWorkerThreads
        _m035 nt::list_entry_t                          async_lazywrite_work_queue;                        //{ +0x0130    } | .AsyncLazywriteWorkQueue
        _m036 struct nt::kevent_t                       new_async_lazywrite_request_event;                 //{ +0x0140    } | .NewAsyncLazywriteRequestEvent
        _m037 struct nt::async_lazywrite_thread_stats_t lazywriter_threads_stats;                          //{ +0x0158    } | .LazywriterThreadsStats
        _m038 nt::list_entry_t                          idle_complete_async_lazywrite_worker_thread_list;  //{ +0x0188    } | .IdleCompleteAsyncLazywriteWorkerThreadList
        _m039 uint32_t                                  number_active_complete_async_lazywrite_workers;    //{ +0x0198    } | .NumberActiveCompleteAsyncLazywriteWorkers
        _m040 nt::list_entry_t                          async_lazywrite_completion_work_queue;             //{ +0x01a0    } | .AsyncLazywriteCompletionWorkQueue
                                                                                                         
        SDK_MAGIC_PROPERTIES( "_CC_NUMA_NODE.$", 0x0, false, 0x5efa3e1648e19b68 );                                                 
        SDK_FIXED_SIZE( numa_node_t, 0x1b0 );                                                            
    };                                                                                                   
};
#include "magic/numa_node_t.end.hpp"
SDK_VERIFY( struct cc::numa_node_t, 0x1b0 );
