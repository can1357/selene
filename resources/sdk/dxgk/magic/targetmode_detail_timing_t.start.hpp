#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::video_signal_standard_t), "_DXGK_TARGETMODE_DETAIL_TIMING.VideoStandard", video_standard, 0x0, 0x20, true, 0x1776007f7459b6fb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_TARGETMODE_DETAIL_TIMING.TimingId", timing_id, 0x20, 0x20, true, 0xb0c8025f5e40567a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::displayid_detailed_timing_type_i_t), "_DXGK_TARGETMODE_DETAIL_TIMING.DetailTiming", detail_timing, 0x40, 0xa0, true, 0xa73ab94c0bc133ea)
#else
#define _m00
#define _m01
#define _m02
#endif