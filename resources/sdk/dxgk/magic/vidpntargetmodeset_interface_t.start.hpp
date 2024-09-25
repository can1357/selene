#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpntargetmodeset_getnummodes_t ), "_DXGK_VIDPNTARGETMODESET_INTERFACE.pfnGetNumModes", pfn_get_num_modes, 0x0, 0x40, true, 0xc1c29923b473054b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const struct d3dk::mdt::hvidpntargetmodeset_t*, const struct d3dk::mdt::vidpn_target_mode_t**)>*), "_DXGK_VIDPNTARGETMODESET_INTERFACE.pfnAcquireFirstModeInfo", pfn_acquire_first_mode_info, 0x40, 0x40, true, 0x6c5fa26e4a879597)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpntargetmodeset_acquirenextmodeinfo_t ), "_DXGK_VIDPNTARGETMODESET_INTERFACE.pfnAcquireNextModeInfo", pfn_acquire_next_mode_info, 0x80, 0x40, true, 0x31326792a9396637)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const struct d3dk::mdt::hvidpntargetmodeset_t*, const struct d3dk::mdt::vidpn_target_mode_t**)>*), "_DXGK_VIDPNTARGETMODESET_INTERFACE.pfnAcquirePinnedModeInfo", pfn_acquire_pinned_mode_info, 0xc0, 0x40, true, 0x30783e763464ef26)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpntargetmodeset_releasemodeinfo_t ), "_DXGK_VIDPNTARGETMODESET_INTERFACE.pfnReleaseModeInfo", pfn_release_mode_info, 0x100, 0x40, true, 0x73d74a0101957e4a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpntargetmodeset_createnewmodeinfo_t ), "_DXGK_VIDPNTARGETMODESET_INTERFACE.pfnCreateNewModeInfo", pfn_create_new_mode_info, 0x140, 0x40, true, 0xa0e27a3a12f5388f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpntargetmodeset_addmode_t ), "_DXGK_VIDPNTARGETMODESET_INTERFACE.pfnAddMode", pfn_add_mode, 0x180, 0x40, true, 0x71a0e0ab45b3c760)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpntargetmodeset_pinmode_t ), "_DXGK_VIDPNTARGETMODESET_INTERFACE.pfnPinMode", pfn_pin_mode, 0x1c0, 0x40, true, 0xc28bf41575155852)
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