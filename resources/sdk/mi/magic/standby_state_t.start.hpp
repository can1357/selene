#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_STANDBY_STATE.FirstDecayPage", first_decay_page, 0x0, 0x40, true, 0xbdbcc4b6e2b4af99)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_MI_STANDBY_STATE.PfnDecayFreeSList", pfn_decay_free_s_list, 0x80, 0x80, true, 0x207c1d56965fbf56)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mm::page_access_info_header_t*), "_MI_STANDBY_STATE.PfnRepurposeLog", pfn_repurpose_log, 0x100, 0x40, true, 0x868818c6398d5211)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_MI_STANDBY_STATE.AllocatePfnRepurposeDpc", allocate_pfn_repurpose_dpc, 0x140, 0x0, true, 0xb17925272f3850fe)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_MI_STANDBY_STATE.PageHeatListSlist", page_heat_list_slist, 0x380, 0x80, true, 0xb32f7c759e89c976)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_STANDBY_STATE.PageHeatListDisableAllocation", page_heat_list_disable_allocation, 0x400, 0x20, true, 0x6f6ec0d3711034d6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_STANDBY_STATE.TransitionSharedPages", transition_shared_pages, 0x0, 0x0, false, 0x2a556a834111b781)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 3>), "_MI_STANDBY_STATE.TransitionSharedPagesPeak", transition_shared_pages_peak, 0x0, 0x0, false, 0x9a8b45c3976b0e58)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_STANDBY_STATE.DecayPfnLock", decay_pfn_lock, 0x0, 0x0, false, 0x452e9f69b28a8fa)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::bitmap_t), "_MI_STANDBY_STATE.DecayPfnsToBeFreed", decay_pfns_to_be_freed, 0x0, 0x0, false, 0xd786efcc94456e2f)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 64>), "_MI_STANDBY_STATE.DecayPfnsToBeFreedBuffer", decay_pfns_to_be_freed_buffer, 0x0, 0x0, false, 0x3cb52c82f1037cfb)
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
#endif