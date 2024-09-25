#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DISPLAYCONFIG_VIDEO_SIGNAL_INFO.pixelRate", pixel_rate, 0x0, 0x40, true, 0xb3d9e3a2b3db273e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_rational_t), "DISPLAYCONFIG_VIDEO_SIGNAL_INFO.hSyncFreq", h_sync_freq, 0x40, 0x40, true, 0xc73ece71920d3b8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_rational_t), "DISPLAYCONFIG_VIDEO_SIGNAL_INFO.vSyncFreq", v_sync_freq, 0x80, 0x40, true, 0x2fbb7fcc08f9fdc7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_2dregion_t), "DISPLAYCONFIG_VIDEO_SIGNAL_INFO.activeSize", active_size, 0xc0, 0x40, true, 0xc86487d12863a9cc)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::displayconfig_2dregion_t), "DISPLAYCONFIG_VIDEO_SIGNAL_INFO.totalSize", total_size, 0x100, 0x40, true, 0x443cc9f5f312adc3)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "DISPLAYCONFIG_VIDEO_SIGNAL_INFO.AdditionalSignalInfo.videoStandard", video_standard, 0x0, 0x10, true, 0x50bf1f800dd19b3e, 16, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "DISPLAYCONFIG_VIDEO_SIGNAL_INFO.AdditionalSignalInfo.vSyncFreqDivider", v_sync_freq_divider, 0x10, 0x6, true, 0x33d3e96b08a07a40, 6, uint32_t)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_additional_signal_info_t), "DISPLAYCONFIG_VIDEO_SIGNAL_INFO.AdditionalSignalInfo", additional_signal_info, 0x140, 0x20, true, 0x3d38c10393690746)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_VIDEO_SIGNAL_INFO.videoStandard", video_standard, 0x140, 0x20, true, 0xdff05b2c61c55528)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "DISPLAYCONFIG_VIDEO_SIGNAL_INFO.scanLineOrdering", scan_line_ordering, 0x160, 0x20, true, 0xedfe74a48afa3baa, 32, uint32_t)
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