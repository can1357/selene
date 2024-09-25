#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_D3DKMT_MIRACAST_DISPLAY_DEVICE_CAPS.HdcpSupported", hdcp_supported, 0x0, 0x8, true, 0x9f17bc94622646b8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_MIRACAST_DISPLAY_DEVICE_CAPS.DefaultControlPort", default_control_port, 0x20, 0x20, true, 0x56867a6eb6a6853b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_D3DKMT_MIRACAST_DISPLAY_DEVICE_CAPS.UsesIhvSolution", uses_ihv_solution, 0x40, 0x8, true, 0x330a0802b072eea7)
#else
#define _m00
#define _m01
#define _m02
#endif