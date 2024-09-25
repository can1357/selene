#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_QUERYENGINESTATUS.NodeOrdinal", node_ordinal, 0x0, 0x20, true, 0xca065b98ab2186a3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_QUERYENGINESTATUS.EngineOrdinal", engine_ordinal, 0x20, 0x20, true, 0x8475f7458be49095)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::enginestatus_t), "_DXGKARG_QUERYENGINESTATUS.EngineStatus", engine_status, 0x40, 0x20, true, 0x5d3f893c1ae45fe8)
#else
#define _m00
#define _m01
#define _m02
#endif