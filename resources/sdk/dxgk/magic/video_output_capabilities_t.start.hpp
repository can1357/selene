#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::video_output_technology_t), "_DXGK_VIDEO_OUTPUT_CAPABILITIES.InterfaceTechnology", interface_technology, 0x0, 0x20, true, 0x4094e0049870bc41)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::monitor_orientation_awareness_t), "_DXGK_VIDEO_OUTPUT_CAPABILITIES.MonitorOrientationAwareness", monitor_orientation_awareness, 0x20, 0x20, true, 0xc3232b9863ed30db)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_VIDEO_OUTPUT_CAPABILITIES.SupportsSdtvModes", supports_sdtv_modes, 0x40, 0x8, true, 0x40c6da06429b77b6)
#else
#define _m00
#define _m01
#define _m02
#endif