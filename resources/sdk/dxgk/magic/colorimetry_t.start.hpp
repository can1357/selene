#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::_2dregion_t), "_DXGK_COLORIMETRY.RedPoint", red_point, 0x0, 0x40, true, 0x13c99528fce94dd0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::_2dregion_t), "_DXGK_COLORIMETRY.GreenPoint", green_point, 0x40, 0x40, true, 0x87cec646d2bc3dd2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::_2dregion_t), "_DXGK_COLORIMETRY.BluePoint", blue_point, 0x80, 0x40, true, 0xdf37571faaab4c66)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::_2dregion_t), "_DXGK_COLORIMETRY.WhitePoint", white_point, 0xc0, 0x40, true, 0x603abc581b47c496)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_COLORIMETRY.MinLuminance", min_luminance, 0x100, 0x20, true, 0x71a8ff367bcf21b4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_COLORIMETRY.MaxLuminance", max_luminance, 0x120, 0x20, true, 0x3a22853acfcb666a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_COLORIMETRY.MaxFullFrameLuminance", max_full_frame_luminance, 0x140, 0x20, true, 0x9c50b6a74b8a3dd8)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union d3dk::mdt::wire_format_and_preference_t), "_DXGK_COLORIMETRY.FormatBitDepths", format_bit_depths, 0x160, 0x20, true, 0x58296d18ca1e9263)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union dxgk::standard_colorimetry_flags_t), "_DXGK_COLORIMETRY.StandardColorimetryFlags", standard_colorimetry_flags, 0x180, 0x20, true, 0x1e81664d1a2f12a7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif