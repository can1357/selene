#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCB.GenerationCycles", generation_cycles, 0x0, 0x40, true, 0x681f920515f92d7)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCB.MinQuotaCycleTarget", min_quota_cycle_target, 0x40, 0x40, true, 0xb9aa60b0e98d4314)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCB.MaxQuotaCycleTarget", max_quota_cycle_target, 0x80, 0x40, true, 0xde60cdb3e33bfd8a)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCB.RankCycleTarget", rank_cycle_target, 0xc0, 0x40, true, 0x654eb4ce83f50ae6)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCB.LongTermCycles", long_term_cycles, 0x100, 0x40, true, 0xfb9da5657566a320)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCB.LastReportedCycles", last_reported_cycles, 0x140, 0x40, true, 0x24430266f04a0713)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_KSCB.OverQuotaHistory", over_quota_history, 0x180, 0x40, true, 0x9429d79baaedc168)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCB.ReadyTime", ready_time, 0x1c0, 0x40, true, 0x8b58cf5a499ef549)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCB.InsertTime", insert_time, 0x200, 0x40, true, 0x5cc5047619b95082)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KSCB.PerProcessorList", per_processor_list, 0x240, 0x80, true, 0x7c50ffc099c0c371)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::balanced_node_t), "_KSCB.QueueNode", queue_node, 0x2c0, 0xc0, true, 0xb40f5e937121a1f2)
#define _m011 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KSCB.Inserted", inserted, 0x380, 0x1, true, 0x43bcddf5106a3e08, 1, uint8_t)
#define _m012 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KSCB.MaxOverQuota", max_over_quota, 0x381, 0x1, true, 0x378d7bc5efa45bbb, 1, uint8_t)
#define _m013 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KSCB.MinOverQuota", min_over_quota, 0x382, 0x1, true, 0xcd2926dfb7ee12d1, 1, uint8_t)
#define _m014 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KSCB.RankBias", rank_bias, 0x383, 0x1, true, 0xbad10d57907f714c, 1, uint8_t)
#define _m015 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KSCB.ShareRankOwner", share_rank_owner, 0x385, 0x1, true, 0x8d12535a9c22f438, 1, uint8_t)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KSCB.Depth", depth, 0x388, 0x8, true, 0x57c3e101b4fa2664)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KSCB.ReadySummary", ready_summary, 0x390, 0x10, true, 0x8b47e5e978118e17)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSCB.Rank", rank, 0x3a0, 0x20, true, 0x8a17513ab8b52770)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t*), "_KSCB.ShareRank", share_rank, 0x3c0, 0x40, true, 0xa82b752c8418c73e)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_KSCB.OwnerShareRank", owner_share_rank, 0x400, 0x20, true, 0xcde98801a4b16198)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<nt::list_entry_t, 16>), "_KSCB.ReadyListHead", ready_list_head, 0x440, 0x0, true, 0x22894454dadd8bd8)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::rb_tree_t), "_KSCB.ChildScbQueue", child_scb_queue, 0xc40, 0x80, true, 0x223ba893cd125874)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kscb_t*), "_KSCB.Parent", parent, 0xcc0, 0x40, true, 0xb170afb3b96f66a3)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kscb_t*), "_KSCB.Root", root, 0xd00, 0x40, true, 0xaefa170aaf90075e)
#define _m025 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KSCB.SoftCap", soft_cap, 0x384, 0x1, true, 0xd515ab0c68b5f544, 1, uint8_t)
#define _m026 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KSCB.UnconstrainedMaxQuota", unconstrained_max_quota, 0x0, 0x0, false, 0x5f3d8f83604bf1e0, 1, uint8_t)
#define _m027 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KSCB.UnconstrainedMinQuota", unconstrained_min_quota, 0x0, 0x0, false, 0x9b5b9527f90fed45, 1, uint8_t)
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
#endif