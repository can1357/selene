#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::vidpn_interface_version_t), "_DXGK_VIDPN_INTERFACE.Version", version, 0x0, 0x20, true, 0x5fd1654289e8ed96)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpn_gettopology_t ), "_DXGK_VIDPN_INTERFACE.pfnGetTopology", pfn_get_topology, 0x40, 0x40, true, 0x59b23c3902bb8836)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const struct d3dk::mdt::hvidpn_t*, const uint32_t, struct d3dk::mdt::hvidpnsourcemodeset_t**, const struct dxgk::vidpnsourcemodeset_interface_t**)>*), "_DXGK_VIDPN_INTERFACE.pfnAcquireSourceModeSet", pfn_acquire_source_mode_set, 0x80, 0x40, true, 0x3851b4f9a91e5d3d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpn_releasesourcemodeset_t ), "_DXGK_VIDPN_INTERFACE.pfnReleaseSourceModeSet", pfn_release_source_mode_set, 0xc0, 0x40, true, 0x9fd46102660f9d8d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const struct d3dk::mdt::hvidpn_t*, const uint32_t, struct d3dk::mdt::hvidpnsourcemodeset_t**, const struct dxgk::vidpnsourcemodeset_interface_t**)>*), "_DXGK_VIDPN_INTERFACE.pfnCreateNewSourceModeSet", pfn_create_new_source_mode_set, 0x100, 0x40, true, 0x5e6aa30273490a3c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpn_assignsourcemodeset_t ), "_DXGK_VIDPN_INTERFACE.pfnAssignSourceModeSet", pfn_assign_source_mode_set, 0x140, 0x40, true, 0xec4f02cdbe70740c)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpn_assignmultisamplingmethodset_t ), "_DXGK_VIDPN_INTERFACE.pfnAssignMultisamplingMethodSet", pfn_assign_multisampling_method_set, 0x180, 0x40, true, 0x6ca40d79b1ac15b4)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const struct d3dk::mdt::hvidpn_t*, const uint32_t, struct d3dk::mdt::hvidpntargetmodeset_t**, const struct dxgk::vidpntargetmodeset_interface_t**)>*), "_DXGK_VIDPN_INTERFACE.pfnAcquireTargetModeSet", pfn_acquire_target_mode_set, 0x1c0, 0x40, true, 0x3a3cb89ff24fc5f1)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpn_releasetargetmodeset_t ), "_DXGK_VIDPN_INTERFACE.pfnReleaseTargetModeSet", pfn_release_target_mode_set, 0x200, 0x40, true, 0x359de5b3fdb38dea)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(const struct d3dk::mdt::hvidpn_t*, const uint32_t, struct d3dk::mdt::hvidpntargetmodeset_t**, const struct dxgk::vidpntargetmodeset_interface_t**)>*), "_DXGK_VIDPN_INTERFACE.pfnCreateNewTargetModeSet", pfn_create_new_target_mode_set, 0x240, 0x40, true, 0x281e2b0ca79fb90f)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpn_assigntargetmodeset_t ), "_DXGK_VIDPN_INTERFACE.pfnAssignTargetModeSet", pfn_assign_target_mode_set, 0x280, 0x40, true, 0x3ed79fa5adcab201)
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
#endif