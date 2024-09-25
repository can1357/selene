#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitorsourcemodeset_getnummodes_t ), "_DXGK_MONITORSOURCEMODESET_INTERFACE.pfnGetNumModes", pfn_get_num_modes, 0x0, 0x40, true, 0x277d3beedc68c8d1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const struct d3dk::mdt::hmonitorsourcemodeset_t*, const struct d3dk::mdt::monitor_source_mode_t**)>*), "_DXGK_MONITORSOURCEMODESET_INTERFACE.pfnAcquirePreferredModeInfo", pfn_acquire_preferred_mode_info, 0x40, 0x40, true, 0xb3b231a36b49e7e9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const struct d3dk::mdt::hmonitorsourcemodeset_t*, const struct d3dk::mdt::monitor_source_mode_t**)>*), "_DXGK_MONITORSOURCEMODESET_INTERFACE.pfnAcquireFirstModeInfo", pfn_acquire_first_mode_info, 0x80, 0x40, true, 0xceb00a3480111b74)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitorsourcemodeset_acquirenextmodeinfo_t ), "_DXGK_MONITORSOURCEMODESET_INTERFACE.pfnAcquireNextModeInfo", pfn_acquire_next_mode_info, 0xc0, 0x40, true, 0xab3873637024e28d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitorsourcemodeset_createnewmodeinfo_t ), "_DXGK_MONITORSOURCEMODESET_INTERFACE.pfnCreateNewModeInfo", pfn_create_new_mode_info, 0x100, 0x40, true, 0x7d7f3bc20a0c418a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitorsourcemodeset_addmode_t ), "_DXGK_MONITORSOURCEMODESET_INTERFACE.pfnAddMode", pfn_add_mode, 0x140, 0x40, true, 0x6286989690f03a8b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_monitorsourcemodeset_releasemodeinfo_t ), "_DXGK_MONITORSOURCEMODESET_INTERFACE.pfnReleaseModeInfo", pfn_release_mode_info, 0x180, 0x40, true, 0x72669f2e86e972ba)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif