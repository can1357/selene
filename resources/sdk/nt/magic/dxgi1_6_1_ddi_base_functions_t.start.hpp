#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_present_t*)>*), "DXGI1_6_1_DDI_BASE_FUNCTIONS.pfnPresent", pfn_present, 0x0, 0x40, true, 0x40266753e3ec4d71)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_get_gamma_control_caps_t*)>*), "DXGI1_6_1_DDI_BASE_FUNCTIONS.pfnGetGammaCaps", pfn_get_gamma_caps, 0x40, 0x40, true, 0x233e22c7bb190d37)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_setdisplaymode_t*)>*), "DXGI1_6_1_DDI_BASE_FUNCTIONS.pfnSetDisplayMode", pfn_set_display_mode, 0x80, 0x40, true, 0x76cfab0352c83290)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_setresourcepriority_t*)>*), "DXGI1_6_1_DDI_BASE_FUNCTIONS.pfnSetResourcePriority", pfn_set_resource_priority, 0xc0, 0x40, true, 0x1dc5ea45ff4cc8eb)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_queryresourceresidency_t*)>*), "DXGI1_6_1_DDI_BASE_FUNCTIONS.pfnQueryResourceResidency", pfn_query_resource_residency, 0x100, 0x40, true, 0x5399734ad479553b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_rotate_resource_identities_t*)>*), "DXGI1_6_1_DDI_BASE_FUNCTIONS.pfnRotateResourceIdentities", pfn_rotate_resource_identities, 0x140, 0x40, true, 0x54b37a1d44dfed7a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_blt_t*)>*), "DXGI1_6_1_DDI_BASE_FUNCTIONS.pfnBlt", pfn_blt, 0x180, 0x40, true, 0xbe75938e1b16ac59)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_resolvesharedresource_t*)>*), "DXGI1_6_1_DDI_BASE_FUNCTIONS.pfnResolveSharedResource", pfn_resolve_shared_resource, 0x1c0, 0x40, true, 0x39ce28465d952315)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_blt1_t*)>*), "DXGI1_6_1_DDI_BASE_FUNCTIONS.pfnBlt1", pfn_blt1, 0x200, 0x40, true, 0x9af416dfa1bc595b)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_offerresources1_t*)>*), "DXGI1_6_1_DDI_BASE_FUNCTIONS.pfnOfferResources1", pfn_offer_resources1, 0x240, 0x40, true, 0x31b458bef574b5bb)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_reclaimresources_t*)>*), "DXGI1_6_1_DDI_BASE_FUNCTIONS.pfnReclaimResources", pfn_reclaim_resources, 0x280, 0x40, true, 0x8c3799c74d88df7e)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_getmultiplaneoverlaycaps_t*)>*), "DXGI1_6_1_DDI_BASE_FUNCTIONS.pfnGetMultiplaneOverlayCaps", pfn_get_multiplane_overlay_caps, 0x2c0, 0x40, true, 0xf196f1d10c88c0b)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_getmultiplaneoverlaygroupcaps_t*)>*), "DXGI1_6_1_DDI_BASE_FUNCTIONS.pfnGetMultiplaneOverlayGroupCaps", pfn_get_multiplane_overlay_group_caps, 0x300, 0x40, true, 0x901212a030bec58d)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(void*)>*), "DXGI1_6_1_DDI_BASE_FUNCTIONS.pfnReserved1", pfn_reserved1, 0x340, 0x40, true, 0xe80db62a7018937c)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_presentmultiplaneoverlay_t*)>*), "DXGI1_6_1_DDI_BASE_FUNCTIONS.pfnPresentMultiplaneOverlay", pfn_present_multiplane_overlay, 0x380, 0x40, true, 0x3e6b616433d92049)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(void*)>*), "DXGI1_6_1_DDI_BASE_FUNCTIONS.pfnReserved2", pfn_reserved2, 0x3c0, 0x40, true, 0x5c1af0fc94e85aec)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct nt::dxgi1_6_1_ddi_arg_present_t*)>*), "DXGI1_6_1_DDI_BASE_FUNCTIONS.pfnPresent1", pfn_present1, 0x400, 0x40, true, 0x1c475953deb570bd)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_checkpresentdurationsupport_t*)>*), "DXGI1_6_1_DDI_BASE_FUNCTIONS.pfnCheckPresentDurationSupport", pfn_check_present_duration_support, 0x440, 0x40, true, 0xb2194f230b2c2f46)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_trimresidencyset_t*)>*), "DXGI1_6_1_DDI_BASE_FUNCTIONS.pfnTrimResidencySet", pfn_trim_residency_set, 0x480, 0x40, true, 0x5093026213689d85)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_checkmultiplaneoverlaycolorspacesupport_t*)>*), "DXGI1_6_1_DDI_BASE_FUNCTIONS.pfnCheckMultiplaneOverlayColorSpaceSupport", pfn_check_multiplane_overlay_color_space_support, 0x4c0, 0x40, true, 0xec01e747b3e58812)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct nt::dxgi1_6_1_ddi_arg_presentmultiplaneoverlay_t*)>*), "DXGI1_6_1_DDI_BASE_FUNCTIONS.pfnPresentMultiplaneOverlay1", pfn_present_multiplane_overlay1, 0x500, 0x40, true, 0x1d0e39888c179fc0)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_reclaimresources1_t*)>*), "DXGI1_6_1_DDI_BASE_FUNCTIONS.pfnReclaimResources1", pfn_reclaim_resources1, 0x540, 0x40, true, 0x22add7f31071ac0b)
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
#define _m21
#endif