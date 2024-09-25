#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_CC_PARTITION.NodeTypeCode", node_type_code, 0x0, 0x10, true, 0x451d14d8050c0f95)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_CC_PARTITION.NodeByteSize", node_byte_size, 0x10, 0x10, true, 0x644af446a43a2bb)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::epartition_t*), "_CC_PARTITION.PartitionObject", partition_object, 0x40, 0x40, true, 0xe74c9446d940bfbf)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_PARTITION.CleanSharedCacheMapList", clean_shared_cache_map_list, 0x80, 0x80, true, 0xa301f19143c99434)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_PARTITION.CleanSharedCacheMapWithLogHandleList", clean_shared_cache_map_with_log_handle_list, 0x100, 0x80, true, 0x9d61c96ec8b12b84)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::shared_cache_map_list_cursor_t), "_CC_PARTITION.DirtySharedCacheMapList", dirty_shared_cache_map_list, 0x180, 0xc0, true, 0x5a631a9d14cb9086)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::shared_cache_map_list_cursor_t), "_CC_PARTITION.LazyWriteCursor", lazy_write_cursor, 0x240, 0xc0, true, 0x30883ab61eee1b04)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_PARTITION.DirtySharedCacheMapWithLogHandleList", dirty_shared_cache_map_with_log_handle_list, 0x300, 0x80, true, 0xa3ad7c3dc2a3497f)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_PARTITION.PrivateLock", private_lock, 0x400, 0x40, true, 0xb5703e86e3d210b3)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_PARTITION.ConsecutiveWorklessLazyScanCount", consecutive_workless_lazy_scan_count, 0x440, 0x20, true, 0x84fd2b160b5a0706)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CC_PARTITION.ForcedDisableLazywriteScan", forced_disable_lazywrite_scan, 0x460, 0x8, true, 0x5ee58921ca66bf51)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_PARTITION.WorkQueueLock", work_queue_lock, 0x600, 0x40, true, 0xfe52b2e0675e5e17)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_PARTITION.NumberWorkerThreads", number_worker_threads, 0x640, 0x20, true, 0x7a5f22aeeaa927dc)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_PARTITION.PostTickWorkQueue", post_tick_work_queue, 0x880, 0x80, true, 0x267f8688f46e37a8)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_PARTITION.MaxExtraWriteBehindThreads", max_extra_write_behind_threads, 0xa20, 0x20, true, 0xef77f9421952f909)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_PARTITION.MaxCacheMapUninitThreads", max_cache_map_uninit_threads, 0xae0, 0x20, true, 0x9b0c729e08b11196)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CC_PARTITION.QueueThrottle", queue_throttle, 0xb00, 0x8, true, 0x59d805f01abcab9c)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_PARTITION.PostTickWorkItemCount", post_tick_work_item_count, 0xb20, 0x20, true, 0x327ba095ec756509)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_CC_PARTITION.LowMemoryEvent", low_memory_event, 0xbc0, 0xc0, true, 0xf2ccb3f866da3474)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_CC_PARTITION.PowerEvent", power_event, 0xc80, 0xc0, true, 0x5c1b0532eb309ade)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_CC_PARTITION.WaitingForTeardownEvent", waiting_for_teardown_event, 0xe00, 0xc0, true, 0x175d6cde86b0bc9b)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_CC_PARTITION.CoalescingFlushEvent", coalescing_flush_event, 0xec0, 0xc0, true, 0xffd6311f12d9e9ad)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_PARTITION.PagesYetToWrite", pages_yet_to_write, 0xf80, 0x20, true, 0xfa48705616268d92)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::lazy_writer_t), "_CC_PARTITION.LazyWriter", lazy_writer, 0xfc0, 0x40, true, 0x4020483b10e29c8a)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::dirty_page_statistics_t), "_CC_PARTITION.DirtyPageStatistics", dirty_page_statistics, 0x1400, 0xc0, true, 0x922bb78ba9dbafef)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::dirty_page_thresholds_t), "_CC_PARTITION.DirtyPageThresholds", dirty_page_thresholds, 0x14c0, 0xc0, true, 0x43b3ddfa2399595d)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::write_behind_throughput_t*), "_CC_PARTITION.ThroughputStats", throughput_stats, 0x1680, 0x40, true, 0x384f6cd63fb3a9bc)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_PARTITION.AverageAvailablePages", average_available_pages, 0x1700, 0x40, true, 0xb5e1e11aa539a1c0)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_PARTITION.AverageDirtyPages", average_dirty_pages, 0x1740, 0x40, true, 0xd462bff57540dc80)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_PARTITION.PagesSkippedDueToHotSpot", pages_skipped_due_to_hot_spot, 0x1780, 0x40, true, 0x4ed0876f192c22de)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_PARTITION.DeferredWrites", deferred_writes, 0x1880, 0x80, true, 0xdfab49d063740ba0)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_PARTITION.DeferredWriteSpinLock", deferred_write_spin_lock, 0x1a00, 0x40, true, 0x148d739f3b4a7d1)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_CC_PARTITION.AsyncReadWorkQueueLock", async_read_work_queue_lock, 0x1c00, 0x40, true, 0xb06cd4a34e02cc92)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_PARTITION.VacbFreeHighPriorityList", vacb_free_high_priority_list, 0x1c40, 0x80, true, 0x6aa32f9455f5d904)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_PARTITION.NumberOfFreeHighPriorityVacbs", number_of_free_high_priority_vacbs, 0x1cc0, 0x20, true, 0x63e0d01b6eb2248b)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_CC_PARTITION.LowPriWorkerThread", low_pri_worker_thread, 0x1d00, 0x40, true, 0xe8842f08717b0c8f)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::shared_cache_map_t*), "_CC_PARTITION.LowPriSharedCacheMap", low_pri_shared_cache_map, 0x1d40, 0x40, true, 0xcd5fa7a49498fc3d)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CC_PARTITION.LowPriOldCpuPriority", low_pri_old_cpu_priority, 0x1d80, 0x20, true, 0xaf94a7e9b7a2c274)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum io::priority_hint_t), "_CC_PARTITION.LowPriOldIoPriority", low_pri_old_io_priority, 0x1da0, 0x20, true, 0x59091c067262396f)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_CC_PARTITION.LowPriorityWorkerThreadLock", low_priority_worker_thread_lock, 0x1dc0, 0x40, true, 0x47a3dbaa2b7a839c)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_PARTITION.MaxNumberOfWriteBehindThreads", max_number_of_write_behind_threads, 0x1e00, 0x20, true, 0xffed4e426d7792de)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CC_PARTITION.CoalescingState", coalescing_state, 0x1e20, 0x8, true, 0x2eea2917adb1d570)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CC_PARTITION.ActivePartition", active_partition, 0x1e28, 0x8, true, 0x881ebfa71e7d4c9c)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CC_PARTITION.RundownPhase", rundown_phase, 0x1e30, 0x8, true, 0xd794e91fbdde38ed)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CC_PARTITION.RefCount", ref_count, 0x1e40, 0x40, true, 0xeca81a0695f15b5e)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_CC_PARTITION.ExitEvent", exit_event, 0x1e80, 0xc0, true, 0x9b26a6006b56a3e7)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_CC_PARTITION.FinalDereferenceEvent", final_dereference_event, 0x1f40, 0xc0, true, 0xf371e13714954e61)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_CC_PARTITION.LazyWriteScanThreadHandle", lazy_write_scan_thread_handle, 0x2000, 0x40, true, 0xd07c000a239e13f8)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_PARTITION.NumberActiveWorkerThreads", number_active_worker_threads, 0x660, 0x20, true, 0x3aaa398092429221)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_PARTITION.IdleWorkerThreadList", idle_worker_thread_list, 0x680, 0x80, true, 0x445f361632afc9ed)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_PARTITION.FastTeardownWorkQueue", fast_teardown_work_queue, 0x700, 0x80, true, 0x9cfcdbe82ce82c4e)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_PARTITION.ExpressWorkQueue", express_work_queue, 0x780, 0x80, true, 0xae0583a9c49448ec)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_PARTITION.RegularWorkQueue", regular_work_queue, 0x800, 0x80, true, 0x125f9bcc92135a49)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_PARTITION.CleanCachemapUninitWorkQueue", clean_cachemap_uninit_work_queue, 0x900, 0x80, true, 0xc5df0f709a7401fa)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_PARTITION.IdleExtraWriteBehindThreadList", idle_extra_write_behind_thread_list, 0x980, 0x80, true, 0x8722fb0661c51c34)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_PARTITION.ActiveExtraWriteBehindThreads", active_extra_write_behind_threads, 0xa00, 0x20, true, 0x8181a4e81045fd41)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_PARTITION.IdleCacheMapUninitThreadList", idle_cache_map_uninit_thread_list, 0xa40, 0x80, true, 0x79ab980b2232695e)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_PARTITION.ActiveCacheMapUninitThreads", active_cache_map_uninit_threads, 0xac0, 0x20, true, 0x7908433073cbaa1f)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_PARTITION.ThreadsActiveBeforeThrottle", threads_active_before_throttle, 0xb40, 0x20, true, 0x8b81f3ed873f9e35)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_PARTITION.ExtraWBThreadsActiveBeforeThrottle", extra_wb_threads_active_before_throttle, 0xb60, 0x20, true, 0x66fa7ed2c0c4de98)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_PARTITION.ExecutingWriteBehindWorkItems", executing_write_behind_work_items, 0xb80, 0x20, true, 0x9020798ba8a465b4)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_PARTITION.ExecutingHighPriorityWorkItem", executing_high_priority_work_item, 0xba0, 0x20, true, 0xa872315002067b61)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_CC_PARTITION.PeriodicEvent", periodic_event, 0xd40, 0xc0, true, 0xbb3fb14a9f5b071b)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CC_PARTITION.ThroughputTrend", throughput_trend, 0x16c0, 0x20, true, 0xb76390ea0936843e)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CC_PARTITION.PrevRegularQueueItemRunTime", prev_regular_queue_item_run_time, 0x17c0, 0x40, true, 0xa85465a708e4bc02)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CC_PARTITION.PrevExtraWBThreadCheckTime", prev_extra_wb_thread_check_time, 0x1800, 0x40, true, 0xb86d62a09a9d9d0)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CC_PARTITION.AddExtraWriteBehindThreads", add_extra_write_behind_threads, 0x1840, 0x8, true, 0xb75c826a6e96146)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CC_PARTITION.RemoveExtraThreadPending", remove_extra_thread_pending, 0x1848, 0x8, true, 0x9b50a8cc46e8f252)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_CC_PARTITION.IdleAsyncReadWorkerThreadList", idle_async_read_worker_thread_list, 0x1a40, 0x40, true, 0xbf1730d5d7669178)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_CC_PARTITION.NumberActiveAsyncReadWorkerThreads", number_active_async_read_worker_threads, 0x1a80, 0x40, true, 0xeced7dfc0bc80823)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_CC_PARTITION.NumberActiveCompleteAsyncReadWorkItems", number_active_complete_async_read_work_items, 0x1ac0, 0x40, true, 0xf11718bb73280ce0)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_CC_PARTITION.AsyncReadWorkQueue", async_read_work_queue, 0x1b00, 0x40, true, 0xea8f538b7eaea99a)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_CC_PARTITION.AsyncReadCompletionWorkQueue", async_read_completion_work_queue, 0x1b40, 0x40, true, 0x1d058121f69d77d0)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_CC_PARTITION.NewAsyncReadRequestEvent", new_async_read_request_event, 0x1b80, 0x40, true, 0x97ba616492d6fb48)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::async_read_thread_stats_t*), "_CC_PARTITION.ReaderThreadsStats", reader_threads_stats, 0x1bc0, 0x40, true, 0x600f38d71edb870e)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_PARTITION.NumaNodeList", numa_node_list, 0x0, 0x0, false, 0x88711cf796a97270)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_PARTITION.VolumeList", volume_list, 0x0, 0x0, false, 0xc1dde618efa97d68)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_PARTITION.VolumeCount", volume_count, 0x0, 0x0, false, 0xf527fc1dc71ab158)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_CC_PARTITION.LastVolumeEvent", last_volume_event, 0x0, 0x0, false, 0x30f600af99e510a5)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_PARTITION.DeletedVolumeList", deleted_volume_list, 0x0, 0x0, false, 0x4fc98af8f54b6da4)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_CC_PARTITION.DeletePVCMWorkerThreadList", delete_pvcm_worker_thread_list, 0x0, 0x0, false, 0x1ec9e5e98ae96157)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct cc::numa_node_t*, 64>), "_CC_PARTITION.NumaNodeBlock", numa_node_block, 0x0, 0x0, false, 0x2c901bbbf3ab8916)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cc::lws_packet_t), "_CC_PARTITION.LWSPacket", lws_packet, 0x0, 0x0, false, 0x41ba4e8b08b416cd)
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
#define _m081
#define _m082
#endif