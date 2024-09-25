#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::mdt::opm_random_number_t), "_DXGKMDT_OPM_ACTUAL_OUTPUT_FORMAT.rnRandomNumber", rn_random_number, 0x0, 0x80, true, 0x945f86eb7560c16a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_ACTUAL_OUTPUT_FORMAT.ulStatusFlags", ul_status_flags, 0x80, 0x20, true, 0x85bd97fed94bfd3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_ACTUAL_OUTPUT_FORMAT.ulDisplayWidth", ul_display_width, 0xa0, 0x20, true, 0x17827d37a2c15dd9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_ACTUAL_OUTPUT_FORMAT.ulDisplayHeight", ul_display_height, 0xc0, 0x20, true, 0xfe2aef25e0b0a9c9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::mdt::opm_interleave_format_t), "_DXGKMDT_OPM_ACTUAL_OUTPUT_FORMAT.ifInterleaveFormat", if_interleave_format, 0xe0, 0x20, true, 0xdbaa6a89e750d0e4)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_ACTUAL_OUTPUT_FORMAT.d3dFormat", d3d_format, 0x100, 0x20, true, 0x3a2e34dcb8099c72)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_ACTUAL_OUTPUT_FORMAT.ulFrequencyNumerator", ul_frequency_numerator, 0x120, 0x20, true, 0xbfdb4fb1c5342c79)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_ACTUAL_OUTPUT_FORMAT.ulFrequencyDenominator", ul_frequency_denominator, 0x140, 0x20, true, 0xb16d047b2dc43a51)
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