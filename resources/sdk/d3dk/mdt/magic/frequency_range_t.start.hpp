#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::rational_t), "_D3DKMDT_FREQUENCY_RANGE.MinVSyncFreq", min_v_sync_freq, 0x0, 0x40, true, 0xe4a73f58fc1547e1)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::rational_t), "_D3DKMDT_FREQUENCY_RANGE.MaxVSyncFreq", max_v_sync_freq, 0x40, 0x40, true, 0xabc310f640a5fe10)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::rational_t), "_D3DKMDT_FREQUENCY_RANGE.MinHSyncFreq", min_h_sync_freq, 0x80, 0x40, true, 0xdbe831a0a6aecfe6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::rational_t), "_D3DKMDT_FREQUENCY_RANGE.MaxHSyncFreq", max_h_sync_freq, 0xc0, 0x40, true, 0xe11c14291cfc1c27)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif