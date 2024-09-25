#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagLOGFONTW.lfHeight", lf_height, 0x0, 0x20, true, 0x726e847e179a32e9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagLOGFONTW.lfWidth", lf_width, 0x20, 0x20, true, 0x5ddeb84b62a52c4b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagLOGFONTW.lfEscapement", lf_escapement, 0x40, 0x20, true, 0x2ef03f95bb785dec)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagLOGFONTW.lfOrientation", lf_orientation, 0x60, 0x20, true, 0x8642ceb234e7d6a9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagLOGFONTW.lfWeight", lf_weight, 0x80, 0x20, true, 0xc4f63519e02da76a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLOGFONTW.lfItalic", lf_italic, 0xa0, 0x8, true, 0x9b4ec040e79f3a04)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLOGFONTW.lfUnderline", lf_underline, 0xa8, 0x8, true, 0x749a9a3cdc0dd733)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLOGFONTW.lfStrikeOut", lf_strike_out, 0xb0, 0x8, true, 0x2193a6fe82efabde)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLOGFONTW.lfCharSet", lf_char_set, 0xb8, 0x8, true, 0x8f7c3c4af76642d4)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLOGFONTW.lfOutPrecision", lf_out_precision, 0xc0, 0x8, true, 0xd739ca4d71f3d0c9)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLOGFONTW.lfClipPrecision", lf_clip_precision, 0xc8, 0x8, true, 0xe31a73ae292de638)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLOGFONTW.lfQuality", lf_quality, 0xd0, 0x8, true, 0x167dbbe6bdefdf5a)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLOGFONTW.lfPitchAndFamily", lf_pitch_and_family, 0xd8, 0x8, true, 0x6dd6dac95eb39c09)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 32>), "tagLOGFONTW.lfFaceName", lf_face_name, 0xe0, 0x0, true, 0xbc2f97f28bcac791)
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
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif