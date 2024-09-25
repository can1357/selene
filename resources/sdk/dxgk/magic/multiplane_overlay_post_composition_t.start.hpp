#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_post_composition_flags_t), "_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION.Flags", flags, 0x0, 0x20, true, 0x83425a08233401df)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION.SrcRect", src_rect, 0x20, 0x80, true, 0x88eef485a91106f3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION.DstRect", dst_rect, 0xa0, 0x80, true, 0x61e7ff6e1a6ce962)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::rotation_t), "_DXGK_MULTIPLANE_OVERLAY_POST_COMPOSITION.Rotation", rotation, 0x120, 0x20, true, 0xe6a9ecf16e497834)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif