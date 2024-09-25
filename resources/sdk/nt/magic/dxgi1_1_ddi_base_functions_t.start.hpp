#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_present_t*)>*), "DXGI1_1_DDI_BASE_FUNCTIONS.pfnPresent", pfn_present, 0x0, 0x40, true, 0xf93def082fdb6719)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_get_gamma_control_caps_t*)>*), "DXGI1_1_DDI_BASE_FUNCTIONS.pfnGetGammaCaps", pfn_get_gamma_caps, 0x40, 0x40, true, 0x61575eeb8dceaf55)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_setdisplaymode_t*)>*), "DXGI1_1_DDI_BASE_FUNCTIONS.pfnSetDisplayMode", pfn_set_display_mode, 0x80, 0x40, true, 0x1aa18e9908e4af85)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_setresourcepriority_t*)>*), "DXGI1_1_DDI_BASE_FUNCTIONS.pfnSetResourcePriority", pfn_set_resource_priority, 0xc0, 0x40, true, 0x91ed63ed4eae9d7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_queryresourceresidency_t*)>*), "DXGI1_1_DDI_BASE_FUNCTIONS.pfnQueryResourceResidency", pfn_query_resource_residency, 0x100, 0x40, true, 0xd84f658706a78ef1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_rotate_resource_identities_t*)>*), "DXGI1_1_DDI_BASE_FUNCTIONS.pfnRotateResourceIdentities", pfn_rotate_resource_identities, 0x140, 0x40, true, 0xee8f98cc2cb85174)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_blt_t*)>*), "DXGI1_1_DDI_BASE_FUNCTIONS.pfnBlt", pfn_blt, 0x180, 0x40, true, 0x54357f783e01dd3d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_resolvesharedresource_t*)>*), "DXGI1_1_DDI_BASE_FUNCTIONS.pfnResolveSharedResource", pfn_resolve_shared_resource, 0x1c0, 0x40, true, 0xcd987a598c7c5a0d)
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