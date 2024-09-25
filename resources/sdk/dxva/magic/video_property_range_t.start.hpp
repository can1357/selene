#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_DXVA_VideoPropertyRange.MinValue", min_value, 0x0, 0x20, true, 0x634b2fc4648b3227)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_DXVA_VideoPropertyRange.MaxValue", max_value, 0x20, 0x20, true, 0xf6d0ff816db24410)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_DXVA_VideoPropertyRange.DefaultValue", default_value, 0x40, 0x20, true, 0xcb2369234b2b2482)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_DXVA_VideoPropertyRange.StepSize", step_size, 0x60, 0x20, true, 0x44e802291cf0fb4d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif