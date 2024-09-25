#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::multiplane_overlay_post_composition_flags_t), "_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION.Flags", flags, 0x0, 0x20, true, 0x83ee087af1c23c17)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION.SrcRect", src_rect, 0x20, 0x80, true, 0x56a5e9db3b3d2074)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct tag::rect_t), "_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION.DstRect", dst_rect, 0xa0, 0x80, true, 0x1cf80a0924eac4a2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::rotation_t), "_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION.Rotation", rotation, 0x120, 0x20, true, 0xe9d9c4864220418a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif