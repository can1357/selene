#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kscheduling_group_policy_t), "_KSCHEDULING_GROUP.Policy", policy, 0x0, 0x40, true, 0x7ff21d8cb69f67c7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSCHEDULING_GROUP.RelativeWeight", relative_weight, 0x40, 0x20, true, 0xe4a286503a597546)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSCHEDULING_GROUP.ChildMinRate", child_min_rate, 0x60, 0x20, true, 0x932918b222eed042)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSCHEDULING_GROUP.ChildMinWeight", child_min_weight, 0x80, 0x20, true, 0xd57887b9df335e2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSCHEDULING_GROUP.ChildTotalWeight", child_total_weight, 0xa0, 0x20, true, 0x3fa91aaa537b1e19)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCHEDULING_GROUP.QueryHistoryTimeStamp", query_history_time_stamp, 0xc0, 0x40, true, 0x4311e06020db906e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_KSCHEDULING_GROUP.NotificationCycles", notification_cycles, 0x100, 0x40, true, 0x42fa81339d6a2219)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_KSCHEDULING_GROUP.MaxQuotaLimitCycles", max_quota_limit_cycles, 0x140, 0x40, true, 0x2f1827736f4648ae)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int64_t), "_KSCHEDULING_GROUP.MaxQuotaCyclesRemaining", max_quota_cycles_remaining, 0x180, 0x40, true, 0x8f4e129a8a00efb7)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KSCHEDULING_GROUP.SchedulingGroupList", scheduling_group_list, 0x1c0, 0x80, true, 0x94ff1a275c129a66)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KSCHEDULING_GROUP.Sibling", sibling, 0x1c0, 0x80, true, 0x6b5d31b55388473e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t*), "_KSCHEDULING_GROUP.NotificationDpc", notification_dpc, 0x240, 0x40, true, 0x36d0b3df50fd1533)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KSCHEDULING_GROUP.ChildList", child_list, 0x280, 0x80, true, 0xae4bf4bf887af1ee)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kscheduling_group_t*), "_KSCHEDULING_GROUP.Parent", parent, 0x300, 0x40, true, 0x7fde30e151abe250)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::kscb_t, 1>), "_KSCHEDULING_GROUP.PerProcessor", per_processor, 0x400, 0x40, true, 0x598d5032a160b40c)
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
#endif