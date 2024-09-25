#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_NODE_INFORMATION.NumaNodeCount", numa_node_count, 0x0, 0x20, true, 0x54257b9032ce1957)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_PARTITION_NODE_INFORMATION.Flags", flags, 0x20, 0x20, true, 0x1d9f9c2705996b35)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pmemory_partition_node_page_information_t ), "_MEMORY_PARTITION_NODE_INFORMATION.NodePageInformation", node_page_information, 0x40, 0x40, true, 0x311ffda8bb5798e4)
#else
#define _m00
#define _m01
#define _m02
#endif