#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_SHARED_CACHE_MAP.NodeTypeCode", node_type_code, 0x0, 0x10, true, 0xa282a900e089dc1)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_SHARED_CACHE_MAP.NodeByteSize", node_byte_size, 0x10, 0x10, true, 0x7ccfa5282f98fe28)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARED_CACHE_MAP.OpenCount", open_count, 0x20, 0x20, true, 0x53e5eaa657cd0b93)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SHARED_CACHE_MAP.FileSize", file_size, 0x40, 0x40, true, 0x1f475557e9e3a22a)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_SHARED_CACHE_MAP.BcbList", bcb_list, 0x80, 0x80, true, 0x586dcdd9cf22a62c)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SHARED_CACHE_MAP.SectionSize", section_size, 0x100, 0x40, true, 0x5674d14dd7453592)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SHARED_CACHE_MAP.ValidDataLength", valid_data_length, 0x140, 0x40, true, 0x599b2ba809ffb098)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SHARED_CACHE_MAP.ValidDataGoal", valid_data_goal, 0x180, 0x40, true, 0xff58d5d7a4b94403)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::vacb_t*, 4>), "_SHARED_CACHE_MAP.InitialVacbs", initial_vacbs, 0x1c0, 0x0, true, 0xc72a066963ed9f8b)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::vacb_t**), "_SHARED_CACHE_MAP.Vacbs", vacbs, 0x2c0, 0x40, true, 0x21a5ef0d56dc2efb)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::fast_ref_t), "_SHARED_CACHE_MAP.FileObjectFastRef", file_object_fast_ref, 0x300, 0x40, true, 0x244f0baf37955059)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_SHARED_CACHE_MAP.VacbLock", vacb_lock, 0x340, 0x40, true, 0x1416f5ecf978f770)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARED_CACHE_MAP.DirtyPages", dirty_pages, 0x380, 0x20, true, 0xd73e8537456789cb)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_SHARED_CACHE_MAP.LoggedStreamLinks", logged_stream_links, 0x3c0, 0x80, true, 0x76d96442e0e569da)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_SHARED_CACHE_MAP.SharedCacheMapLinks", shared_cache_map_links, 0x440, 0x80, true, 0x77dada6fe9744977)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARED_CACHE_MAP.Flags", flags, 0x4c0, 0x20, true, 0xce9389c5558f8456)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_SHARED_CACHE_MAP.Status", status, 0x4e0, 0x20, true, 0x4a8f407911f3f4c0)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mbcb_t*), "_SHARED_CACHE_MAP.Mbcb", mbcb, 0x500, 0x40, true, 0x4ea8b7f23a783d12)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SHARED_CACHE_MAP.Section", section, 0x540, 0x40, true, 0xd6a52fc95def3b48)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_SHARED_CACHE_MAP.CreateEvent", create_event, 0x580, 0x40, true, 0x5d20aad5517ae8e9)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_SHARED_CACHE_MAP.WaitOnActiveCount", wait_on_active_count, 0x5c0, 0x40, true, 0xb1f201597407fcc5)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARED_CACHE_MAP.PagesToWrite", pages_to_write, 0x600, 0x20, true, 0x4d9934d03993c6ac)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SHARED_CACHE_MAP.BeyondLastFlush", beyond_last_flush, 0x640, 0x40, true, 0x72b38538bb72d056)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::cache_manager_callbacks_t*), "_SHARED_CACHE_MAP.Callbacks", callbacks, 0x680, 0x40, true, 0x8e035e21f7535a87)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SHARED_CACHE_MAP.LazyWriteContext", lazy_write_context, 0x6c0, 0x40, true, 0x8b786d65b82d2a94)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_SHARED_CACHE_MAP.PrivateList", private_list, 0x700, 0x80, true, 0x56996dd5b5a7e0d1)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::logged_stream_callback_v1_t), "_SHARED_CACHE_MAP.V1", v1, 0x780, 0x80, true, 0xd4786f485e27d49b)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::logged_stream_callback_v2_t), "_SHARED_CACHE_MAP.V2", v2, 0x780, 0x40, true, 0xbdc222bc003a2bbf)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SHARED_CACHE_MAP.LargestLSN", largest_lsn, 0x800, 0x40, true, 0x4dcd8abfaf094468)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARED_CACHE_MAP.DirtyPageThreshold", dirty_page_threshold, 0x840, 0x20, true, 0x6784ff252e9eac6e)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARED_CACHE_MAP.LazyWritePassCount", lazy_write_pass_count, 0x860, 0x20, true, 0x392a11826792ada8)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::cache_uninitialize_event_t*), "_SHARED_CACHE_MAP.UninitializeEvent", uninitialize_event, 0x880, 0x40, true, 0xcaaf62da85834705)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fast_mutex_t), "_SHARED_CACHE_MAP.BcbLock", bcb_lock, 0x8c0, 0xc0, true, 0x31ecdb4e00dedf0b)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SHARED_CACHE_MAP.LastUnmapBehindOffset", last_unmap_behind_offset, 0xa80, 0x40, true, 0xfbfcdfb7e16ffcb3)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_SHARED_CACHE_MAP.Event", event, 0xac0, 0xc0, true, 0xf2505050f7171102)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SHARED_CACHE_MAP.HighWaterMappingOffset", high_water_mapping_offset, 0xb80, 0x40, true, 0x4b76efa094c64ec5)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::private_cache_map_t), "_SHARED_CACHE_MAP.PrivateCacheMap", private_cache_map, 0xbc0, 0xc0, true, 0x7252321876380b7c)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SHARED_CACHE_MAP.WriteBehindWorkQueueEntry", write_behind_work_queue_entry, 0xf80, 0x40, true, 0x7e1153dfc949f7e0)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::volume_cache_map_t*), "_SHARED_CACHE_MAP.VolumeCacheMap", volume_cache_map, 0xfc0, 0x40, true, 0x3471d0865ced5813)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARED_CACHE_MAP.ProcImagePathHash", proc_image_path_hash, 0x1000, 0x20, true, 0x80812eaba3bdfa2)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARED_CACHE_MAP.WritesInProgress", writes_in_progress, 0x1020, 0x20, true, 0xc490a865146c7c5c)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARED_CACHE_MAP.AsyncReadRequestCount", async_read_request_count, 0x1040, 0x20, true, 0x8c7aee6bce85713)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cc::partition_t*), "_SHARED_CACHE_MAP.Partition", partition, 0x1080, 0x40, true, 0x7ce50ff6dcf52c7b)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARED_CACHE_MAP.InternalRefCount", internal_ref_count, 0x10c0, 0x20, true, 0x5f9d171cd0387c90)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARED_CACHE_MAP.NumMappedVacb", num_mapped_vacb, 0x10e0, 0x20, true, 0xad77ab839b396297)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARED_CACHE_MAP.NumActiveVacb", num_active_vacb, 0x1100, 0x20, true, 0x494f7a46e53743ae)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARED_CACHE_MAP.Flags2", flags2, 0x0, 0x0, false, 0x179233ba541a802f)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::cache_manager_callbacks_ex_t*), "_SHARED_CACHE_MAP.CallbacksEx", callbacks_ex, 0x0, 0x0, false, 0x84bb985b6e95a568)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARED_CACHE_MAP.IdealNodeForWriteBehind", ideal_node_for_write_behind, 0x0, 0x0, false, 0x7f9b832321e5f857)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SHARED_CACHE_MAP.IdealNodeNumber", ideal_node_number, 0x0, 0x0, false, 0x8b084e822655d1b3)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_SHARED_CACHE_MAP.VolSharedCacheMapLinks", vol_shared_cache_map_links, 0x0, 0x0, false, 0x962232751a575e5a)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_SHARED_CACHE_MAP.VolLoggedStreamLinks", vol_logged_stream_links, 0x0, 0x0, false, 0x91bef84fa93d1c09)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::private_volume_cachemap_t*), "_SHARED_CACHE_MAP.PrivateVolumeCacheMap", private_volume_cache_map, 0x0, 0x0, false, 0x9607a1ea6eee3d3a)
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
#endif