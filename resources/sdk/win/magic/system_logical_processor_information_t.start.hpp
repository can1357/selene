#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION.ProcessorMask", processor_mask, 0x0, 0x40, true, 0x73b12865c8d70ef7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::logical_processor_relationship_t), "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION.Relationship", relationship, 0x40, 0x20, true, 0xb0ed00da95b06516)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION.ProcessorCore.Flags", flags, 0x0, 0x8, true, 0xdcaf20f93a9e71bf)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_processor_core_t), "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION.ProcessorCore", processor_core, 0x80, 0x8, true, 0x9028fb9c9e83175)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION.NumaNode.NodeNumber", node_number, 0x0, 0x20, true, 0xb9a40639e8947d7c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_numa_node_t), "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION.NumaNode", numa_node, 0x80, 0x20, true, 0xfee0a1d1d537f930)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::cache_descriptor_t), "_SYSTEM_LOGICAL_PROCESSOR_INFORMATION.Cache", cache, 0x80, 0x60, true, 0xafe49497615b2080)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif