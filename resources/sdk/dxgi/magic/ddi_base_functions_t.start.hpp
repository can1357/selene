#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_present_t*)>*), "DXGI_DDI_BASE_FUNCTIONS.pfnPresent", pfn_present, 0x0, 0x40, true, 0xb430473d1da8f8b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_get_gamma_control_caps_t*)>*), "DXGI_DDI_BASE_FUNCTIONS.pfnGetGammaCaps", pfn_get_gamma_caps, 0x40, 0x40, true, 0x21ddbf75826b84e6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_setdisplaymode_t*)>*), "DXGI_DDI_BASE_FUNCTIONS.pfnSetDisplayMode", pfn_set_display_mode, 0x80, 0x40, true, 0xf85b2bc674ae83e1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_setresourcepriority_t*)>*), "DXGI_DDI_BASE_FUNCTIONS.pfnSetResourcePriority", pfn_set_resource_priority, 0xc0, 0x40, true, 0xc1d4e42b41530b2d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_queryresourceresidency_t*)>*), "DXGI_DDI_BASE_FUNCTIONS.pfnQueryResourceResidency", pfn_query_resource_residency, 0x100, 0x40, true, 0x5e71193347fce81b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_rotate_resource_identities_t*)>*), "DXGI_DDI_BASE_FUNCTIONS.pfnRotateResourceIdentities", pfn_rotate_resource_identities, 0x140, 0x40, true, 0x91a14bbcdc76e847)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_blt_t*)>*), "DXGI_DDI_BASE_FUNCTIONS.pfnBlt", pfn_blt, 0x180, 0x40, true, 0xa013aed3d62d02a8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif