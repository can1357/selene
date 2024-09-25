#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY1.pDXGIContext", p_dxgi_context, 0x0, 0x40, true, 0x3d70277f60b9f608)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY1.PresentPlaneCount", present_plane_count, 0x40, 0x20, true, 0xd88148ccf2076320)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::dxgiddi_multiplane_overlay_plane_info_t**), "DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY1.ppPresentPlanes", pp_present_planes, 0x80, 0x40, true, 0x8d07afe88655a534)
#else
#define _m00
#define _m01
#define _m02
#endif