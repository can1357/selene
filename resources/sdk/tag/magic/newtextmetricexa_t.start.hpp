#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::newtextmetrica_t), "tagNEWTEXTMETRICEXA.ntmTm", ntm_tm, 0x0, 0x40, true, 0x5f1ba5e7e3b82db7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::fontsignature_t), "tagNEWTEXTMETRICEXA.ntmFontSig", ntm_font_sig, 0x240, 0xc0, true, 0x7e471950fb2c857b)
#else
#define _m00
#define _m01
#endif