#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_POOL_STATE.MaximumNonPagedPoolThreshold", maximum_non_paged_pool_threshold, 0x0, 0x40, true, 0x2bad2d96612aeac2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_POOL_STATE.AllocatedNonPagedPool", allocated_non_paged_pool, 0x40, 0x40, true, 0xb38c1b76032e04fb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_POOL_STATE.HighEventSets", high_event_sets, 0x100, 0x20, true, 0xdfcc0db7e33f36fa)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_POOL_STATE.HighEventSetsValid", high_event_sets_valid, 0x120, 0x8, true, 0x8fc4d1f8dd569fdc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_POOL_STATE.LowPagedPoolThreshold", low_paged_pool_threshold, 0x140, 0x40, true, 0x9f1129ab2bae335f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_POOL_STATE.HighPagedPoolThreshold", high_paged_pool_threshold, 0x180, 0x40, true, 0x2d447552024bc83f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_POOL_STATE.TotalPagedPoolQuota", total_paged_pool_quota, 0x4c0, 0x40, true, 0x5342cd713c086ec8)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_POOL_STATE.TotalNonPagedPoolQuota", total_non_paged_pool_quota, 0x500, 0x40, true, 0x8862b4b14f1f1401)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_POOL_STATE.AllocatedSecureNonPagedPool", allocated_secure_non_paged_pool, 0x80, 0x40, true, 0xf5e3766a0fbbfa93)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_POOL_STATE.PermittedFaultsLock", permitted_faults_lock, 0x1c0, 0x20, true, 0x81796e7e908f4fc4)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::avl_tree_t), "_MI_POOL_STATE.PermittedFaultsTree", permitted_faults_tree, 0x200, 0x40, true, 0xd860002b4f6c3497)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct mi::access_violation_range_t, 2>), "_MI_POOL_STATE.PermittedFaultsInitialNode", permitted_faults_initial_node, 0x240, 0x80, true, 0x5baf4c17ad744ef9)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_MI_POOL_STATE.BadPoolHead", bad_pool_head, 0xc0, 0x40, true, 0x26df1e92d71aa22b)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 3>), "_MI_POOL_STATE.NonPagedPoolSListMaximum", non_paged_pool_s_list_maximum, 0x0, 0x0, false, 0x3ec09a9f6672f382)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint32_t, 3>, 3>), "_MI_POOL_STATE.PoolFailures", pool_failures, 0x0, 0x0, false, 0xc1004766ae87265c)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::pool_failure_reasons_t), "_MI_POOL_STATE.PoolFailureReasons", pool_failure_reasons, 0x0, 0x0, false, 0xa5c5126c41ae2289)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_POOL_STATE.PagedPoolSListMaximum", paged_pool_s_list_maximum, 0x0, 0x0, false, 0x24dc00446100711a)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 4>), "_MI_POOL_STATE.PreemptiveTrims", preemptive_trims, 0x0, 0x0, false, 0xf0352327c8b76300)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_POOL_STATE.SpecialPagesInUsePeak", special_pages_in_use_peak, 0x0, 0x0, false, 0x470a7f9f4c887da0)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 9>), "_MI_POOL_STATE.SpecialPoolRejected", special_pool_rejected, 0x0, 0x0, false, 0xd4818825b334c21b)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_MI_POOL_STATE.SpecialPagesNonPaged", special_pages_non_paged, 0x0, 0x0, false, 0x5e3b82c2008bee1f)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_POOL_STATE.SpecialPoolPdes", special_pool_pdes, 0x0, 0x0, false, 0x3a784bf2a4e0f18b)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_POOL_STATE.SessionSpecialPoolPdesMax", session_special_pool_pdes_max, 0x0, 0x0, false, 0x782bec33f5681b9b)
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
#endif