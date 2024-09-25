#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagGLYPHSET.cbThis", cb_this, 0x0, 0x20, true, 0xd5d7b65009fb16ea)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagGLYPHSET.flAccel", fl_accel, 0x20, 0x20, true, 0xdf7c78fa55d8834e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagGLYPHSET.cGlyphsSupported", c_glyphs_supported, 0x40, 0x20, true, 0xe189ca02864bdd18)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagGLYPHSET.cRanges", c_ranges, 0x60, 0x20, true, 0xb0e349cf89df662a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct tag::wcrange_t, 1>), "tagGLYPHSET.ranges", ranges, 0x80, 0x20, true, 0xeeeb9299d5a5b5b3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif