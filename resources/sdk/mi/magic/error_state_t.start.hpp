#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::bad_memory_event_entry_t), "_MI_ERROR_STATE.BadMemoryEventEntry", bad_memory_event_entry, 0x0, 0xc0, true, 0x3a5516130c7df3be)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::probe_raise_tracker_t), "_MI_ERROR_STATE.ProbeRaises", probe_raises, 0x200, 0x20, true, 0x4f50623551b99f44)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::forced_commits_t), "_MI_ERROR_STATE.ForcedCommits", forced_commits, 0x420, 0x40, true, 0x1dbda7376bea64f)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<uint32_t, 2>, uint32_t>), "_MI_ERROR_STATE.WsleFailures", wsle_failures, 0x460, 0x20, true, 0x56138cbac94b7ea4)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_ERROR_STATE.CheckZeroCount", check_zero_count, 0x4a0, 0x20, true, 0xaa4f6b79828bab6c)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_ERROR_STATE.ZeroedPageSingleBitErrorsDetected", zeroed_page_single_bit_errors_detected, 0x4c0, 0x20, true, 0x38ef2b1808bf1e37)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_ERROR_STATE.BadPagesDetected", bad_pages_detected, 0x4e0, 0x20, true, 0xadc6def04ca1e209)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MI_ERROR_STATE.ScrubPasses", scrub_passes, 0x500, 0x20, true, 0xfa29fff89f866a16)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MI_ERROR_STATE.ScrubBadPagesFound", scrub_bad_pages_found, 0x520, 0x20, true, 0x80c14b1164bfd537)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_ERROR_STATE.UserViewFailures", user_view_failures, 0x540, 0x20, true, 0x6bf942dd52725704)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_ERROR_STATE.UserViewCollisionFailures", user_view_collision_failures, 0x560, 0x20, true, 0xcaa560fe29a8a342)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::resavail_failures_t), "_MI_ERROR_STATE.ResavailFailures", resavail_failures, 0x5c0, 0x40, true, 0x613fd7ebfd8be3e4)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_ERROR_STATE.PendingBadPages", pending_bad_pages, 0x600, 0x8, true, 0xbfa649a16435717f)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_ERROR_STATE.InitFailure", init_failure, 0x610, 0x8, true, 0xb6a00aa9970592ab)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_ERROR_STATE.PageHashErrors", page_hash_errors, 0x480, 0x20, true, 0xaebe7bcb0d11a7b2)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_ERROR_STATE.StopBadMaps", stop_bad_maps, 0x618, 0x8, true, 0xd66989232d068ff4)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_ERROR_STATE.UserAllocateFailures", user_allocate_failures, 0x580, 0x20, true, 0x63da9f06e4a2c5d4)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_ERROR_STATE.UserAllocateCollisionFailures", user_allocate_collision_failures, 0x5a0, 0x20, true, 0x7895cb7d0b7fd182)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_ERROR_STATE.FatalGraphicsFailures", fatal_graphics_failures, 0x608, 0x8, true, 0x446e71dab62e17ca)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_ERROR_STATE.PageOfInterest", page_of_interest, 0x1c0, 0x40, true, 0x334d2a2f40f9ac1f)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_ERROR_STATE.PrePhase0BugCheckParameter", pre_phase0_bug_check_parameter, 0x0, 0x0, false, 0x90f3ae94a1570f02)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_ERROR_STATE.BadPagesInsertSignalState", bad_pages_insert_signal_state, 0x0, 0x0, false, 0x40617d7381468e3c)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum mi::page_hash_error_behavior_t), "_MI_ERROR_STATE.PageHashErrorBehavior", page_hash_error_behavior, 0x0, 0x0, false, 0xcf04b5d328ded25e)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_ERROR_STATE.PageHashReadErrors", page_hash_read_errors, 0x0, 0x0, false, 0xabccfc56e0c909c4)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_ERROR_STATE.PageHashStandbyErrors", page_hash_standby_errors, 0x0, 0x0, false, 0xcde497065e323dbe)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_ERROR_STATE.PageHashTransferErrors", page_hash_transfer_errors, 0x0, 0x0, false, 0x9f908cddc88639a7)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_ERROR_STATE.PageHashAllocationErrors", page_hash_allocation_errors, 0x0, 0x0, false, 0x34628759eaa55aa)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_ERROR_STATE.FailedHashPageFrameIndex", failed_hash_page_frame_index, 0x0, 0x0, false, 0x30dd76f1f157ed59)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_ERROR_STATE.BadPagesInserted", bad_pages_inserted, 0x0, 0x0, false, 0x653e3a7574a8dfac)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_MI_ERROR_STATE.BadPageInsertWorkItem", bad_page_insert_work_item, 0x0, 0x0, false, 0xd54f4b6a50667891)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_ERROR_STATE.BadPhysicalMapsEarly", bad_physical_maps_early, 0x0, 0x0, false, 0x86a1b42f75942add)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_ERROR_STATE.BadPhysicalMaps", bad_physical_maps, 0x0, 0x0, false, 0xc321162271b6a18)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_ERROR_STATE.WsLinear", ws_linear, 0x0, 0x0, false, 0x1910f031b2fd0d86)
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
#endif