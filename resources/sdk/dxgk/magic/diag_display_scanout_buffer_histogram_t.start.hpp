#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGK_DIAG_DISPLAY_SCANOUT_BUFFER_HISTOGRAM.MinPixelValue", min_pixel_value, 0x0, 0x20, true, 0x2da5cf6157ba273f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGK_DIAG_DISPLAY_SCANOUT_BUFFER_HISTOGRAM.MaxPixelValue", max_pixel_value, 0x20, 0x20, true, 0x54bbd6013782fbc)
#else
#define _m00
#define _m01
#endif