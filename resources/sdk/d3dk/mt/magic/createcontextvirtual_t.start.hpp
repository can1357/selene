#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATECONTEXTVIRTUAL.hDevice", h_device, 0x0, 0x20, true, 0x1226bd2777202789)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATECONTEXTVIRTUAL.NodeOrdinal", node_ordinal, 0x20, 0x20, true, 0x72978febf7ad97f3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATECONTEXTVIRTUAL.EngineAffinity", engine_affinity, 0x40, 0x20, true, 0xf226691fab35ff6a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::createcontextflags_t), "_D3DKMT_CREATECONTEXTVIRTUAL.Flags", flags, 0x60, 0x20, true, 0xcd9d95f5426b371)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_CREATECONTEXTVIRTUAL.pPrivateDriverData", p_private_driver_data, 0x80, 0x40, true, 0xf19440ee1aaf02f6)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATECONTEXTVIRTUAL.PrivateDriverDataSize", private_driver_data_size, 0xc0, 0x20, true, 0x20f31272831c043e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::clienthint_t), "_D3DKMT_CREATECONTEXTVIRTUAL.ClientHint", client_hint, 0xe0, 0x20, true, 0x65de5fcdb025c0cf)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATECONTEXTVIRTUAL.hContext", h_context, 0x100, 0x20, true, 0xfa0d5cddc7258e9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif