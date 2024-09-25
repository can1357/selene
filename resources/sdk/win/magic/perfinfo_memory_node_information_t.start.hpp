#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_MEMORY_NODE_INFORMATION.PartitionId", partition_id, 0x0, 0x20, true, 0x5e29aded80324973)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_MEMORY_NODE_INFORMATION.Count", count, 0x20, 0x20, true, 0x843efc448945568)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct win::perfinfo_memory_node_entry_t, 1>), "_PERFINFO_MEMORY_NODE_INFORMATION.NodeEntry", node_entry, 0x40, 0x60, true, 0xa4012c7a78827f1c)
#else
#define _m00
#define _m01
#define _m02
#endif