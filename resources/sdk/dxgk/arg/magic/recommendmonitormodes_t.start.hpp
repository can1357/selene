#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_RECOMMENDMONITORMODES.VideoPresentTargetId", video_present_target_id, 0x0, 0x20, true, 0x5b221aa536c0eb31)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::hmonitorsourcemodeset_t*), "_DXGKARG_RECOMMENDMONITORMODES.hMonitorSourceModeSet", h_monitor_source_mode_set, 0x40, 0x40, true, 0x4aa3604af14574a0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct dxgk::monitorsourcemodeset_interface_t*), "_DXGKARG_RECOMMENDMONITORMODES.pMonitorSourceModeSetInterface", p_monitor_source_mode_set_interface, 0x80, 0x40, true, 0xf66b67fcbeb5b987)
#else
#define _m00
#define _m01
#define _m02
#endif