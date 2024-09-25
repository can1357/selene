#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_present_t*)>*), "DXGI1_4_DDI_BASE_FUNCTIONS.pfnPresent", pfn_present, 0x0, 0x40, true, 0x669db8f9c2ac893f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_get_gamma_control_caps_t*)>*), "DXGI1_4_DDI_BASE_FUNCTIONS.pfnGetGammaCaps", pfn_get_gamma_caps, 0x40, 0x40, true, 0x4eefaaebc0c06729)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_setdisplaymode_t*)>*), "DXGI1_4_DDI_BASE_FUNCTIONS.pfnSetDisplayMode", pfn_set_display_mode, 0x80, 0x40, true, 0xab493807d10a672e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_setresourcepriority_t*)>*), "DXGI1_4_DDI_BASE_FUNCTIONS.pfnSetResourcePriority", pfn_set_resource_priority, 0xc0, 0x40, true, 0xe07baa20f93dd89d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_queryresourceresidency_t*)>*), "DXGI1_4_DDI_BASE_FUNCTIONS.pfnQueryResourceResidency", pfn_query_resource_residency, 0x100, 0x40, true, 0x2a43daa2ef7b45f9)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_rotate_resource_identities_t*)>*), "DXGI1_4_DDI_BASE_FUNCTIONS.pfnRotateResourceIdentities", pfn_rotate_resource_identities, 0x140, 0x40, true, 0x8e885ae46c813661)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_blt_t*)>*), "DXGI1_4_DDI_BASE_FUNCTIONS.pfnBlt", pfn_blt, 0x180, 0x40, true, 0x1a6b583f0c3a28f0)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_resolvesharedresource_t*)>*), "DXGI1_4_DDI_BASE_FUNCTIONS.pfnResolveSharedResource", pfn_resolve_shared_resource, 0x1c0, 0x40, true, 0x8ea6424b9b888994)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_blt1_t*)>*), "DXGI1_4_DDI_BASE_FUNCTIONS.pfnBlt1", pfn_blt1, 0x200, 0x40, true, 0xe48b2620a34beb95)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_offerresources_t*)>*), "DXGI1_4_DDI_BASE_FUNCTIONS.pfnOfferResources", pfn_offer_resources, 0x240, 0x40, true, 0x3b72419fb4b50ec3)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_reclaimresources_t*)>*), "DXGI1_4_DDI_BASE_FUNCTIONS.pfnReclaimResources", pfn_reclaim_resources, 0x280, 0x40, true, 0x34cb4bb9921945dd)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_getmultiplaneoverlaycaps_t*)>*), "DXGI1_4_DDI_BASE_FUNCTIONS.pfnGetMultiplaneOverlayCaps", pfn_get_multiplane_overlay_caps, 0x2c0, 0x40, true, 0xfc9f55dccfff1dc2)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_getmultiplaneoverlaygroupcaps_t*)>*), "DXGI1_4_DDI_BASE_FUNCTIONS.pfnGetMultiplaneOverlayGroupCaps", pfn_get_multiplane_overlay_group_caps, 0x300, 0x40, true, 0xd85905bd44d06d5d)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(void*)>*), "DXGI1_4_DDI_BASE_FUNCTIONS.pfnReserved1", pfn_reserved1, 0x340, 0x40, true, 0x46e14ef1115aca74)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_presentmultiplaneoverlay_t*)>*), "DXGI1_4_DDI_BASE_FUNCTIONS.pfnPresentMultiplaneOverlay", pfn_present_multiplane_overlay, 0x380, 0x40, true, 0x4493c6fea4044c32)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(void*)>*), "DXGI1_4_DDI_BASE_FUNCTIONS.pfnReserved2", pfn_reserved2, 0x3c0, 0x40, true, 0xe2bb76939391dc)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_present1_t*)>*), "DXGI1_4_DDI_BASE_FUNCTIONS.pfnPresent1", pfn_present1, 0x400, 0x40, true, 0xd87f1f72446a5552)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_checkpresentdurationsupport_t*)>*), "DXGI1_4_DDI_BASE_FUNCTIONS.pfnCheckPresentDurationSupport", pfn_check_present_duration_support, 0x440, 0x40, true, 0xaaa6056680798527)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_trimresidencyset_t*)>*), "DXGI1_4_DDI_BASE_FUNCTIONS.pfnTrimResidencySet", pfn_trim_residency_set, 0x480, 0x40, true, 0x3838e7cc46ebb67e)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_checkmultiplaneoverlaycolorspacesupport_t*)>*), "DXGI1_4_DDI_BASE_FUNCTIONS.pfnCheckMultiplaneOverlayColorSpaceSupport", pfn_check_multiplane_overlay_color_space_support, 0x4c0, 0x40, true, 0x6983989714c7ab4a)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_presentmultiplaneoverlay1_t*)>*), "DXGI1_4_DDI_BASE_FUNCTIONS.pfnPresentMultiplaneOverlay1", pfn_present_multiplane_overlay1, 0x500, 0x40, true, 0x70441155249fa435)
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
#define _m18
#define _m19
#define _m20
#endif