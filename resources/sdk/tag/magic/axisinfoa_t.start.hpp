#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagAXISINFOA.axMinValue", ax_min_value, 0x0, 0x20, true, 0x1e7ff41abab4d76a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagAXISINFOA.axMaxValue", ax_max_value, 0x20, 0x20, true, 0xdc58d4a7b3d8187)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "tagAXISINFOA.axAxisName", ax_axis_name, 0x40, 0x80, true, 0xcce4c8286e989162)
#else
#define _m00
#define _m01
#define _m02
#endif