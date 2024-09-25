#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::logical_processor_relationship_t), "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX.Relationship", relationship, 0x0, 0x20, true, 0xefcc4951f14999f3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX.Size", size, 0x20, 0x20, true, 0x30b1ebb576dcebcb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::processor_relationship_t), "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX.Processor", processor, 0x40, 0x40, true, 0xf9670276882b85e7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::numa_node_relationship_t), "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX.NumaNode", numa_node, 0x40, 0x40, true, 0x1825317f3f944a0e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::cache_relationship_t), "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX.Cache", cache, 0x40, 0x80, true, 0x2c426a3d77864574)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::group_relationship_t), "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX.Group", group, 0x40, 0x40, true, 0x625fc7ad3c57356c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif