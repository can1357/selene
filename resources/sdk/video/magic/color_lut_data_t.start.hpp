#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_COLOR_LUT_DATA.Length", length, 0x0, 0x20, true, 0xd733daaa54da2d8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VIDEO_COLOR_LUT_DATA.LutDataFormat", lut_data_format, 0x20, 0x20, true, 0x304d899f514f465)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_VIDEO_COLOR_LUT_DATA.LutData", lut_data, 0x40, 0x8, true, 0x60925643daaab150)
#else
#define _m00
#define _m01
#define _m02
#endif