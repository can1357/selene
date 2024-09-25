#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCHEDULER_SUBNODE.SubNodeLock", sub_node_lock, 0x0, 0x0, false, 0x5f059fbfed27ea2b)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCHEDULER_SUBNODE.IdleNonParkedCpuSet", idle_non_parked_cpu_set, 0x0, 0x0, false, 0x645fd69bc8628c85)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCHEDULER_SUBNODE.IdleCpuSet", idle_cpu_set, 0x0, 0x0, false, 0xe217ce0d9079b9e8)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCHEDULER_SUBNODE.IdleSmtSet", idle_smt_set, 0x0, 0x0, false, 0xd872f7db9f74195c)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCHEDULER_SUBNODE.IdleModuleSet", idle_module_set, 0x0, 0x0, false, 0x3f3e1737ef225e9)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_KSCHEDULER_SUBNODE.IdleIsolationUnitSet", idle_isolation_unit_set, 0x0, 0x0, false, 0x51621b36c09e56cf)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCHEDULER_SUBNODE.NonPairedSmtSet", non_paired_smt_set, 0x0, 0x0, false, 0xbf38db318a656a6e)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCHEDULER_SUBNODE.DeepIdleSet", deep_idle_set, 0x0, 0x0, false, 0x3f0ff3b7b7aa66be)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCHEDULER_SUBNODE.IdleConstrainedSet", idle_constrained_set, 0x0, 0x0, false, 0x5e0802e386bee75)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCHEDULER_SUBNODE.NonParkedSet", non_parked_set, 0x0, 0x0, false, 0x309c90632f9b322d)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCHEDULER_SUBNODE.ParkRequestSet", park_request_set, 0x0, 0x0, false, 0xfab6aabd28e3d372)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCHEDULER_SUBNODE.SoftParkRequestSet", soft_park_request_set, 0x0, 0x0, false, 0xd37378c08ccc1bca)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCHEDULER_SUBNODE.NonIsrTargetedSet", non_isr_targeted_set, 0x0, 0x0, false, 0xa6b6c954be233b13)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_KSCHEDULER_SUBNODE.ParkLock", park_lock, 0x0, 0x0, false, 0x937d7c81ad7c1808)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KSCHEDULER_SUBNODE.ProcessSeed", process_seed, 0x0, 0x0, false, 0x8ce83fac69e64598)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t), "_KSCHEDULER_SUBNODE.Affinity", affinity, 0x0, 0x0, false, 0x3a108b4a6ae87812)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 10>), "_KSCHEDULER_SUBNODE.AffinityFill", affinity_fill, 0x0, 0x0, false, 0xd2cbbec5f1f53880)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KSCHEDULER_SUBNODE.ParentNodeNumber", parent_node_number, 0x0, 0x0, false, 0x3c7096b1cb98c071)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KSCHEDULER_SUBNODE.SubNodeNumber", sub_node_number, 0x0, 0x0, false, 0xa98fe7fbfacf19ac)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCHEDULER_SUBNODE.SiblingMask", sibling_mask, 0x0, 0x0, false, 0x8291535717ba67cb)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCHEDULER_SUBNODE.SharedReadyQueueMask", shared_ready_queue_mask, 0x0, 0x0, false, 0x8ee1ea8791b8932d)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCHEDULER_SUBNODE.StrideMask", stride_mask, 0x0, 0x0, false, 0x640b52ee0859b183)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSCHEDULER_SUBNODE.LLCLeaders", llc_leaders, 0x0, 0x0, false, 0x4c078780ad1e9b4c)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSCHEDULER_SUBNODE.Lowest", lowest, 0x0, 0x0, false, 0xe1e6db7c238d36fc)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSCHEDULER_SUBNODE.Highest", highest, 0x0, 0x0, false, 0xbd15cac2f86746e5)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::flags_t), "_KSCHEDULER_SUBNODE.Flags", flags, 0x0, 0x0, false, 0xa06f8ce856682bb6)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KSCHEDULER_SUBNODE.WorkloadClasses", workload_classes, 0x0, 0x0, false, 0x5ef48ca4c9adc820)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::khetero_processor_set_t*), "_KSCHEDULER_SUBNODE.HeteroSets", hetero_sets, 0x0, 0x0, false, 0xdea982379a2f2c0c)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 7>), "_KSCHEDULER_SUBNODE.PpmConfiguredQosSets", ppm_configured_qos_sets, 0x0, 0x0, false, 0xb4d75986b6cf7562)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::kqos_grouping_sets_t), "_KSCHEDULER_SUBNODE.QosGroupingSets", qos_grouping_sets, 0x0, 0x0, false, 0x32535cd3190873db)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 64>), "_KSCHEDULER_SUBNODE.SoftParkRanks", soft_park_ranks, 0x0, 0x0, false, 0x3a31cfef41adac3a)
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
#endif