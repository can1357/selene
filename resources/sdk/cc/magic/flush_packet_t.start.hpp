#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cc::partition_t*), "_CC_FLUSH_PACKET.Partition", partition, 0x0, 0x0, false, 0xcc41198a319235b0)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::private_volume_cachemap_t*), "_CC_FLUSH_PACKET.PrivateVolumeCacheMap", private_volume_cache_map, 0x0, 0x0, false, 0xb9a8b759953799b4)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::shared_cache_map_t*), "_CC_FLUSH_PACKET.SharedCacheMap", shared_cache_map, 0x0, 0x0, false, 0x379e72dd9feeb6e2)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::section_object_pointers_t*), "_CC_FLUSH_PACKET.SectionObjectPointer", section_object_pointer, 0x0, 0x0, false, 0x875296b7b29508c5)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CC_FLUSH_PACKET.TargetOffset", target_offset, 0x0, 0x0, false, 0x974cc9f74c59f3cc)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CC_FLUSH_PACKET.NextFileOffset", next_file_offset, 0x0, 0x0, false, 0x504778e8b90e09dd)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_FLUSH_PACKET.NextLength", next_length, 0x0, 0x0, false, 0x8248c67e6e459c78)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_FLUSH_PACKET.BytesWritten", bytes_written, 0x0, 0x0, false, 0xf75c2dd330172b2f)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_FLUSH_PACKET.MmFlushFlags", mm_flush_flags, 0x0, 0x0, false, 0x127cc3241c797c22)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_FLUSH_PACKET.HotSpot", hot_spot, 0x0, 0x0, false, 0x289a18d92f50cc5d)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_FLUSH_PACKET.VerifyRequired", verify_required, 0x0, 0x0, false, 0xa19f569af0caa210)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_CC_FLUSH_PACKET.FlushEvent", flush_event, 0x0, 0x0, false, 0xa60019f1f8279a92)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CC_FLUSH_PACKET.FlushLargestLsn", flush_largest_lsn, 0x0, 0x0, false, 0x7c55fb09969807a4)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "_CC_FLUSH_PACKET.LargestLsn", largest_lsn, 0x0, 0x0, false, 0x4e00c404e275be0d)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t*), "_CC_FLUSH_PACKET.CallersFileOffset", callers_file_offset, 0x0, 0x0, false, 0xda17ed1ad2128fad)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_FLUSH_PACKET.CallersLength", callers_length, 0x0, 0x0, false, 0xdfe54c8ffade3510)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CC_FLUSH_PACKET.MarkWritethrough", mark_writethrough, 0x0, 0x0, false, 0x17a9b00d2a879f1d)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::status_block_t*), "_CC_FLUSH_PACKET.CallersIoStatus", callers_io_status, 0x0, 0x0, false, 0x6aa455cf6cdebb34)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::bcb_t*), "_CC_FLUSH_PACKET.FirstBcb", first_bcb, 0x0, 0x0, false, 0x5687bbbafd9f1227)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CC_FLUSH_PACKET.FirstFailureStatus", first_failure_status, 0x0, 0x0, false, 0xb1d6c1d74e0093b1)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CC_FLUSH_PACKET.IsLazyWriter", is_lazy_writer, 0x0, 0x0, false, 0x663a6e04293e56b6)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CC_FLUSH_PACKET.FastLazyWrite", fast_lazy_write, 0x0, 0x0, false, 0x2aab54ac98c56ad4)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CC_FLUSH_PACKET.ForceFullFlush", force_full_flush, 0x0, 0x0, false, 0x17100d075092de63)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CC_FLUSH_PACKET.PerformedFlushForMemMapped", performed_flush_for_mem_mapped, 0x0, 0x0, false, 0x54493115bd8fed4)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CC_FLUSH_PACKET.TeardownFlagBeforeFlush", teardown_flag_before_flush, 0x0, 0x0, false, 0xcba63514d1661f66)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CC_FLUSH_PACKET.ShouldRetryTeardown", should_retry_teardown, 0x0, 0x0, false, 0x9fae89bbb81d83e8)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CC_FLUSH_PACKET.FlushForImageSection", flush_for_image_section, 0x0, 0x0, false, 0xa0f09c8e9ff46819)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CC_FLUSH_PACKET.ForceSynchronousLazyWrite", force_synchronous_lazy_write, 0x0, 0x0, false, 0x567455e5dfc22822)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_FLUSH_PACKET.AcquireForLazyWriteOutFlags", acquire_for_lazy_write_out_flags, 0x0, 0x0, false, 0xb855b80a97064ee8)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CC_FLUSH_PACKET.StartTick", start_tick, 0x0, 0x0, false, 0x7465bd58aa502b7c)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CC_FLUSH_PACKET.EndTick", end_tick, 0x0, 0x0, false, 0xaf93ebc7e60576bd)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fsrtl_common_fcb_header_t*), "_CC_FLUSH_PACKET.FsContext", fs_context, 0x0, 0x0, false, 0xdb1b26f91175894d)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_entry_t*), "_CC_FLUSH_PACKET.WorkEntry", work_entry, 0x0, 0x0, false, 0xc947120265f661f7)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_CC_FLUSH_PACKET.DeferredWritesList", deferred_writes_list, 0x0, 0x0, false, 0x70838fdc07cf461b)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_CC_FLUSH_PACKET.CoalescingState", coalescing_state, 0x0, 0x0, false, 0x2d2f02fb4daf418c)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CC_FLUSH_PACKET.DoSinglePassFlush", do_single_pass_flush, 0x0, 0x0, false, 0xd757410210eae372)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CC_FLUSH_PACKET.RecordedSinglePassStartOffset", recorded_single_pass_start_offset, 0x0, 0x0, false, 0x4afa34735790d214)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CC_FLUSH_PACKET.SinglePassStartOffset", single_pass_start_offset, 0x0, 0x0, false, 0x94fe6d967b064fe9)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_FLUSH_PACKET.DirtyPagesAtStart", dirty_pages_at_start, 0x0, 0x0, false, 0xd49c738dd21ef57f)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CC_FLUSH_PACKET.TotalBytesWritten", total_bytes_written, 0x0, 0x0, false, 0x581e637058e87c74)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CC_FLUSH_PACKET.LwFlushStart", lw_flush_start, 0x0, 0x0, false, 0xcf5e7d08a79769b4)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_CC_FLUSH_PACKET.LwFlushEnd", lw_flush_end, 0x0, 0x0, false, 0x90555b646e4fed84)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_FLUSH_PACKET.TotalPagesFlushed", total_pages_flushed, 0x0, 0x0, false, 0x57dfb9638770cd9c)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_FLUSH_PACKET.PagesToWrite", pages_to_write, 0x0, 0x0, false, 0x6b3946efd11af6b7)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CC_FLUSH_PACKET.RequeueToHeadCount", requeue_to_head_count, 0x0, 0x0, false, 0x8b442f8f20c80949)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_entry_t*), "_CC_FLUSH_PACKET.WorkQueueEntry", work_queue_entry, 0x0, 0x0, false, 0xd36e92284b55b028)
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
#endif