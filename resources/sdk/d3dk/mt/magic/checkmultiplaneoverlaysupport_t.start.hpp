#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT.hDevice", h_device, 0x0, 0x20, true, 0xd9d64cc1c8757275)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT.PlaneCount", plane_count, 0x20, 0x20, true, 0x5118d24dff99cf18)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::check_multiplane_overlay_plane_t*), "_D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT.pOverlayPlanes", p_overlay_planes, 0x40, 0x40, true, 0x38a833bbec801c11)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT.Supported", supported, 0x80, 0x20, true, 0xf3a68c9b8a38e798)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(d3dkmt_check_multiplane_overlay_support_return_info_t ), "_D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT.ReturnInfo", return_info, 0xa0, 0x20, true, 0x4440da3ef009fdf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif