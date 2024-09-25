#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_VIDPN_TARGET_MODE.Id", id, 0x0, 0x20, true, 0xde5749ec064b4712)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::video_signal_info_t), "_D3DKMDT_VIDPN_TARGET_MODE.VideoSignalInfo", video_signal_info, 0x40, 0xc0, true, 0x39d8ecb5599e25c9)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int32_t), "_D3DKMDT_VIDPN_TARGET_MODE.Preference", preference, 0x200, 0x2, true, 0x1aea9f5cb5aafc12, 0, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union d3dk::mdt::wire_format_and_preference_t), "_D3DKMDT_VIDPN_TARGET_MODE.WireFormatAndPreference", wire_format_and_preference, 0x200, 0x20, true, 0x8cf53d0c920c4458)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::rational_t), "_D3DKMDT_VIDPN_TARGET_MODE.MinimumVSyncFreq", minimum_v_sync_freq, 0x220, 0x40, true, 0xec39ef6939e0ee45)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif