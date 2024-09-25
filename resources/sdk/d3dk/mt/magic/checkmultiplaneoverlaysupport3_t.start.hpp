#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT3.hAdapter", h_adapter, 0x0, 0x20, true, 0x88aa1dce46b74c0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT3.hDevice", h_device, 0x20, 0x20, true, 0x17ea0770a5ca0a8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT3.PlaneCount", plane_count, 0x40, 0x20, true, 0x571cdac490394e97)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::check_multiplane_overlay_plane3_t**), "_D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT3.ppOverlayPlanes", pp_overlay_planes, 0x80, 0x40, true, 0x7753757cdf55bec1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT3.PostCompositionCount", post_composition_count, 0xc0, 0x20, true, 0xede6a967b99a96f5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::multiplane_overlay_post_composition_with_source_t**), "_D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT3.ppPostComposition", pp_post_composition, 0x100, 0x40, true, 0x1b36aaa52ed56027)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT3.Supported", supported, 0x140, 0x20, true, 0xbb88feed1bd27573)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(d3dkmt_check_multiplane_overlay_support_return_info_t ), "_D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT3.ReturnInfo", return_info, 0x160, 0x20, true, 0xad00af7dc3073779)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif