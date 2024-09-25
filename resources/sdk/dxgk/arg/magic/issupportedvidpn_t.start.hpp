#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::hvidpn_t*), "_DXGKARG_ISSUPPORTEDVIDPN.hDesiredVidPn", h_desired_vid_pn, 0x0, 0x40, true, 0xee1c5c360d469702)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGKARG_ISSUPPORTEDVIDPN.IsVidPnSupported", is_vid_pn_supported, 0x40, 0x8, true, 0x9db930491678bf06)
#else
#define _m00
#define _m01
#endif