#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagAXISINFOW.axMinValue", ax_min_value, 0x0, 0x20, true, 0x1d46964e4e6e2d40)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagAXISINFOW.axMaxValue", ax_max_value, 0x20, 0x20, true, 0x17a30c4be9817de9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 16>), "tagAXISINFOW.axAxisName", ax_axis_name, 0x40, 0x0, true, 0xf99deda33594e892)
#else
#define _m00
#define _m01
#define _m02
#endif