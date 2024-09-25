#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_NUMA_NODE_RELATIONSHIP.NodeNumber", node_number, 0x0, 0x20, true, 0x16cc515ba1490ca8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::group_affinity_t), "_NUMA_NODE_RELATIONSHIP.GroupMask", group_mask, 0xc0, 0x80, true, 0x62eb0b60d903bb56)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_NUMA_NODE_RELATIONSHIP.GroupCount", group_count, 0xb0, 0x10, true, 0xc33d0de1cb77f785)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::group_affinity_t, 1>), "_NUMA_NODE_RELATIONSHIP.GroupMasks", group_masks, 0xc0, 0x80, true, 0xc93f61227279e038)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif