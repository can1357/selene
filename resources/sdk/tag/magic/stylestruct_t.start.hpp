#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTYLESTRUCT.styleOld", style_old, 0x0, 0x20, true, 0xad68a0279257e33c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagSTYLESTRUCT.styleNew", style_new, 0x20, 0x20, true, 0xf8526f60dfbe3cd)
#else
#define _m00
#define _m01
#endif