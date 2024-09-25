#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::ddi_base_callbacks_t*), "DXGI_DDI_BASE_ARGS.pDXGIBaseCallbacks", p_dxgi_base_callbacks, 0x0, 0x40, true, 0x6432cf20b9ada4f0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::dxgi1_6_1_ddi_base_functions_t*), "DXGI_DDI_BASE_ARGS.pDXGIDDIBaseFunctions6_1", p_dxgiddi_base_functions6_1, 0x40, 0x40, true, 0x86bd19ec0e142585)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::dxgi1_5_ddi_base_functions_t*), "DXGI_DDI_BASE_ARGS.pDXGIDDIBaseFunctions6", p_dxgiddi_base_functions6, 0x40, 0x40, true, 0x74b56d0b05d43f46)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::dxgi1_4_ddi_base_functions_t*), "DXGI_DDI_BASE_ARGS.pDXGIDDIBaseFunctions5", p_dxgiddi_base_functions5, 0x40, 0x40, true, 0x857740cb2453386)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::dxgi1_3_ddi_base_functions_t*), "DXGI_DDI_BASE_ARGS.pDXGIDDIBaseFunctions4", p_dxgiddi_base_functions4, 0x40, 0x40, true, 0x911e8456b5fbfc56)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::dxgi1_2_ddi_base_functions_t*), "DXGI_DDI_BASE_ARGS.pDXGIDDIBaseFunctions3", p_dxgiddi_base_functions3, 0x40, 0x40, true, 0x5fe4c105cce56cd6)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::dxgi1_1_ddi_base_functions_t*), "DXGI_DDI_BASE_ARGS.pDXGIDDIBaseFunctions2", p_dxgiddi_base_functions2, 0x40, 0x40, true, 0x39e542d34ccee0ab)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::ddi_base_functions_t*), "DXGI_DDI_BASE_ARGS.pDXGIDDIBaseFunctions", p_dxgiddi_base_functions, 0x40, 0x40, true, 0x8c9e2a6e8bcfad)
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