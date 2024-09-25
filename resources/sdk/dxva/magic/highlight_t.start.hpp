#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Highlight.wHighlightActive", w_highlight_active, 0x0, 0x10, true, 0x546353eecbf9640d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Highlight.wHighlightIndices", w_highlight_indices, 0x10, 0x10, true, 0x6bdbe9584fcfb27)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_Highlight.wHighlightAlphas", w_highlight_alphas, 0x20, 0x10, true, 0xc331a40bd27395a1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXVA_Highlight.HighlightRect", highlight_rect, 0x30, 0x80, true, 0xcad750da6b7ec818)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif