#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMDT_VIDPN_HW_CAPABILITY.DriverRotation", driver_rotation, 0x0, 0x1, true, 0x1eb0498b39ec8106, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMDT_VIDPN_HW_CAPABILITY.DriverScaling", driver_scaling, 0x1, 0x1, true, 0xa50b120b3a8b1a6f, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMDT_VIDPN_HW_CAPABILITY.DriverCloning", driver_cloning, 0x2, 0x1, true, 0x15fb8c254b0f0fe, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMDT_VIDPN_HW_CAPABILITY.DriverColorConvert", driver_color_convert, 0x3, 0x1, true, 0x7f60ddaa7033cf4c, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMDT_VIDPN_HW_CAPABILITY.DriverLinkedAdapaterOutput", driver_linked_adapater_output, 0x4, 0x1, true, 0xe5f844060cb5f4fe, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_D3DKMDT_VIDPN_HW_CAPABILITY.DriverRemoteDisplay", driver_remote_display, 0x5, 0x1, true, 0x8722430ad79ff153, 1, uint32_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif