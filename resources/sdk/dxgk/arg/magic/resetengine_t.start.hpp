#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RESETENGINE.NodeOrdinal", node_ordinal, 0x0, 0x20, true, 0x2970bac30b9e8f7f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RESETENGINE.EngineOrdinal", engine_ordinal, 0x20, 0x20, true, 0x46e37dbaa5126727)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RESETENGINE.LastAbortedFenceId", last_aborted_fence_id, 0x40, 0x20, true, 0x14b40462c16bb783)
#else
#define _m00
#define _m01
#define _m02
#endif