#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t), "tagWCRANGE.wcLow", wc_low, 0x0, 0x10, true, 0x1e896072dfb6a069)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagWCRANGE.cGlyphs", c_glyphs, 0x10, 0x10, true, 0x7224c956f3db66c)
#else
#define _m00
#define _m01
#endif