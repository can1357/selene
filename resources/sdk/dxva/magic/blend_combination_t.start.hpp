#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_BlendCombination.wPictureSourceIndex", w_picture_source_index, 0x0, 0x10, true, 0xd302b665497b368d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_BlendCombination.wBlendedDestinationIndex", w_blended_destination_index, 0x10, 0x10, true, 0xf9ad7cceb458d47a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXVA_BlendCombination.PictureSourceRect16thPel", picture_source_rect16th_pel, 0x20, 0x80, true, 0x9edd698a75a31e64)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXVA_BlendCombination.PictureDestinationRect", picture_destination_rect, 0xa0, 0x80, true, 0x5145db3a2c1ee1e9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXVA_BlendCombination.GraphicSourceRect", graphic_source_rect, 0x120, 0x80, true, 0x46ab24bdcd13e929)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXVA_BlendCombination.GraphicDestinationRect", graphic_destination_rect, 0x1a0, 0x80, true, 0xd49eee9447a6bcc0)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXVA_BlendCombination.wBlendDelay", w_blend_delay, 0x220, 0x10, true, 0x83f5276f50b1fe30)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_BlendCombination.bBlendOn", b_blend_on, 0x230, 0x8, true, 0x5349c250dfeb4d89)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXVA_BlendCombination.bWholePlaneAlpha", b_whole_plane_alpha, 0x238, 0x8, true, 0x5e00a94548d234e0)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxva::ayu_vsample2_t), "_DXVA_BlendCombination.OutsideYUVcolor", outside_yu_vcolor, 0x240, 0x20, true, 0x2ad673dad092ff11)
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
#define _m09
#endif