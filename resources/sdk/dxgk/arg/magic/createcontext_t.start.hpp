#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_CREATECONTEXT.hContext", h_context, 0x0, 0x40, true, 0x4be7306d502bae31)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CREATECONTEXT.NodeOrdinal", node_ordinal, 0x40, 0x20, true, 0x34f5cee8361236b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CREATECONTEXT.EngineAffinity", engine_affinity, 0x60, 0x20, true, 0x636de8bdb853ec4e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::createcontextflags_t), "_DXGKARG_CREATECONTEXT.Flags", flags, 0x80, 0x20, true, 0xf62344b5e0c43d35)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_CREATECONTEXT.pPrivateDriverData", p_private_driver_data, 0xc0, 0x40, true, 0x28fd17592d7cba4c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CREATECONTEXT.PrivateDriverDataSize", private_driver_data_size, 0x100, 0x20, true, 0x4e695503d5f57760)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::contextinfo_t), "_DXGKARG_CREATECONTEXT.ContextInfo", context_info, 0x120, 0x0, true, 0xff8e64eaa5a926ac)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif