#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_present_t*)>*), "DXGI1_5_DDI_BASE_FUNCTIONS.pfnPresent", pfn_present, 0x0, 0x40, true, 0xc22ab3b1a59c48e0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_get_gamma_control_caps_t*)>*), "DXGI1_5_DDI_BASE_FUNCTIONS.pfnGetGammaCaps", pfn_get_gamma_caps, 0x40, 0x40, true, 0xe42ccdc00e9f0751)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_setdisplaymode_t*)>*), "DXGI1_5_DDI_BASE_FUNCTIONS.pfnSetDisplayMode", pfn_set_display_mode, 0x80, 0x40, true, 0xc5e0b7229448e963)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_setresourcepriority_t*)>*), "DXGI1_5_DDI_BASE_FUNCTIONS.pfnSetResourcePriority", pfn_set_resource_priority, 0xc0, 0x40, true, 0x223c92a73becfd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_queryresourceresidency_t*)>*), "DXGI1_5_DDI_BASE_FUNCTIONS.pfnQueryResourceResidency", pfn_query_resource_residency, 0x100, 0x40, true, 0x320a253dbbb575f3)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_rotate_resource_identities_t*)>*), "DXGI1_5_DDI_BASE_FUNCTIONS.pfnRotateResourceIdentities", pfn_rotate_resource_identities, 0x140, 0x40, true, 0xe9515cf930d17388)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_blt_t*)>*), "DXGI1_5_DDI_BASE_FUNCTIONS.pfnBlt", pfn_blt, 0x180, 0x40, true, 0x57b5d1ab20d188d4)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_resolvesharedresource_t*)>*), "DXGI1_5_DDI_BASE_FUNCTIONS.pfnResolveSharedResource", pfn_resolve_shared_resource, 0x1c0, 0x40, true, 0xc83eafd3a89216a2)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_blt1_t*)>*), "DXGI1_5_DDI_BASE_FUNCTIONS.pfnBlt1", pfn_blt1, 0x200, 0x40, true, 0x5a1c351ee4aeb60a)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_offerresources1_t*)>*), "DXGI1_5_DDI_BASE_FUNCTIONS.pfnOfferResources1", pfn_offer_resources1, 0x240, 0x40, true, 0xc26df53ecb34ae9d)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_reclaimresources_t*)>*), "DXGI1_5_DDI_BASE_FUNCTIONS.pfnReclaimResources", pfn_reclaim_resources, 0x280, 0x40, true, 0x91987ee82c70d92a)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_getmultiplaneoverlaycaps_t*)>*), "DXGI1_5_DDI_BASE_FUNCTIONS.pfnGetMultiplaneOverlayCaps", pfn_get_multiplane_overlay_caps, 0x2c0, 0x40, true, 0xe886e4d6bada7b89)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_getmultiplaneoverlaygroupcaps_t*)>*), "DXGI1_5_DDI_BASE_FUNCTIONS.pfnGetMultiplaneOverlayGroupCaps", pfn_get_multiplane_overlay_group_caps, 0x300, 0x40, true, 0x9a31710d81f76b46)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(void*)>*), "DXGI1_5_DDI_BASE_FUNCTIONS.pfnReserved1", pfn_reserved1, 0x340, 0x40, true, 0x24bd2edb444b276e)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_presentmultiplaneoverlay_t*)>*), "DXGI1_5_DDI_BASE_FUNCTIONS.pfnPresentMultiplaneOverlay", pfn_present_multiplane_overlay, 0x380, 0x40, true, 0xf7c8e3baa59671ae)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(void*)>*), "DXGI1_5_DDI_BASE_FUNCTIONS.pfnReserved2", pfn_reserved2, 0x3c0, 0x40, true, 0xe183a537c401def1)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_present1_t*)>*), "DXGI1_5_DDI_BASE_FUNCTIONS.pfnPresent1", pfn_present1, 0x400, 0x40, true, 0x9f35550716f767f)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_checkpresentdurationsupport_t*)>*), "DXGI1_5_DDI_BASE_FUNCTIONS.pfnCheckPresentDurationSupport", pfn_check_present_duration_support, 0x440, 0x40, true, 0x37f0bf0c936911d9)
#define _m18 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_trimresidencyset_t*)>*), "DXGI1_5_DDI_BASE_FUNCTIONS.pfnTrimResidencySet", pfn_trim_residency_set, 0x480, 0x40, true, 0x7401511d98f8b228)
#define _m19 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_checkmultiplaneoverlaycolorspacesupport_t*)>*), "DXGI1_5_DDI_BASE_FUNCTIONS.pfnCheckMultiplaneOverlayColorSpaceSupport", pfn_check_multiplane_overlay_color_space_support, 0x4c0, 0x40, true, 0x178eeab7e618d817)
#define _m20 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_presentmultiplaneoverlay1_t*)>*), "DXGI1_5_DDI_BASE_FUNCTIONS.pfnPresentMultiplaneOverlay1", pfn_present_multiplane_overlay1, 0x500, 0x40, true, 0xeed1c4e90fe41af8)
#define _m21 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<sdk::hresult(struct dxgi::ddi_arg_reclaimresources1_t*)>*), "DXGI1_5_DDI_BASE_FUNCTIONS.pfnReclaimResources1", pfn_reclaim_resources1, 0x540, 0x40, true, 0x8a8762f1aaca0ccb)
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