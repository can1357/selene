#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_QUERYCURRENTFENCE.CurrentFence", current_fence, 0x0, 0x20, true, 0x8ac2311811b8244f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_QUERYCURRENTFENCE.NodeOrdinal", node_ordinal, 0x20, 0x20, true, 0x80fa51ce0cd69490)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_QUERYCURRENTFENCE.EngineOrdinal", engine_ordinal, 0x40, 0x20, true, 0x7380f27b94f65251)
#else
#define _m00
#define _m01
#define _m02
#endif