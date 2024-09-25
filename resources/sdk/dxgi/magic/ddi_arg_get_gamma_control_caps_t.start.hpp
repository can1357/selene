#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_GET_GAMMA_CONTROL_CAPS.hDevice", h_device, 0x0, 0x40, true, 0x802a51ef6d5fa89c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::gamma_control_capabilities_t*), "DXGI_DDI_ARG_GET_GAMMA_CONTROL_CAPS.pGammaCapabilities", p_gamma_capabilities, 0x40, 0x40, true, 0xb2a7f66b5e44b11f)
#else
#define _m00
#define _m01
#endif