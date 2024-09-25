#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_CREATEHWCONTEXT.hHwContext", h_hw_context, 0x0, 0x40, true, 0x67fb2f9bddecfcea)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CREATEHWCONTEXT.NodeOrdinal", node_ordinal, 0x40, 0x20, true, 0x72c89f7929afb55e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CREATEHWCONTEXT.EngineAffinity", engine_affinity, 0x60, 0x20, true, 0xff3ca9e7ab9d6b67)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::createhwcontextflags_t), "_DXGKARG_CREATEHWCONTEXT.Flags", flags, 0x80, 0x20, true, 0x3551a10f3f8a9002)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CREATEHWCONTEXT.PrivateDriverDataSize", private_driver_data_size, 0xa0, 0x20, true, 0xb730c9469e2b2bb4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_CREATEHWCONTEXT.pPrivateDriverData", p_private_driver_data, 0xc0, 0x40, true, 0xb9267fe7cf076983)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::hwcontext_caps_t), "_DXGKARG_CREATEHWCONTEXT.ContextCaps", context_caps, 0x100, 0x20, true, 0x3413831731e73b93)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif