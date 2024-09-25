#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpnsourcemodeset_getnummodes_t ), "_DXGK_VIDPNSOURCEMODESET_INTERFACE.pfnGetNumModes", pfn_get_num_modes, 0x0, 0x40, true, 0x8605d0ba51b2f907)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const struct d3dk::mdt::hvidpnsourcemodeset_t*, const struct d3dk::mdt::vidpn_source_mode_t**)>*), "_DXGK_VIDPNSOURCEMODESET_INTERFACE.pfnAcquireFirstModeInfo", pfn_acquire_first_mode_info, 0x40, 0x40, true, 0xec43a9aa1a3ce951)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpnsourcemodeset_acquirenextmodeinfo_t ), "_DXGK_VIDPNSOURCEMODESET_INTERFACE.pfnAcquireNextModeInfo", pfn_acquire_next_mode_info, 0x80, 0x40, true, 0xeab4e92684aac660)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const struct d3dk::mdt::hvidpnsourcemodeset_t*, const struct d3dk::mdt::vidpn_source_mode_t**)>*), "_DXGK_VIDPNSOURCEMODESET_INTERFACE.pfnAcquirePinnedModeInfo", pfn_acquire_pinned_mode_info, 0xc0, 0x40, true, 0x2e66f7b13f5b9ce6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpnsourcemodeset_releasemodeinfo_t ), "_DXGK_VIDPNSOURCEMODESET_INTERFACE.pfnReleaseModeInfo", pfn_release_mode_info, 0x100, 0x40, true, 0x8bbedc93c6dade97)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpnsourcemodeset_createnewmodeinfo_t ), "_DXGK_VIDPNSOURCEMODESET_INTERFACE.pfnCreateNewModeInfo", pfn_create_new_mode_info, 0x140, 0x40, true, 0x7a6460d92e493f35)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpnsourcemodeset_addmode_t ), "_DXGK_VIDPNSOURCEMODESET_INTERFACE.pfnAddMode", pfn_add_mode, 0x180, 0x40, true, 0xe39de3b9327a0180)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpnsourcemodeset_pinmode_t ), "_DXGK_VIDPNSOURCEMODESET_INTERFACE.pfnPinMode", pfn_pin_mode, 0x1c0, 0x40, true, 0xa3eb3bdcddeccfa4)
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