#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSHARED_READY_QUEUE.Lock", lock, 0x0, 0x40, true, 0x98415327ab1b0504)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSHARED_READY_QUEUE.ReadySummary", ready_summary, 0x40, 0x20, true, 0x8807c877a2815b36)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<nt::list_entry_t, 32>), "_KSHARED_READY_QUEUE.ReadyListHead", ready_list_head, 0x80, 0x0, true, 0x68c23f7e90a3f7f3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<char, 64>, sdk::array<union nt::kpriority_state_t, 64>>), "_KSHARED_READY_QUEUE.RunningSummary", running_summary, 0x1080, 0x0, true, 0x3e3c7e04ee45eb0b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KSHARED_READY_QUEUE.Span", span, 0x1280, 0x8, true, 0x4b5c73ecfe317779)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KSHARED_READY_QUEUE.LowProcIndex", low_proc_index, 0x1288, 0x8, true, 0x3ca9c561e0316903)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KSHARED_READY_QUEUE.QueueIndex", queue_index, 0x1290, 0x8, true, 0x847cfefa62d12ee9)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KSHARED_READY_QUEUE.ProcCount", proc_count, 0x1298, 0x8, true, 0xd94b87b02d436def)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KSHARED_READY_QUEUE.ScanOwner", scan_owner, 0x12a0, 0x8, true, 0x4cdb0d6f82f4e700)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSHARED_READY_QUEUE.Affinity", affinity, 0x12c0, 0x40, true, 0x201f82ab4410e7d6)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KSHARED_READY_QUEUE.ReadyThreadCount", ready_thread_count, 0x1300, 0x20, true, 0xb6ffc6af3564723b)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSHARED_READY_QUEUE.ReadyQueueExpectedRunTime", ready_queue_expected_run_time, 0x1340, 0x40, true, 0xb78b02c23b45a7fb)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<union nt::khetero_state_t, 64>), "_KSHARED_READY_QUEUE.HeteroRunningSummary", hetero_running_summary, 0x0, 0x0, false, 0x81786d686c52dc02)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KSHARED_READY_QUEUE.NormalPriorityQueueIndex", normal_priority_queue_index, 0x0, 0x0, false, 0x2edbc5878378c388)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KSHARED_READY_QUEUE.SoftParkElectionScheduled", soft_park_election_scheduled, 0x0, 0x0, false, 0xc12deb4f0602bdc6)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSHARED_READY_QUEUE.SoftParkElectionGeneration", soft_park_election_generation, 0x0, 0x0, false, 0x618dd342dc1c861b)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KSHARED_READY_QUEUE.SoftParkElectionRunTime", soft_park_election_run_time, 0x0, 0x0, false, 0x2a28a4c2956fd578)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_KSHARED_READY_QUEUE.SoftParkElectionDpc", soft_park_election_dpc, 0x0, 0x0, false, 0x67209b8110ed096f)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kshared_ready_queue_hetero_statistics_t), "_KSHARED_READY_QUEUE.SoftParkElectionHeteroStats", soft_park_election_hetero_stats, 0x0, 0x0, false, 0x529afd93614d053f)
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
#endif