#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagPELARRAY.paXCount", pa_x_count, 0x0, 0x20, true, 0xb578ca09213cbbc0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagPELARRAY.paYCount", pa_y_count, 0x20, 0x20, true, 0x3ae59bae690d8b1e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagPELARRAY.paXExt", pa_x_ext, 0x40, 0x20, true, 0xe6401324384d3c4e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagPELARRAY.paYExt", pa_y_ext, 0x60, 0x20, true, 0xc02fe34c47e9535e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagPELARRAY.paRGBs", pa_rg_bs, 0x80, 0x8, true, 0x5f1ea727f7539fe5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif