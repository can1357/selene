#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_SET_GAMMA_CONTROL.hDevice", h_device, 0x0, 0x40, true, 0x755aed3171e6e2c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::gamma_control_t), "DXGI_DDI_ARG_SET_GAMMA_CONTROL.GammaControl", gamma_control, 0x40, 0x20, true, 0x7ca09a0f583cc4ba)
#else
#define _m00
#define _m01
#endif