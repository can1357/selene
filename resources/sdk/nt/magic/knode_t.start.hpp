#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KNODE.NodeNumber", node_number, 0x490, 0x10, true, 0x24ff0a330dafd5bf)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KNODE.PrimaryNodeNumber", primary_node_number, 0x4a0, 0x10, true, 0x58b563be1587b542)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KNODE.ProximityId", proximity_id, 0x540, 0x20, true, 0x30f62d15ed8146b2)
#define _m003 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_KNODE.MaximumProcessors", maximum_processors, 0x5a0, 0x8, true, 0x14864d87e300a650, 0, uint8_t,uint16_t)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct nt::flags_t, u0_flags_t>), "_KNODE.Flags", flags, 0x5a8, 0x8, true, 0xca2493b97c6bc589)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KNODE.IdleNonParkedCpuSet", idle_non_parked_cpu_set, 0x0, 0x40, true, 0x55c6bc2de89a71ad)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KNODE.IdleSmtSet", idle_smt_set, 0x40, 0x40, true, 0x92766edb1d942b89)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KNODE.IdleCpuSet", idle_cpu_set, 0xc0, 0x40, true, 0xd6437082514423f9)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KNODE.DeepIdleSet", deep_idle_set, 0x200, 0x40, true, 0xd43c1ac713c7debd)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KNODE.IdleConstrainedSet", idle_constrained_set, 0x240, 0x40, true, 0xa6c801ce72b1b7a3)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KNODE.NonParkedSet", non_parked_set, 0x280, 0x40, true, 0x7239f932e6818b80)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_KNODE.ParkLock", park_lock, 0x340, 0x20, true, 0x30b1f73d894774b9)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KNODE.SiblingMask", sibling_mask, 0x400, 0x20, true, 0x3dbf72627d00f5b3)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t), "_KNODE.Affinity", affinity, 0x440, 0x80, true, 0x712529ae8651bfb5)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 10>), "_KNODE.AffinityFill", affinity_fill, 0x440, 0x50, true, 0xfef7db5bf7096708)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KNODE.Lowest", lowest, 0x560, 0x20, true, 0x26f2202ff235017d)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KNODE.Highest", highest, 0x580, 0x20, true, 0xfca4d2fb65692d5e)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::khetero_processor_set_t, 5>), "_KNODE.HeteroSets", hetero_sets, 0x5c0, 0xc0, true, 0x71b22e4414d617d)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KNODE.NonPairedSmtSet", non_paired_smt_set, 0x80, 0x40, true, 0xcec7c5217cb0a251)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KNODE.SoftParkedSet", soft_parked_set, 0x2c0, 0x40, true, 0x87b06b88f2062f7b)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KNODE.NonIsrTargetedSet", non_isr_targeted_set, 0x300, 0x40, true, 0xd4e96f0368afa36a)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KNODE.ThreadSeed", thread_seed, 0x360, 0x10, true, 0x35b96fe83c0e12e8)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KNODE.ProcessSeed", process_seed, 0x370, 0x10, true, 0x3811934d462bc3a1)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KNODE.SharedReadyQueueMask", shared_ready_queue_mask, 0x4c0, 0x40, true, 0xcc1726f43d139e22)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KNODE.StrideMask", stride_mask, 0x500, 0x40, true, 0x1009c8648ad1570)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 5>), "_KNODE.PpmConfiguredQosSets", ppm_configured_qos_sets, 0x980, 0x40, true, 0xce9fe4295acddeeb)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::kqos_grouping_sets_t), "_KNODE.QosGroupingSets", qos_grouping_sets, 0xb00, 0x80, true, 0x2a12694f3fc532f5)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KNODE.QosPreemptibleSet", qos_preemptible_set, 0xb80, 0x40, true, 0xffb405e1e0e21f31)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KNODE.LLCLeaders", llc_leaders, 0xbc0, 0x40, true, 0x2c55ec794205a970)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KNODE.Seed", seed, 0x0, 0x0, false, 0x25172cf4ae51bd91)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KNODE.Stride", stride, 0x0, 0x0, false, 0x227b6fcd24b1b9d)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KNODE.SharedReadyQueueLeaders", shared_ready_queue_leaders, 0x0, 0x0, false, 0x320a564b303dffcf)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KNODE.GroupSeed", group_seed, 0x0, 0x0, false, 0xc8a3a92c0e8fdea7)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KNODE.PrimaryGroup", primary_group, 0x0, 0x0, false, 0x60a6893c53e6880)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KNODE.ActiveGroups", active_groups, 0x0, 0x0, false, 0x297a794b11044ba5)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::kscheduler_subnode_t*, 32>), "_KNODE.SchedulerSubNodes", scheduler_sub_nodes, 0x0, 0x0, false, 0xeda77274ee82d08c)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 5>), "_KNODE.ActiveTopologyElements", active_topology_elements, 0x0, 0x0, false, 0xf647036fe9c6a3e3)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KNODE.Flags.ProcessorOnly", processor_only, 0x0, 0x0, false, 0x8d789c14c9bbb4a4, 1, uint8_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KNODE.Flags.GroupsAssigned", groups_assigned, 0x0, 0x0, false, 0x147a3f9072dc4703, 1, uint8_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KNODE.Flags.MeasurableDistance", measurable_distance, 0x0, 0x0, false, 0x9382178999cefa3d, 1, uint8_t)
#else
#define _m000
#define _m001
#define _m002
#define _m003
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
#define _m04
#define _m05
#define _m06
#endif