#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_CC_NUMA_NODE.NodeTypeCode", node_type_code, 0x0, 0x0, false, 0x8ed74f67666ef45f)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_CC_NUMA_NODE.NodeByteSize", node_byte_size, 0x0, 0x0, false, 0xbd2a062f380b258)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum cc::numa_type_t), "_CC_NUMA_NODE.NumaNodeType", numa_node_type, 0x0, 0x0, false, 0x1a3c2481dce0e7ab)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cc::partition_t*), "_CC_NUMA_NODE.Partition", partition, 0x0, 0x0, false, 0x6cf6aa2b2783638a)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::private_volume_cachemap_t*), "_CC_NUMA_NODE.PrivateVolumeCacheMap", private_volume_cache_map, 0x0, 0x0, false, 0xb3a84e0ce7e5b4be)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_NUMA_NODE.NodeNumber", node_number, 0x0, 0x0, false, 0x52a39021f4cfe922)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_NUMA_NODE.NodeList", node_list, 0x0, 0x0, false, 0xf5e7aebb66eeca7e)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_NUMA_NODE.NumberActiveWorkerThreads", number_active_worker_threads, 0x0, 0x0, false, 0xc00eb30258bc56e1)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_NUMA_NODE.IdleWorkerThreadList", idle_worker_thread_list, 0x0, 0x0, false, 0x5b8276bd84b73fc4)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_NUMA_NODE.FastTeardownWorkQueue", fast_teardown_work_queue, 0x0, 0x0, false, 0x3c661264a470542)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_NUMA_NODE.ExpressWorkQueue", express_work_queue, 0x0, 0x0, false, 0xa906d87ded00f092)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_NUMA_NODE.RegularWorkQueue", regular_work_queue, 0x0, 0x0, false, 0xae4d702d0c00f7e)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_NUMA_NODE.CleanCachemapUninitWorkQueue", clean_cachemap_uninit_work_queue, 0x0, 0x0, false, 0x27567de7edc0fc79)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_NUMA_NODE.IdleExtraWriteBehindThreadList", idle_extra_write_behind_thread_list, 0x0, 0x0, false, 0xf6dbb5ea88575e4d)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_NUMA_NODE.ActiveExtraWriteBehindThreads", active_extra_write_behind_threads, 0x0, 0x0, false, 0xec85429d359684b7)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_NUMA_NODE.IdleCacheMapUninitThreadList", idle_cache_map_uninit_thread_list, 0x0, 0x0, false, 0xbc54c8ad2dd4172b)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_NUMA_NODE.ActiveCacheMapUninitThreads", active_cache_map_uninit_threads, 0x0, 0x0, false, 0xe98a3b518962eb28)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_NUMA_NODE.ThreadsActiveBeforeThrottle", threads_active_before_throttle, 0x0, 0x0, false, 0x6992dfc3c5e60014)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_NUMA_NODE.ExtraWBThreadsActiveBeforeThrottle", extra_wb_threads_active_before_throttle, 0x0, 0x0, false, 0x53a36b39163d4955)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_NUMA_NODE.ExecutingWriteBehindWorkItems", executing_write_behind_work_items, 0x0, 0x0, false, 0xccf6685900a66211)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_NUMA_NODE.ExecutingHighPriorityWorkItem", executing_high_priority_work_item, 0x0, 0x0, false, 0x4e439808a56a3b6)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CC_NUMA_NODE.ThroughputTrend", throughput_trend, 0x0, 0x0, false, 0x90e1f08d443bc873)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CC_NUMA_NODE.PrevRegularQueueItemRunTime", prev_regular_queue_item_run_time, 0x0, 0x0, false, 0x98ab41562d59ac58)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CC_NUMA_NODE.PrevExtraWBThreadCheckTime", prev_extra_wb_thread_check_time, 0x0, 0x0, false, 0xc78e8ae2c1743e45)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CC_NUMA_NODE.AddExtraWriteBehindThreads", add_extra_write_behind_threads, 0x0, 0x0, false, 0x49172a8fea493f7d)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CC_NUMA_NODE.RemoveExtraThreadPending", remove_extra_thread_pending, 0x0, 0x0, false, 0x55eebfe837e33c33)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_CC_NUMA_NODE.IdleAsyncReadWorkerThreadList", idle_async_read_worker_thread_list, 0x0, 0x0, false, 0xf2c7cdd0ab8df83d)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_CC_NUMA_NODE.NumberActiveAsyncReadWorkerThreads", number_active_async_read_worker_threads, 0x0, 0x0, false, 0xc1565e088a9945e4)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_CC_NUMA_NODE.NumberActiveCompleteAsyncReadWorkItems", number_active_complete_async_read_work_items, 0x0, 0x0, false, 0xada5dc466ac94a7c)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_CC_NUMA_NODE.AsyncReadWorkQueue", async_read_work_queue, 0x0, 0x0, false, 0xb4b2c67ed28685d2)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_CC_NUMA_NODE.AsyncReadCompletionWorkQueue", async_read_completion_work_queue, 0x0, 0x0, false, 0x370ee2ce63c23289)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_CC_NUMA_NODE.NewAsyncReadRequestEvent", new_async_read_request_event, 0x0, 0x0, false, 0xda200e927bb26b0e)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::async_read_thread_stats_t*), "_CC_NUMA_NODE.ReaderThreadsStats", reader_threads_stats, 0x0, 0x0, false, 0xfcfb40df1bd8725a)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_NUMA_NODE.IdleAsyncLazywriteWorkerThreadList", idle_async_lazywrite_worker_thread_list, 0x0, 0x0, false, 0x9420b1a24780ec2a)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_NUMA_NODE.NumberActiveAsyncLazywriteWorkerThreads", number_active_async_lazywrite_worker_threads, 0x0, 0x0, false, 0xee31bf7816d7864e)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_NUMA_NODE.AsyncLazywriteWorkQueue", async_lazywrite_work_queue, 0x0, 0x0, false, 0x9380872cd5c3e1e0)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_CC_NUMA_NODE.NewAsyncLazywriteRequestEvent", new_async_lazywrite_request_event, 0x0, 0x0, false, 0xf242cee6376c3c6)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::async_lazywrite_thread_stats_t), "_CC_NUMA_NODE.LazywriterThreadsStats", lazywriter_threads_stats, 0x0, 0x0, false, 0xdfd27807a5a684f6)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_NUMA_NODE.IdleCompleteAsyncLazywriteWorkerThreadList", idle_complete_async_lazywrite_worker_thread_list, 0x0, 0x0, false, 0xbd5bab8f9b0c4817)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_NUMA_NODE.NumberActiveCompleteAsyncLazywriteWorkers", number_active_complete_async_lazywrite_workers, 0x0, 0x0, false, 0x886823c8d0f8153e)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_NUMA_NODE.AsyncLazywriteCompletionWorkQueue", async_lazywrite_completion_work_queue, 0x0, 0x0, false, 0x90566ff8aea8b21e)
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
#endif