#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_present_t*)>*), "DXGI1_3_DDI_BASE_FUNCTIONS.pfnPresent", pfn_present, 0x0, 0x40, true, 0xa59dc2eb227df108)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_get_gamma_control_caps_t*)>*), "DXGI1_3_DDI_BASE_FUNCTIONS.pfnGetGammaCaps", pfn_get_gamma_caps, 0x40, 0x40, true, 0x791e85363f80e0ae)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_setdisplaymode_t*)>*), "DXGI1_3_DDI_BASE_FUNCTIONS.pfnSetDisplayMode", pfn_set_display_mode, 0x80, 0x40, true, 0xd75d94f79bdbcc23)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_setresourcepriority_t*)>*), "DXGI1_3_DDI_BASE_FUNCTIONS.pfnSetResourcePriority", pfn_set_resource_priority, 0xc0, 0x40, true, 0x628e93ad0a8e9d7a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_queryresourceresidency_t*)>*), "DXGI1_3_DDI_BASE_FUNCTIONS.pfnQueryResourceResidency", pfn_query_resource_residency, 0x100, 0x40, true, 0x3935cd57a3ddca08)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_rotate_resource_identities_t*)>*), "DXGI1_3_DDI_BASE_FUNCTIONS.pfnRotateResourceIdentities", pfn_rotate_resource_identities, 0x140, 0x40, true, 0x35b3c43d939d5d72)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_blt_t*)>*), "DXGI1_3_DDI_BASE_FUNCTIONS.pfnBlt", pfn_blt, 0x180, 0x40, true, 0x15c16888bee444f0)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_resolvesharedresource_t*)>*), "DXGI1_3_DDI_BASE_FUNCTIONS.pfnResolveSharedResource", pfn_resolve_shared_resource, 0x1c0, 0x40, true, 0x8fb878f91dc5465a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_blt1_t*)>*), "DXGI1_3_DDI_BASE_FUNCTIONS.pfnBlt1", pfn_blt1, 0x200, 0x40, true, 0xc633069d53e89226)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_offerresources_t*)>*), "DXGI1_3_DDI_BASE_FUNCTIONS.pfnOfferResources", pfn_offer_resources, 0x240, 0x40, true, 0x6d237b07154bb699)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_reclaimresources_t*)>*), "DXGI1_3_DDI_BASE_FUNCTIONS.pfnReclaimResources", pfn_reclaim_resources, 0x280, 0x40, true, 0x3317c133034eed1a)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_getmultiplaneoverlaycaps_t*)>*), "DXGI1_3_DDI_BASE_FUNCTIONS.pfnGetMultiplaneOverlayCaps", pfn_get_multiplane_overlay_caps, 0x2c0, 0x40, true, 0xcbc75ae80a15ac42)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_getmultiplaneoverlaygroupcaps_t*)>*), "DXGI1_3_DDI_BASE_FUNCTIONS.pfnGetMultiplaneOverlayGroupCaps", pfn_get_multiplane_overlay_group_caps, 0x300, 0x40, true, 0x3b60efa3a70bcd66)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(void*)>*), "DXGI1_3_DDI_BASE_FUNCTIONS.pfnReserved1", pfn_reserved1, 0x340, 0x40, true, 0x28a2263ca43046b7)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_presentmultiplaneoverlay_t*)>*), "DXGI1_3_DDI_BASE_FUNCTIONS.pfnPresentMultiplaneOverlay", pfn_present_multiplane_overlay, 0x380, 0x40, true, 0x31601e682d45f54)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(void*)>*), "DXGI1_3_DDI_BASE_FUNCTIONS.pfnReserved2", pfn_reserved2, 0x3c0, 0x40, true, 0x48caa34ce1451cec)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_present1_t*)>*), "DXGI1_3_DDI_BASE_FUNCTIONS.pfnPresent1", pfn_present1, 0x400, 0x40, true, 0x546354d77cd441ef)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_checkpresentdurationsupport_t*)>*), "DXGI1_3_DDI_BASE_FUNCTIONS.pfnCheckPresentDurationSupport", pfn_check_present_duration_support, 0x440, 0x40, true, 0xfb4c918a83efb86a)
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
#define _m15
#define _m16
#define _m17
#endif