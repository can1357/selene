#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagGCP_RESULTSA.lStructSize", l_struct_size, 0x0, 0x20, true, 0xa2d41a26c9d30742)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char*), "tagGCP_RESULTSA.lpOutString", lp_out_string, 0x40, 0x40, true, 0x3d33f75aa9d7344d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "tagGCP_RESULTSA.lpOrder", lp_order, 0x80, 0x40, true, 0xbc1efabc6620b7a5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t*), "tagGCP_RESULTSA.lpDx", lp_dx, 0xc0, 0x40, true, 0x71a259dd373b253a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t*), "tagGCP_RESULTSA.lpCaretPos", lp_caret_pos, 0x100, 0x40, true, 0x83ea864381d17844)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char*), "tagGCP_RESULTSA.lpClass", lp_class, 0x140, 0x40, true, 0x782728160f826d45)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagGCP_RESULTSA.lpGlyphs", lp_glyphs, 0x180, 0x40, true, 0x1eeb8525dd9f7e46)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagGCP_RESULTSA.nGlyphs", n_glyphs, 0x1c0, 0x20, true, 0x20696d3eeafab040)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagGCP_RESULTSA.nMaxFit", n_max_fit, 0x1e0, 0x20, true, 0x5de83a95987c948a)
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