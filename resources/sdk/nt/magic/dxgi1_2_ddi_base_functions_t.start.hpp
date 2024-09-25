#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_present_t*)>*), "DXGI1_2_DDI_BASE_FUNCTIONS.pfnPresent", pfn_present, 0x0, 0x40, true, 0xa233c5b02010a829)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_get_gamma_control_caps_t*)>*), "DXGI1_2_DDI_BASE_FUNCTIONS.pfnGetGammaCaps", pfn_get_gamma_caps, 0x40, 0x40, true, 0x11dfd4740a2a6c11)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_setdisplaymode_t*)>*), "DXGI1_2_DDI_BASE_FUNCTIONS.pfnSetDisplayMode", pfn_set_display_mode, 0x80, 0x40, true, 0xbfc1e1d4af276e08)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_setresourcepriority_t*)>*), "DXGI1_2_DDI_BASE_FUNCTIONS.pfnSetResourcePriority", pfn_set_resource_priority, 0xc0, 0x40, true, 0xec84c739cc2950e3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_queryresourceresidency_t*)>*), "DXGI1_2_DDI_BASE_FUNCTIONS.pfnQueryResourceResidency", pfn_query_resource_residency, 0x100, 0x40, true, 0x6a3a0982f471fcf0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_rotate_resource_identities_t*)>*), "DXGI1_2_DDI_BASE_FUNCTIONS.pfnRotateResourceIdentities", pfn_rotate_resource_identities, 0x140, 0x40, true, 0x1903511ee0c4ab16)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_blt_t*)>*), "DXGI1_2_DDI_BASE_FUNCTIONS.pfnBlt", pfn_blt, 0x180, 0x40, true, 0xbb7e33c8fc7fb5d0)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_resolvesharedresource_t*)>*), "DXGI1_2_DDI_BASE_FUNCTIONS.pfnResolveSharedResource", pfn_resolve_shared_resource, 0x1c0, 0x40, true, 0x8afe668976c6da24)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_blt1_t*)>*), "DXGI1_2_DDI_BASE_FUNCTIONS.pfnBlt1", pfn_blt1, 0x200, 0x40, true, 0x9564259b6c15e409)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_offerresources_t*)>*), "DXGI1_2_DDI_BASE_FUNCTIONS.pfnOfferResources", pfn_offer_resources, 0x240, 0x40, true, 0x1496764ff4d2fb8d)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_reclaimresources_t*)>*), "DXGI1_2_DDI_BASE_FUNCTIONS.pfnReclaimResources", pfn_reclaim_resources, 0x280, 0x40, true, 0x1332dcd722520c50)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_getmultiplaneoverlaycaps_t*)>*), "DXGI1_2_DDI_BASE_FUNCTIONS.pfnGetMultiplaneOverlayCaps", pfn_get_multiplane_overlay_caps, 0x2c0, 0x40, true, 0x769a9420143ac0b1)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(void*)>*), "DXGI1_2_DDI_BASE_FUNCTIONS.pfnGetMultiplaneOverlayFilterRange", pfn_get_multiplane_overlay_filter_range, 0x300, 0x40, true, 0x8593ee3d43c2971c)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_checkmultiplaneoverlaysupport_t*)>*), "DXGI1_2_DDI_BASE_FUNCTIONS.pfnCheckMultiplaneOverlaySupport", pfn_check_multiplane_overlay_support, 0x340, 0x40, true, 0xef187f46e9678bc2)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_presentmultiplaneoverlay_t*)>*), "DXGI1_2_DDI_BASE_FUNCTIONS.pfnPresentMultiplaneOverlay", pfn_present_multiplane_overlay, 0x380, 0x40, true, 0x588d9f976c8a3b28)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#endif