#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MM_SESSION_SPACE.ReferenceCount", reference_count, 0x0, 0x20, true, 0x662d8540c2d8f2d0)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MM_SESSION_SPACE.LongFlags", long_flags, 0x20, 0x20, true, 0x6f69dc546e0b7b57)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mm::session_space_flags_t), "_MM_SESSION_SPACE.Flags", flags, 0x20, 0x20, true, 0xd6774a88a3e3c9ea)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MM_SESSION_SPACE.SessionId", session_id, 0x40, 0x20, true, 0x9b0dab82a68c2e42)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MM_SESSION_SPACE.ProcessReferenceToSession", process_reference_to_session, 0x60, 0x20, true, 0xa5726038233b054d)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MM_SESSION_SPACE.ProcessList", process_list, 0x80, 0x80, true, 0xf9f96c0174c2a732)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MM_SESSION_SPACE.NonPagablePages", non_pagable_pages, 0x140, 0x40, true, 0x8d1b30d85d571dec)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MM_SESSION_SPACE.CommittedPages", committed_pages, 0x180, 0x40, true, 0x4bac0b9036af8360)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MM_SESSION_SPACE.SessionObject", session_object, 0x240, 0x40, true, 0xff62d275bcfe3e4)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MM_SESSION_SPACE.SessionObjectHandle", session_object_handle, 0x280, 0x40, true, 0x5986d2e4760f70b9)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MM_SESSION_SPACE.ImageTree", image_tree, 0x2c0, 0x40, true, 0x3992161d411f943b)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MM_SESSION_SPACE.LocaleId", locale_id, 0x300, 0x20, true, 0xe567788cfa024cdb)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MM_SESSION_SPACE.AttachCount", attach_count, 0x320, 0x20, true, 0x784f0700506e0cc2)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kgate_t), "_MM_SESSION_SPACE.AttachGate", attach_gate, 0x340, 0xc0, true, 0x70751a572201b0fc)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MM_SESSION_SPACE.WsListEntry", ws_list_entry, 0x400, 0x80, true, 0x3cdceaef0f740ab6)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmsupport_full_t), "_MM_SESSION_SPACE.Vm", vm, 0x800, 0x0, true, 0xb6420385333751c)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmsupport_aggregation_t), "_MM_SESSION_SPACE.AggregateSessionWs", aggregate_session_ws, 0x1400, 0x0, true, 0x2f0647637cf69462)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::session_driver_unload_t), "_MM_SESSION_SPACE.DriverUnload", driver_unload, 0x1540, 0x40, true, 0xf0cc8965f111b36d)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum io::session_state_t), "_MM_SESSION_SPACE.IoState", io_state, 0x1fc0, 0x20, true, 0xe4d2536aa9f43b0e)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MM_SESSION_SPACE.IoStateSequence", io_state_sequence, 0x1fe0, 0x20, true, 0x86586330d4a64612)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MM_SESSION_SPACE.IoNotificationEvent", io_notification_event, 0x2000, 0xc0, true, 0x68377f38ce469c1e)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ejob_t*), "_MM_SESSION_SPACE.ServerSilo", server_silo, 0x20c0, 0x40, true, 0x1b32988d69a16a54)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MM_SESSION_SPACE.CreateTime", create_time, 0x2100, 0x40, true, 0xe4c77db3010e347b)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MM_SESSION_SPACE.SessionPageDirectoryIndex", session_page_directory_index, 0x100, 0x40, true, 0x2fcc5bd633d3a4cb)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MM_SESSION_SPACE.PagedPoolStart", paged_pool_start, 0x1c0, 0x40, true, 0x94d4438940a978dc)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MM_SESSION_SPACE.PagedPoolEnd", paged_pool_end, 0x200, 0x40, true, 0x2a9031de56751b34)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mm::paged_pool_info_t), "_MM_SESSION_SPACE.PagedPoolInfo", paged_pool_info, 0x540, 0xc0, true, 0x4e2f90f1bce3dba4)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmsession_t), "_MM_SESSION_SPACE.Session", session, 0x600, 0x0, true, 0x12df29604dffff50)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t), "_MM_SESSION_SPACE.PageDirectory", page_directory, 0x1980, 0x40, true, 0x5894e84f6ca61a12)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MM_SESSION_SPACE.SessionVaLock", session_va_lock, 0x19c0, 0x40, true, 0x7f8f806bc3e9afa8)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct rtl::bitmap_t, struct rtl::bitmap_ex_t>), "_MM_SESSION_SPACE.DynamicVaBitMap", dynamic_va_bit_map, 0x1a00, 0x80, true, 0xed1a23c4730d994a)
#define _m031 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint64_t), "_MM_SESSION_SPACE.DynamicVaHint", dynamic_va_hint, 0x1a80, 0x40, true, 0x809d93882d6348cb, 0, uint32_t,uint64_t)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_MM_SESSION_SPACE.SessionPteLock", session_pte_lock, 0x1ac0, 0x40, true, 0x939550963ce18952)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MM_SESSION_SPACE.PoolBigEntriesInUse", pool_big_entries_in_use, 0x1b00, 0x20, true, 0x3b4a99c36eb7988f)
#define _m034 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile int32_t), "_MM_SESSION_SPACE.PagedPoolPdeCount", paged_pool_pde_count, 0x1b20, 0x20, true, 0xdfc80cacef3b380c, 32, uint32_t)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MM_SESSION_SPACE.DynamicSessionPdeCount", dynamic_session_pde_count, 0x1b40, 0x20, true, 0x3c968f6d93bfb43e)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::system_pte_type_t), "_MM_SESSION_SPACE.SystemPteInfo", system_pte_info, 0x1b80, 0x0, true, 0x1d8226049a25a8b3)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MM_SESSION_SPACE.PoolTrackTableExpansion", pool_track_table_expansion, 0x1e80, 0x40, true, 0xe7c3318cefd7f45d)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MM_SESSION_SPACE.PoolTrackTableExpansionSize", pool_track_table_expansion_size, 0x1ec0, 0x40, true, 0x25e115dae5042e55)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MM_SESSION_SPACE.PoolTrackBigPages", pool_track_big_pages, 0x1f00, 0x40, true, 0xf17f4c81f13cee2d)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MM_SESSION_SPACE.PoolTrackBigPagesSize", pool_track_big_pages_size, 0x1f40, 0x40, true, 0x1902a8cd0aaab99d)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8192>), "_MM_SESSION_SPACE.PoolTags", pool_tags, 0x8000, 0x0, true, 0x9930961a20ee51a2)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_MM_SESSION_SPACE.WsTreeEntry", ws_tree_entry, 0x480, 0xc0, true, 0xd6aaa93332719da3)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MM_SESSION_SPACE.CombineDomain", combine_domain, 0x700, 0x40, true, 0x1df7a589cb4dbfbc)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmwsl_instance_t), "_MM_SESSION_SPACE.WorkingSetList", working_set_list, 0x1200, 0x40, true, 0xc5734194dce76ba7)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 32>), "_MM_SESSION_SPACE.TopLevelPteLockBits", top_level_pte_lock_bits, 0x1580, 0x0, true, 0x75e28f60ed8ef18d)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MM_SESSION_SPACE.HeapState", heap_state, 0x1500, 0x40, true, 0xe7ccd6cc1e7f132d)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MM_SESSION_SPACE.PermittedFaultsTree", permitted_faults_tree, 0x1f80, 0x40, true, 0x60fab1608b77569e)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_MM_SESSION_SPACE.SessionPoolAllocationFailures", session_pool_allocation_failures, 0x0, 0x0, false, 0x63bc2a2545ba1d)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::general_lookaside_t, 21>), "_MM_SESSION_SPACE.Lookaside", lookaside, 0x0, 0x0, false, 0x1016d756a2fc2646)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pool_descriptor_t), "_MM_SESSION_SPACE.PagedPool", paged_pool, 0x0, 0x0, false, 0xd3ad2d764bd914ce)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::special_pool_t), "_MM_SESSION_SPACE.SpecialPool", special_pool, 0x0, 0x0, false, 0x9ec89d7fc741ee33)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MM_SESSION_SPACE.SpecialPoolPdeCount", special_pool_pde_count, 0x0, 0x0, false, 0x6d132031b4ae2eaa)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::eprocess_t*, 2>), "_MM_SESSION_SPACE.AttachersUsingPxeCopies", attachers_using_pxe_copies, 0x0, 0x0, false, 0x2f365017ca328da)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::mmpte_t, 1>), "_MM_SESSION_SPACE.PageTables", page_tables, 0x0, 0x0, false, 0x841e981b7717ea75)
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
#endif