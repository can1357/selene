#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_VIDPN_PRESENT_PATH.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0x9913402742d44053)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_VIDPN_PRESENT_PATH.VidPnTargetId", vid_pn_target_id, 0x20, 0x20, true, 0xa4ab3ee4539adea8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::vidpn_present_path_importance_t), "_D3DKMDT_VIDPN_PRESENT_PATH.ImportanceOrdinal", importance_ordinal, 0x40, 0x20, true, 0x78cdd3711d42dcac)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::vidpn_present_path_transformation_t), "_D3DKMDT_VIDPN_PRESENT_PATH.ContentTransformation", content_transformation, 0x60, 0x80, true, 0xa85c3b4ec96714fd)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::_2dregion_t), "_D3DKMDT_VIDPN_PRESENT_PATH.VisibleFromActiveTLOffset", visible_from_active_tl_offset, 0xe0, 0x40, true, 0xbc329b86827351a0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::_2dregion_t), "_D3DKMDT_VIDPN_PRESENT_PATH.VisibleFromActiveBROffset", visible_from_active_br_offset, 0x120, 0x40, true, 0xa9279541e85270bd)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::color_basis_t), "_D3DKMDT_VIDPN_PRESENT_PATH.VidPnTargetColorBasis", vid_pn_target_color_basis, 0x160, 0x20, true, 0x4b35eb647996170c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::color_coeff_dynamic_ranges_t), "_D3DKMDT_VIDPN_PRESENT_PATH.VidPnTargetColorCoeffDynamicRanges", vid_pn_target_color_coeff_dynamic_ranges, 0x180, 0x80, true, 0x4fd7ab2f3a66ee8d)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::vidpn_present_path_content_t), "_D3DKMDT_VIDPN_PRESENT_PATH.Content", content, 0x200, 0x20, true, 0xfb38b59983fe5dc4)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::vidpn_present_path_copyprotection_t), "_D3DKMDT_VIDPN_PRESENT_PATH.CopyProtection", copy_protection, 0x220, 0x60, true, 0xe53b9d7f08a31cc)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::gamma_ramp_t), "_D3DKMDT_VIDPN_PRESENT_PATH.GammaRamp", gamma_ramp, 0xa80, 0xc0, true, 0x56fdf4d6387deb77)
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