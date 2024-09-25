#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GLYPHMETRICS.gmBlackBoxX", gm_black_box_x, 0x0, 0x20, true, 0x5e760f04cd54f941)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_GLYPHMETRICS.gmBlackBoxY", gm_black_box_y, 0x20, 0x20, true, 0x3c21db99fa64c6e6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::point_t), "_GLYPHMETRICS.gmptGlyphOrigin", gmpt_glyph_origin, 0x40, 0x40, true, 0x1f10896d2f7db7d6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_GLYPHMETRICS.gmCellIncX", gm_cell_inc_x, 0x80, 0x10, true, 0xf97ba6818c555289)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int16_t), "_GLYPHMETRICS.gmCellIncY", gm_cell_inc_y, 0x90, 0x10, true, 0xfff6f7968cc6190b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif