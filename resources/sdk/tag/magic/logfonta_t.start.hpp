#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagLOGFONTA.lfHeight", lf_height, 0x0, 0x20, true, 0x3dae0883ea7a03e6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagLOGFONTA.lfWidth", lf_width, 0x20, 0x20, true, 0x2acc2c895babda3c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagLOGFONTA.lfEscapement", lf_escapement, 0x40, 0x20, true, 0xabf40bf400c0b0d9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagLOGFONTA.lfOrientation", lf_orientation, 0x60, 0x20, true, 0xce6bd74fdaafdb2a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagLOGFONTA.lfWeight", lf_weight, 0x80, 0x20, true, 0x448c8e4163cce244)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLOGFONTA.lfItalic", lf_italic, 0xa0, 0x8, true, 0x152814f8777cb195)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLOGFONTA.lfUnderline", lf_underline, 0xa8, 0x8, true, 0x8ca9da4091954f12)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLOGFONTA.lfStrikeOut", lf_strike_out, 0xb0, 0x8, true, 0xb33d6b5b242ef6f1)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLOGFONTA.lfCharSet", lf_char_set, 0xb8, 0x8, true, 0x88ae119d2f99d2d0)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLOGFONTA.lfOutPrecision", lf_out_precision, 0xc0, 0x8, true, 0xb572b0c2419ed788)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLOGFONTA.lfClipPrecision", lf_clip_precision, 0xc8, 0x8, true, 0xf9ea028f1e34bc19)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLOGFONTA.lfQuality", lf_quality, 0xd0, 0x8, true, 0xf573bdb554e9957b)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "tagLOGFONTA.lfPitchAndFamily", lf_pitch_and_family, 0xd8, 0x8, true, 0xcefecdd33a60ed00)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<char, 32>), "tagLOGFONTA.lfFaceName", lf_face_name, 0xe0, 0x0, true, 0xbaadd11b2dc97bb7)
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