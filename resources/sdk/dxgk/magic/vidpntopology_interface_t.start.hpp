#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpntopology_getnumpaths_t ), "_DXGK_VIDPNTOPOLOGY_INTERFACE.pfnGetNumPaths", pfn_get_num_paths, 0x0, 0x40, true, 0xc6becb93dca24cad)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpntopology_getnumpathsfromsource_t ), "_DXGK_VIDPNTOPOLOGY_INTERFACE.pfnGetNumPathsFromSource", pfn_get_num_paths_from_source, 0x40, 0x40, true, 0x2a575653e524c18c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpntopology_enumpathtargetsfromsource_t ), "_DXGK_VIDPNTOPOLOGY_INTERFACE.pfnEnumPathTargetsFromSource", pfn_enum_path_targets_from_source, 0x80, 0x40, true, 0xdb1dfd12cc2719ff)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpntopology_getpathsourcefromtarget_t ), "_DXGK_VIDPNTOPOLOGY_INTERFACE.pfnGetPathSourceFromTarget", pfn_get_path_source_from_target, 0xc0, 0x40, true, 0x1dc8555dd6371dc7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpntopology_acquirepathinfo_t ), "_DXGK_VIDPNTOPOLOGY_INTERFACE.pfnAcquirePathInfo", pfn_acquire_path_info, 0x100, 0x40, true, 0x20ee8717b7d05024)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpntopology_acquirefirstpathinfo_t ), "_DXGK_VIDPNTOPOLOGY_INTERFACE.pfnAcquireFirstPathInfo", pfn_acquire_first_path_info, 0x140, 0x40, true, 0xa6859c896cdf2815)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpntopology_acquirenextpathinfo_t ), "_DXGK_VIDPNTOPOLOGY_INTERFACE.pfnAcquireNextPathInfo", pfn_acquire_next_path_info, 0x180, 0x40, true, 0xb2207d556c8e5bfa)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpntopology_updatepathsupportinfo_t ), "_DXGK_VIDPNTOPOLOGY_INTERFACE.pfnUpdatePathSupportInfo", pfn_update_path_support_info, 0x1c0, 0x40, true, 0x4565d0e760fccbc7)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpntopology_releasepathinfo_t ), "_DXGK_VIDPNTOPOLOGY_INTERFACE.pfnReleasePathInfo", pfn_release_path_info, 0x200, 0x40, true, 0xd9d95e1e4c665806)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpntopology_createnewpathinfo_t ), "_DXGK_VIDPNTOPOLOGY_INTERFACE.pfnCreateNewPathInfo", pfn_create_new_path_info, 0x240, 0x40, true, 0x330335beea8d649f)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpntopology_addpath_t ), "_DXGK_VIDPNTOPOLOGY_INTERFACE.pfnAddPath", pfn_add_path, 0x280, 0x40, true, 0xa92e810c0a548e82)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgkddi_vidpntopology_removepath_t ), "_DXGK_VIDPNTOPOLOGY_INTERFACE.pfnRemovePath", pfn_remove_path, 0x2c0, 0x40, true, 0xc62cb20066a3056)
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
#endif