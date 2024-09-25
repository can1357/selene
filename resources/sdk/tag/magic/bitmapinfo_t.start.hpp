#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::bitmapinfoheader_t), "tagBITMAPINFO.bmiHeader", bmi_header, 0x0, 0x40, true, 0x96d3e8cf4a0fd50e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct tag::rgbquad_t, 1>), "tagBITMAPINFO.bmiColors", bmi_colors, 0x140, 0x20, true, 0x3de1dcd494a920b9)
#else
#define _m00
#define _m01
#endif