#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RESETHWENGINE.NodeOrdinal", node_ordinal, 0x0, 0x20, true, 0xfd7ac369f5ff44e4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RESETHWENGINE.EngineOrdinal", engine_ordinal, 0x20, 0x20, true, 0xfab12288f121262c)
#else
#define _m00
#define _m01
#endif