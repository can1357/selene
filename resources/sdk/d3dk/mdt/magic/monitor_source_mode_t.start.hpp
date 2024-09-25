#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_MONITOR_SOURCE_MODE.Id", id, 0x0, 0x20, true, 0x1771ba3f91bab6b7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::video_signal_info_t), "_D3DKMDT_MONITOR_SOURCE_MODE.VideoSignalInfo", video_signal_info, 0x40, 0xc0, true, 0x675deb39be3b8aac)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::color_basis_t), "_D3DKMDT_MONITOR_SOURCE_MODE.ColorBasis", color_basis, 0x200, 0x20, true, 0x1aae24f1de66cb66)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::color_coeff_dynamic_ranges_t), "_D3DKMDT_MONITOR_SOURCE_MODE.ColorCoeffDynamicRanges", color_coeff_dynamic_ranges, 0x220, 0x80, true, 0x87f9e5f666275b94)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::monitor_capabilities_origin_t), "_D3DKMDT_MONITOR_SOURCE_MODE.Origin", origin, 0x2a0, 0x20, true, 0x9ac9e0b2c856b24e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::mode_preference_t), "_D3DKMDT_MONITOR_SOURCE_MODE.Preference", preference, 0x2c0, 0x20, true, 0xe8885dc7bf7b6aa0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif