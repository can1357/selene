#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::hvidpn_t*), "_DXGKARG_SETTIMINGSFROMVIDPN.hFunctionalVidPn", h_functional_vid_pn, 0x0, 0x40, true, 0xa8151d32f3a62e9e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::set_timing_flags_t), "_DXGKARG_SETTIMINGSFROMVIDPN.SetFlags", set_flags, 0x40, 0x20, true, 0xbe54d04f59e2006c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::set_timing_results_t*), "_DXGKARG_SETTIMINGSFROMVIDPN.pResultsFlags", p_results_flags, 0x80, 0x40, true, 0x8728048d29812fd1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETTIMINGSFROMVIDPN.PathCount", path_count, 0xc0, 0x20, true, 0x9ef55660327f1ee1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::set_timing_path_info_t*), "_DXGKARG_SETTIMINGSFROMVIDPN.pSetTimingPathInfo", p_set_timing_path_info, 0x100, 0x40, true, 0xf04f25e7ded7db98)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif