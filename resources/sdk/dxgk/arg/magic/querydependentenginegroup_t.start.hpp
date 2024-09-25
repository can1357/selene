#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_QUERYDEPENDENTENGINEGROUP.NodeOrdinal", node_ordinal, 0x0, 0x20, true, 0x667c22578e2c5e82)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_QUERYDEPENDENTENGINEGROUP.EngineOrdinal", engine_ordinal, 0x20, 0x20, true, 0x938fa7e77de3a2de)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_QUERYDEPENDENTENGINEGROUP.DependentNodeOrdinalMask", dependent_node_ordinal_mask, 0x40, 0x40, true, 0xdaaabab251d14ea0)
#else
#define _m00
#define _m01
#define _m02
#endif