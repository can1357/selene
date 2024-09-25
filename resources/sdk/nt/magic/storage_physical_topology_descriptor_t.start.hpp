#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PHYSICAL_TOPOLOGY_DESCRIPTOR.Version", version, 0x0, 0x20, true, 0xae9f9a78c7ffbe63)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PHYSICAL_TOPOLOGY_DESCRIPTOR.Size", size, 0x20, 0x20, true, 0xb5facec9cd3ab8a0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_PHYSICAL_TOPOLOGY_DESCRIPTOR.NodeCount", node_count, 0x40, 0x20, true, 0xa638c015a14c3649)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::storage_physical_node_data_t, 1>), "_STORAGE_PHYSICAL_TOPOLOGY_DESCRIPTOR.Node", node, 0x80, 0x40, true, 0x85662d1562590457)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif