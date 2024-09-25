#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DEVICEPRESENT_STATE.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0xf16ddde02002aa0c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::present_stats_t), "_D3DKMT_DEVICEPRESENT_STATE.PresentStats", present_stats, 0x40, 0x0, true, 0x1fe3b6e142b9a5ce)
#else
#define _m00
#define _m01
#endif