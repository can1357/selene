#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_PRIVATE_VOLUME_CACHEMAP.NodeTypeCode", node_type_code, 0x0, 0x0, false, 0x61f6acf12cd12475)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_PRIVATE_VOLUME_CACHEMAP.NodeByteSize", node_byte_size, 0x0, 0x0, false, 0xecc9d5d3f89f40d7)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVATE_VOLUME_CACHEMAP.UseCount", use_count, 0x0, 0x0, false, 0x5af318167ca6ea71)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PRIVATE_VOLUME_CACHEMAP.RefCount", ref_count, 0x0, 0x0, false, 0xfb3fadf3a45b7eac)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_PRIVATE_VOLUME_CACHEMAP.DeviceObject", device_object, 0x0, 0x0, false, 0x945c8263f90f1e71)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVATE_VOLUME_CACHEMAP.VolumeId", volume_id, 0x0, 0x0, false, 0xf8770cca3e3eca05)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cc::partition_t*), "_PRIVATE_VOLUME_CACHEMAP.Partition", partition, 0x0, 0x0, false, 0x5982abc8179a9518)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::volume_cache_map_t*), "_PRIVATE_VOLUME_CACHEMAP.VolumeCacheMap", volume_cache_map, 0x0, 0x0, false, 0x8594b65091b24943)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PRIVATE_VOLUME_CACHEMAP.NumaNodeList", numa_node_list, 0x0, 0x0, false, 0xed967cbbd9273084)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct cc::numa_node_t*, 64>), "_PRIVATE_VOLUME_CACHEMAP.NumaNodeBlock", numa_node_block, 0x0, 0x0, false, 0xb9194426373b6342)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PRIVATE_VOLUME_CACHEMAP.PartitionVolumeLinks", partition_volume_links, 0x0, 0x0, false, 0xd1bfacd80159bc4c)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PRIVATE_VOLUME_CACHEMAP.VolumeCacheMapLinks", volume_cache_map_links, 0x0, 0x0, false, 0x7bc4addf10ed96c0)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PRIVATE_VOLUME_CACHEMAP.CleanSharedCacheMapList", clean_shared_cache_map_list, 0x0, 0x0, false, 0x9f414cd4e1bbeafa)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PRIVATE_VOLUME_CACHEMAP.CleanSharedCacheMapWithLogHandleList", clean_shared_cache_map_with_log_handle_list, 0x0, 0x0, false, 0xb3bd23365e39b479)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::shared_cache_map_list_cursor_t), "_PRIVATE_VOLUME_CACHEMAP.DirtySharedCacheMapList", dirty_shared_cache_map_list, 0x0, 0x0, false, 0xc5863d4406c3dbf7)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::shared_cache_map_list_cursor_t), "_PRIVATE_VOLUME_CACHEMAP.LazyWriteCursor", lazy_write_cursor, 0x0, 0x0, false, 0x7e1ada269ddae3ea)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PRIVATE_VOLUME_CACHEMAP.DirtySharedCacheMapWithLogHandleList", dirty_shared_cache_map_with_log_handle_list, 0x0, 0x0, false, 0xfbcd8a10fddf234)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVATE_VOLUME_CACHEMAP.ConsecutiveWorklessLazyScanCount", consecutive_workless_lazy_scan_count, 0x0, 0x0, false, 0xe6bbf6e6410ce053)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PRIVATE_VOLUME_CACHEMAP.ForcedDisableLazywriteScan", forced_disable_lazywrite_scan, 0x0, 0x0, false, 0xe9722bb489c38b93)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PRIVATE_VOLUME_CACHEMAP.WorkQueueLock", work_queue_lock, 0x0, 0x0, false, 0xf73a2cd025dd5b82)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVATE_VOLUME_CACHEMAP.NumberWorkerThreads", number_worker_threads, 0x0, 0x0, false, 0xaee36cf255240680)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PRIVATE_VOLUME_CACHEMAP.PostTickWorkQueue", post_tick_work_queue, 0x0, 0x0, false, 0xc96a0cc75e67361a)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVATE_VOLUME_CACHEMAP.MaxExtraWriteBehindThreads", max_extra_write_behind_threads, 0x0, 0x0, false, 0x25b7ed0e0adccc49)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVATE_VOLUME_CACHEMAP.MaxCacheMapUninitThreads", max_cache_map_uninit_threads, 0x0, 0x0, false, 0x5e75cbe9c0404923)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PRIVATE_VOLUME_CACHEMAP.QueueThrottle", queue_throttle, 0x0, 0x0, false, 0x875cb444c353d235)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVATE_VOLUME_CACHEMAP.PostTickWorkItemCount", post_tick_work_item_count, 0x0, 0x0, false, 0x1b5e241a69922942)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_PRIVATE_VOLUME_CACHEMAP.LowMemoryEvent", low_memory_event, 0x0, 0x0, false, 0xa8b95c2acf994bcd)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_PRIVATE_VOLUME_CACHEMAP.PowerEvent", power_event, 0x0, 0x0, false, 0x32048984d700974a)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_PRIVATE_VOLUME_CACHEMAP.WaitingForTeardownEvent", waiting_for_teardown_event, 0x0, 0x0, false, 0x6c72a5f181ed8555)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_PRIVATE_VOLUME_CACHEMAP.CoalescingFlushEvent", coalescing_flush_event, 0x0, 0x0, false, 0xafcaee58830b5092)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVATE_VOLUME_CACHEMAP.PagesYetToWrite", pages_yet_to_write, 0x0, 0x0, false, 0xaf598ce5a49b7b5c)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::lazy_writer_t), "_PRIVATE_VOLUME_CACHEMAP.LazyWriter", lazy_writer, 0x0, 0x0, false, 0x67f19612f3a85390)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::dirty_page_statistics_t), "_PRIVATE_VOLUME_CACHEMAP.DirtyPageStatistics", dirty_page_statistics, 0x0, 0x0, false, 0xa6b9eec5ad7cd752)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::dirty_page_thresholds_t), "_PRIVATE_VOLUME_CACHEMAP.DirtyPageThresholds", dirty_page_thresholds, 0x0, 0x0, false, 0x427117c39fd1f1f4)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::write_behind_throughput_t*), "_PRIVATE_VOLUME_CACHEMAP.ThroughputStats", throughput_stats, 0x0, 0x0, false, 0xc7f001b8a026ed02)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PRIVATE_VOLUME_CACHEMAP.AverageAvailablePages", average_available_pages, 0x0, 0x0, false, 0xae4b8f0f752022f4)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PRIVATE_VOLUME_CACHEMAP.AverageDirtyPages", average_dirty_pages, 0x0, 0x0, false, 0xe7a33b640bff45c7)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PRIVATE_VOLUME_CACHEMAP.PagesSkippedDueToHotSpot", pages_skipped_due_to_hot_spot, 0x0, 0x0, false, 0x8f5d51a0964f8f63)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PRIVATE_VOLUME_CACHEMAP.DeferredWrites", deferred_writes, 0x0, 0x0, false, 0x14c30b07fe2efe0b)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PRIVATE_VOLUME_CACHEMAP.DeferredWriteSpinLock", deferred_write_spin_lock, 0x0, 0x0, false, 0xfe6237054a860ec8)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_PRIVATE_VOLUME_CACHEMAP.AsyncReadWorkQueueLock", async_read_work_queue_lock, 0x0, 0x0, false, 0xdc70deb418f8a64e)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVATE_VOLUME_CACHEMAP.MaxNumberOfWriteBehindThreads", max_number_of_write_behind_threads, 0x0, 0x0, false, 0x150e2372cd2aa684)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PRIVATE_VOLUME_CACHEMAP.CoalescingState", coalescing_state, 0x0, 0x0, false, 0x6356fb0f4a5456f1)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PRIVATE_VOLUME_CACHEMAP.InitComplete", init_complete, 0x0, 0x0, false, 0x4ae7ef979da734b0)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_PRIVATE_VOLUME_CACHEMAP.ExitEvent", exit_event, 0x0, 0x0, false, 0xbffdb6fd591cfc3e)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_PRIVATE_VOLUME_CACHEMAP.FinalDereferenceEvent", final_dereference_event, 0x0, 0x0, false, 0xc696cb9e62888329)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PRIVATE_VOLUME_CACHEMAP.LazyWriteScanThreadHandle", lazy_write_scan_thread_handle, 0x0, 0x0, false, 0x12e0de8e3751a67c)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cc::lws_packet_t), "_PRIVATE_VOLUME_CACHEMAP.LWSPacket", lws_packet, 0x0, 0x0, false, 0x2700500118914ea5)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PRIVATE_VOLUME_CACHEMAP.ExternalCacheList", external_cache_list, 0x0, 0x0, false, 0x8e2d8a0577752c68)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVATE_VOLUME_CACHEMAP.ThroughputIdx", throughput_idx, 0x0, 0x0, false, 0x58b549c3abf118c7)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PRIVATE_VOLUME_CACHEMAP.AvgPagesPerSecond", avg_pages_per_second, 0x0, 0x0, false, 0xbf69ccf25c702313)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 32>), "_PRIVATE_VOLUME_CACHEMAP.ThroughputHistory", throughput_history, 0x0, 0x0, false, 0x2442820c5527aa81)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVATE_VOLUME_CACHEMAP.DirtyThresholdInSeconds", dirty_threshold_in_seconds, 0x0, 0x0, false, 0x1df1f3d13f3e938a)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVATE_VOLUME_CACHEMAP.DirtyPageTargetInSeconds", dirty_page_target_in_seconds, 0x0, 0x0, false, 0xe74da81af394857f)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PRIVATE_VOLUME_CACHEMAP.QuickLWSThreadList", quick_lws_thread_list, 0x0, 0x0, false, 0x119850b31e46e96c)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_PRIVATE_VOLUME_CACHEMAP.QuickLazyScanEvent", quick_lazy_scan_event, 0x0, 0x0, false, 0xbda6982365b35082)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_PRIVATE_VOLUME_CACHEMAP.PrevLazyWriteScanTime", prev_lazy_write_scan_time, 0x0, 0x0, false, 0x4195e9a6f530a517)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVATE_VOLUME_CACHEMAP.AsyncLazywriteQueueDepth", async_lazywrite_queue_depth, 0x0, 0x0, false, 0xe5b437962d1ec57b)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVATE_VOLUME_CACHEMAP.MaxAsyncLazywriteCompletionWorkers", max_async_lazywrite_completion_workers, 0x0, 0x0, false, 0x83f6dbaef743e4af)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PRIVATE_VOLUME_CACHEMAP.Flags", flags, 0x0, 0x0, false, 0x9725af6f783c5c6c)
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
#endif