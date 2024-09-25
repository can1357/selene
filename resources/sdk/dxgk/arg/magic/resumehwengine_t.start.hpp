#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RESUMEHWENGINE.NodeOrdinal", node_ordinal, 0x0, 0x20, true, 0x116d0a9dc64d937a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RESUMEHWENGINE.EngineOrdinal", engine_ordinal, 0x20, 0x20, true, 0x422511f4935aab7d)
#else
#define _m00
#define _m01
#endif