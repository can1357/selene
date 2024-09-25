#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagGCP_RESULTSW.lStructSize", l_struct_size, 0x0, 0x20, true, 0xf86fc61fbd57ac98)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagGCP_RESULTSW.lpOutString", lp_out_string, 0x40, 0x40, true, 0x63f9b7f564b0f5e6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "tagGCP_RESULTSW.lpOrder", lp_order, 0x80, 0x40, true, 0xe7680e5619aba2ee)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t*), "tagGCP_RESULTSW.lpDx", lp_dx, 0xc0, 0x40, true, 0x51685acc1ed595c7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t*), "tagGCP_RESULTSW.lpCaretPos", lp_caret_pos, 0x100, 0x40, true, 0xae903b45fbb9a73d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(char*), "tagGCP_RESULTSW.lpClass", lp_class, 0x140, 0x40, true, 0xfb135ffac31fc201)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wchar_t*), "tagGCP_RESULTSW.lpGlyphs", lp_glyphs, 0x180, 0x40, true, 0x6c40bbee83408bc1)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "tagGCP_RESULTSW.nGlyphs", n_glyphs, 0x1c0, 0x20, true, 0xae44fd03b2c80dc6)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagGCP_RESULTSW.nMaxFit", n_max_fit, 0x1e0, 0x20, true, 0xe8b25f8da8f89d93)
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