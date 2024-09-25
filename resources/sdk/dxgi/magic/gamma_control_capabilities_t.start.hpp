#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "DXGI_GAMMA_CONTROL_CAPABILITIES.ScaleAndOffsetSupported", scale_and_offset_supported, 0x0, 0x20, true, 0x3bbaba6fc6afc4f5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "DXGI_GAMMA_CONTROL_CAPABILITIES.MaxConvertedValue", max_converted_value, 0x20, 0x20, true, 0x74b41f4969ae591c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "DXGI_GAMMA_CONTROL_CAPABILITIES.MinConvertedValue", min_converted_value, 0x40, 0x20, true, 0x6401574a62f09f30)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_GAMMA_CONTROL_CAPABILITIES.NumGammaControlPoints", num_gamma_control_points, 0x60, 0x20, true, 0xe50fdd93ea3f110d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<float, 1025>), "DXGI_GAMMA_CONTROL_CAPABILITIES.ControlPointPositions", control_point_positions, 0x80, 0x20, true, 0xff8f6d716cef04dd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif