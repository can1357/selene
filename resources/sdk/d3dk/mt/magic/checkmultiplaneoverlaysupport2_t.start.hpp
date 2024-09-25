#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT2.hAdapter", h_adapter, 0x0, 0x20, true, 0x628fe16a6b9329bb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT2.hDevice", h_device, 0x20, 0x20, true, 0x13654822511dda21)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT2.PlaneCount", plane_count, 0x40, 0x20, true, 0xe82493d8f5e202a5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::check_multiplane_overlay_plane2_t*), "_D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT2.pOverlayPlanes", p_overlay_planes, 0x80, 0x40, true, 0x9d89fbaa506cd2cb)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT2.Supported", supported, 0xc0, 0x20, true, 0x21d437b8a73c38f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(d3dkmt_check_multiplane_overlay_support_return_info_t ), "_D3DKMT_CHECKMULTIPLANEOVERLAYSUPPORT2.ReturnInfo", return_info, 0xe0, 0x20, true, 0x934bd433a7f9d506)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif