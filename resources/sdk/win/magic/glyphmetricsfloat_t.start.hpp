#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_GLYPHMETRICSFLOAT.gmfBlackBoxX", gmf_black_box_x, 0x0, 0x20, true, 0xa4bb460f51ae033d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_GLYPHMETRICSFLOAT.gmfBlackBoxY", gmf_black_box_y, 0x20, 0x20, true, 0xd629b0e5671afd1d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::pointfloat_t), "_GLYPHMETRICSFLOAT.gmfptGlyphOrigin", gmfpt_glyph_origin, 0x40, 0x40, true, 0xd102c14c2f816127)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_GLYPHMETRICSFLOAT.gmfCellIncX", gmf_cell_inc_x, 0x80, 0x20, true, 0xea9673ef7116c46f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_GLYPHMETRICSFLOAT.gmfCellIncY", gmf_cell_inc_y, 0xa0, 0x20, true, 0x634678b297169a10)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif