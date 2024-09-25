#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PARTITION_STORES.VirtualPageFileNumber", virtual_page_file_number, 0x20, 0x20, true, 0xd4b14c571b91f034)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PARTITION_STORES.Registered", registered, 0x40, 0x20, true, 0xd5d03b6ea64c7319)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PARTITION_STORES.ReadClusterSizeMax", read_cluster_size_max, 0x60, 0x20, true, 0x5f1a5abc28a461bc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PARTITION_STORES.EvictFlushRequestCount", evict_flush_request_count, 0x80, 0x20, true, 0x5ff852f420c2c164)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PARTITION_STORES.ModifiedWriteDisableCount", modified_write_disable_count, 0xa0, 0x20, true, 0x797b423d35f8e5b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PARTITION_STORES.WriteIssueFailures", write_issue_failures, 0xc0, 0x20, true, 0x49e48e40e64b1804)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PARTITION_STORES.EvictFlushLock", evict_flush_lock, 0x100, 0x20, true, 0x530ccc641963b8ec)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_MI_PARTITION_STORES.EvictionThread", eviction_thread, 0x140, 0x40, true, 0x7b9a99e88fe64ff4)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PARTITION_STORES.EvictEvent", evict_event, 0x180, 0xc0, true, 0x1c853952290ad40e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_MI_PARTITION_STORES.WriteSupportSListHead", write_support_s_list_head, 0x280, 0x80, true, 0x3df2667d510033b0)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PARTITION_STORES.EvictFlushCompleteEvent", evict_flush_complete_event, 0x300, 0xc0, true, 0xa035e55544970d7f)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t*), "_MI_PARTITION_STORES.ModifiedWriteFailedBitmap", modified_write_failed_bitmap, 0x3c0, 0x40, true, 0x8b48b510e9dd33fb)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::eprocess_t*), "_MI_PARTITION_STORES.StoreProcess", store_process, 0x400, 0x40, true, 0x23f78164a5837de7)
#define _m13 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile int1_t), "_MI_PARTITION_STORES.WriteAllStoreHintedPages.FlushCompleting", flush_completing, 0x0, 0x1, true, 0x2b2847e8b528e673, 1, uint32_t)
#define _m14 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile int31_t), "_MI_PARTITION_STORES.WriteAllStoreHintedPages.FlushInProgress", flush_in_progress, 0x1, 0x1f, true, 0xa250184be06ad655, 31, uint32_t)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PARTITION_STORES.WriteAllStoreHintedPages.Long", _long, 0x0, 0x20, true, 0xa0a3147ddf7a39f0)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_write_all_store_hinted_pages_t), "_MI_PARTITION_STORES.WriteAllStoreHintedPages", write_all_store_hinted_pages, 0x0, 0x20, true, 0x9313cf436e80b769)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PARTITION_STORES.WritesOutstanding", writes_outstanding, 0xe0, 0x20, true, 0x6e8d2c637e6a7d75)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PARTITION_STORES.DeleteStoredPages", delete_stored_pages, 0x440, 0x20, true, 0x1a746cdb7f4a29ee)
#define _m19 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile int1_t), "_MI_PARTITION_STORES.WriteAllStoreSwapPages.FlushCompleting", flush_completing, 0x0, 0x0, false, 0x7c99928a1a7aaa0c, 1, uint32_t)
#define _m20 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile int31_t), "_MI_PARTITION_STORES.WriteAllStoreSwapPages.FlushInProgress", flush_in_progress, 0x0, 0x0, false, 0xf9e27d59d1b4286, 31, uint32_t)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PARTITION_STORES.WriteAllStoreSwapPages.Long", _long, 0x0, 0x0, false, 0x5ba5669807dae5a2)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_write_all_store_swap_pages_t), "_MI_PARTITION_STORES.WriteAllStoreSwapPages", write_all_store_swap_pages, 0x0, 0x0, false, 0x9debb81fabbaaf30)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_MI_PARTITION_STORES.RundownWrites", rundown_writes, 0x0, 0x0, false, 0x3fa234ad6749ae09)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PARTITION_STORES.EvictThreadExitEvent", evict_thread_exit_event, 0x0, 0x0, false, 0x62a9f40081c7eeec)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PARTITION_STORES.MemoryConditionsLock", memory_conditions_lock, 0x0, 0x0, false, 0x3fee434310f1046)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#define _m25
#endif