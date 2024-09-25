#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DISPLAYSTATE_INTRUSIVE.VidPnTargetId", vid_pn_target_id, 0x0, 0x20, true, 0xd21434ce72367e49)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::diag_monitor_state_t), "_DXGKARG_DISPLAYSTATE_INTRUSIVE.MonitorState", monitor_state, 0x20, 0x20, true, 0x8baa3cc258b3d40c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::diag_display_scanout_state_t), "_DXGKARG_DISPLAYSTATE_INTRUSIVE.DisplayScanoutState", display_scanout_state, 0x40, 0x20, true, 0x781f1ee9b4e32efd)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::diag_display_sampled_gamma_t), "_DXGKARG_DISPLAYSTATE_INTRUSIVE.DisplaySampledGamma", display_sampled_gamma, 0x60, 0x20, true, 0xe759654a581bccbb)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::diag_scanout_buffer_content_t), "_DXGKARG_DISPLAYSTATE_INTRUSIVE.DisplayBufferContent", display_buffer_content, 0x780, 0x60, true, 0x5e615788d868427f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::diag_display_hardware_error_state_t), "_DXGKARG_DISPLAYSTATE_INTRUSIVE.DisplayErrorState", display_error_state, 0x7e0, 0x20, true, 0xd0d22a3d4547cc51)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::diag_display_hardware_bandwidth_t), "_DXGKARG_DISPLAYSTATE_INTRUSIVE.DisplayBandwidth", display_bandwidth, 0x800, 0x20, true, 0xb355b7f2bdd2c85f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DISPLAYSTATE_INTRUSIVE.ReturnSubStatus", return_sub_status, 0x820, 0x20, true, 0x955f191140624bd0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif