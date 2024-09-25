#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_VIDEO_PRESENT_TARGET.Id", id, 0x0, 0x20, true, 0xc0d244d4a6ec89f8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::video_output_technology_t), "_D3DKMDT_VIDEO_PRESENT_TARGET.VideoOutputTechnology", video_output_technology, 0x20, 0x20, true, 0xc9af2200a1a7eb1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::child_device_hpd_awareness_t), "_D3DKMDT_VIDEO_PRESENT_TARGET.VideoOutputHpdAwareness", video_output_hpd_awareness, 0x40, 0x20, true, 0x1891af947ab69b64)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::monitor_orientation_awareness_t), "_D3DKMDT_VIDEO_PRESENT_TARGET.MonitorOrientationAwareness", monitor_orientation_awareness, 0x60, 0x20, true, 0x118a21cbb4f0b7a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_D3DKMDT_VIDEO_PRESENT_TARGET.SupportsSdtvModes", supports_sdtv_modes, 0x80, 0x8, true, 0x2863d1ce22bfe6c4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif