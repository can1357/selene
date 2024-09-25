#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DEVICEPRESENT_STATE_DWM.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0xd1208bff3228a8af)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::present_stats_dwm_t), "_D3DKMT_DEVICEPRESENT_STATE_DWM.PresentStatsDWM", present_stats_dwm, 0x40, 0x40, true, 0xe0ca0fd896fdf52b)
#else
#define _m00
#define _m01
#endif