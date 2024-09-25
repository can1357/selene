#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3.PlaneCount", plane_count, 0x0, 0x20, true, 0xe6759c4d03b2214b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_plane_with_source2_t**), "_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3.ppPlanes", pp_planes, 0x40, 0x40, true, 0x8dda561660cf2d03)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3.PostCompositionCount", post_composition_count, 0x80, 0x20, true, 0x244d1f250e1e56fb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_post_composition_with_source_t**), "_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3.ppPostComposition", pp_post_composition, 0xc0, 0x40, true, 0x733ea3d112bb2d3c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3.Supported", supported, 0x100, 0x20, true, 0x3a24c83093a819a5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(dxgk_check_multiplane_overlay_support_return_info_t ), "_DXGKARG_CHECKMULTIPLANEOVERLAYSUPPORT3.ReturnInfo", return_info, 0x120, 0x20, true, 0xe58ac78ef6321290)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif