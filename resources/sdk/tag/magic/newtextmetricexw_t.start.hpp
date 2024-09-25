#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::newtextmetricw_t), "tagNEWTEXTMETRICEXW.ntmTm", ntm_tm, 0x0, 0x60, true, 0xb105f50553ef70fc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::fontsignature_t), "tagNEWTEXTMETRICEXW.ntmFontSig", ntm_font_sig, 0x260, 0xc0, true, 0x1ccf8e1e81f67413)
#else
#define _m00
#define _m01
#endif