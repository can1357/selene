#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DXVA_COPPStatusDisplayData.rApp", r_app, 0x0, 0x80, true, 0xbd5095ff552a42c8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusDisplayData.dwFlags", dw_flags, 0x80, 0x20, true, 0xb0edeecb24e56ca1)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusDisplayData.DisplayWidth", display_width, 0xa0, 0x20, true, 0x417aaeba7359564e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusDisplayData.DisplayHeight", display_height, 0xc0, 0x20, true, 0xda3e0f7a7225e83c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusDisplayData.Format", format, 0xe0, 0x20, true, 0xd056e2f835766ec1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusDisplayData.d3dFormat", d3d_format, 0x100, 0x20, true, 0xf6da08750737ae94)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusDisplayData.FreqNumerator", freq_numerator, 0x120, 0x20, true, 0x7b87665825eb4cdf)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXVA_COPPStatusDisplayData.FreqDenominator", freq_denominator, 0x140, 0x20, true, 0x408686a7de67d020)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif