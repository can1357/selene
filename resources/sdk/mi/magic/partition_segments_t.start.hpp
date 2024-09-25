#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_PARTITION_SEGMENTS.SegmentListLock", segment_list_lock, 0x0, 0x20, true, 0x34b6be91ef18cae1)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PARTITION_SEGMENTS.DeleteOnCloseCount", delete_on_close_count, 0x20, 0x20, true, 0xd685941f149f237b)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PARTITION_SEGMENTS.DeleteSubsectionCleanup", delete_subsection_cleanup, 0x100, 0xc0, true, 0x423fd8580547b9ff)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PARTITION_SEGMENTS.UnusedSegmentCleanup", unused_segment_cleanup, 0x1c0, 0xc0, true, 0x563815ddbd3f1b12)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_SEGMENTS.SubsectionDeletePtes", subsection_delete_ptes, 0x280, 0x40, true, 0x2f45f0b4c2e3a7a6)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmdereference_segment_header_t), "_MI_PARTITION_SEGMENTS.DereferenceSegmentHeader", dereference_segment_header, 0x580, 0x80, true, 0x29ea3fa91e0fb609)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_PARTITION_SEGMENTS.DeleteOnCloseList", delete_on_close_list, 0x800, 0x80, true, 0x20bbc18fad5998dc)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_MI_PARTITION_SEGMENTS.DeleteOnCloseTimer", delete_on_close_timer, 0x880, 0x0, true, 0x76c6222839bdaf40)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_PARTITION_SEGMENTS.DeleteOnCloseTimerActive", delete_on_close_timer_active, 0xa80, 0x8, true, 0x76502ff56ec6738b)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_PARTITION_SEGMENTS.UnusedSegmentList", unused_segment_list, 0xb40, 0x80, true, 0xdf19940fe7a29c8)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_PARTITION_SEGMENTS.UnusedSubsectionList", unused_subsection_list, 0xbc0, 0x80, true, 0xf9350606069ad360)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_PARTITION_SEGMENTS.DeleteSubsectionList", delete_subsection_list, 0xc40, 0x80, true, 0xec1d8df8bee197e0)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PARTITION_SEGMENTS.ControlAreaDeleteEvent", control_area_delete_event, 0xcc0, 0xc0, true, 0x4177acbfbb9e70f9)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_MI_PARTITION_SEGMENTS.ControlAreaDeleteList", control_area_delete_list, 0xd80, 0x40, true, 0x4703cd2c645b7012)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int64_t), "_MI_PARTITION_SEGMENTS.FsControlAreaCount", fs_control_area_count, 0x40, 0x40, true, 0x1885500565cec1e4)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int64_t), "_MI_PARTITION_SEGMENTS.PfControlAreaCount", pf_control_area_count, 0x80, 0x40, true, 0x2751762912db104d)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int64_t), "_MI_PARTITION_SEGMENTS.CloneHeaderCount", clone_header_count, 0xc0, 0x40, true, 0xc9769abf46b685ec)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpage_file_expansion_t), "_MI_PARTITION_SEGMENTS.AttemptForCantExtend", attempt_for_cant_extend, 0x2c0, 0xc0, true, 0xf233ce13571b99df)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_PARTITION_SEGMENTS.SegmentDereferenceThreadExists", segment_dereference_thread_exists, 0xa88, 0x8, true, 0xad49228b78826260)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_PARTITION_SEGMENTS.SegmentDereferenceActiveControlArea", segment_dereference_active_control_area, 0xac0, 0x40, true, 0xabdba03a8ea3a250)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION_SEGMENTS.UnusedSegmentPagedPool", unused_segment_paged_pool, 0xb00, 0x40, true, 0x20288b46851bcdab)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PARTITION_SEGMENTS.CloneDereferenceEvent", clone_dereference_event, 0xe80, 0xc0, true, 0x1c690d731ba1c1eb)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_MI_PARTITION_SEGMENTS.CloneProtosSListHead", clone_protos_s_list_head, 0xf80, 0x80, true, 0xb6f4a4eea3244669)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MI_PARTITION_SEGMENTS.SystemCacheInitLock", system_cache_init_lock, 0x1000, 0x40, true, 0xa86bc2f81e0e3947)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PARTITION_SEGMENTS.PagefileExtensionWaiters", pagefile_extension_waiters, 0x1040, 0x20, true, 0xb2e8c09b7c5af839)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PARTITION_SEGMENTS.PagefileExtensionRequests", pagefile_extension_requests, 0x1060, 0x20, true, 0x1d428d9ca35d351a)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_PARTITION_SEGMENTS.PagefileExtensionWaitEvent", pagefile_extension_wait_event, 0x1080, 0xc0, true, 0xf95ca452d48602b3)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::cross_partition_charges_t, 7>), "_MI_PARTITION_SEGMENTS.SharedCharges", shared_charges, 0x1140, 0x0, true, 0xafb9a2b6ea6e70e3)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_MI_PARTITION_SEGMENTS.SharedChargesDrainEvent", shared_charges_drain_event, 0x1840, 0x40, true, 0xecda7b85e73e2f9)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_MI_PARTITION_SEGMENTS.ControlAreasDrainEvent", control_areas_drain_event, 0x1880, 0x40, true, 0x32bb7231006fae4c)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t*), "_MI_PARTITION_SEGMENTS.CloneHeaderDrainEvent", clone_header_drain_event, 0x18c0, 0x40, true, 0xe9f829fde9f0144)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::rundown_ref_cache_aware_t*), "_MI_PARTITION_SEGMENTS.ProbeRundownReference", probe_rundown_reference, 0x1900, 0x40, true, 0x817bde173a154ada)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::pte_chain_head_t), "_MI_PARTITION_SEGMENTS.FreeSystemCache", free_system_cache, 0xdc0, 0xc0, true, 0xbeae1627bf8bc06)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::deferred_pfns_to_free_t, 4>), "_MI_PARTITION_SEGMENTS.FreedSystemCacheViews", freed_system_cache_views, 0x0, 0x0, false, 0x393093d3307f1a22)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::deferred_pfns_to_free_t), "_MI_PARTITION_SEGMENTS.FreedSystemCacheViewsReady", freed_system_cache_views_ready, 0x0, 0x0, false, 0x516a2cfca363aa95)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::deferred_pfns_to_free_t), "_MI_PARTITION_SEGMENTS.FreedSystemCachePdesReady", freed_system_cache_pdes_ready, 0x0, 0x0, false, 0x60b41570edad6d42)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int64_t), "_MI_PARTITION_SEGMENTS.ControlAreaCount", control_area_count, 0x0, 0x0, false, 0x1ba2123445842499)
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
#endif