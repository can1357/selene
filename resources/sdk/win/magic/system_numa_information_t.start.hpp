#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_NUMA_INFORMATION.HighestNodeNumber", highest_node_number, 0x0, 0x20, true, 0xb0f93e84dcde75c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::group_affinity_t, 64>), "_SYSTEM_NUMA_INFORMATION.ActiveProcessorsGroupAffinity", active_processors_group_affinity, 0x40, 0x0, true, 0xa4307cee6031824f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 64>), "_SYSTEM_NUMA_INFORMATION.AvailableMemory", available_memory, 0x40, 0x0, true, 0x212ece2d7a0f6ab)
#else
#define _m00
#define _m01
#define _m02
#endif