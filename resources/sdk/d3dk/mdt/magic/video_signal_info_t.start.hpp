#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::video_signal_standard_t), "_D3DKMDT_VIDEO_SIGNAL_INFO.VideoStandard", video_standard, 0x0, 0x20, true, 0x5f7d6c7cb83d1c26)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::_2dregion_t), "_D3DKMDT_VIDEO_SIGNAL_INFO.TotalSize", total_size, 0x20, 0x40, true, 0x1b53e80843904035)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::_2dregion_t), "_D3DKMDT_VIDEO_SIGNAL_INFO.ActiveSize", active_size, 0x60, 0x40, true, 0x9180e84823d66546)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::rational_t), "_D3DKMDT_VIDEO_SIGNAL_INFO.VSyncFreq", v_sync_freq, 0xa0, 0x40, true, 0x42b2199b1cac5185)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::rational_t), "_D3DKMDT_VIDEO_SIGNAL_INFO.HSyncFreq", h_sync_freq, 0xe0, 0x40, true, 0xe8e2a0f03dd28d6f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMDT_VIDEO_SIGNAL_INFO.PixelRate", pixel_rate, 0x140, 0x40, true, 0xc2de501f95ced1a6)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int3_t), "_D3DKMDT_VIDEO_SIGNAL_INFO.AdditionalSignalInfo.ScanLineOrdering", scan_line_ordering, 0x0, 0x3, true, 0x7620e2c8191ed956, 3, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_D3DKMDT_VIDEO_SIGNAL_INFO.AdditionalSignalInfo.VSyncFreqDivider", v_sync_freq_divider, 0x3, 0x6, true, 0xf8a13aee9f14c582, 6, uint32_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_additional_signal_info_t), "_D3DKMDT_VIDEO_SIGNAL_INFO.AdditionalSignalInfo", additional_signal_info, 0x180, 0x20, true, 0xd2923850bba01acb)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::video_signal_scanline_ordering_t), "_D3DKMDT_VIDEO_SIGNAL_INFO.ScanLineOrdering", scan_line_ordering, 0x180, 0x20, true, 0xbadd42a375741f0f)
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
#endif