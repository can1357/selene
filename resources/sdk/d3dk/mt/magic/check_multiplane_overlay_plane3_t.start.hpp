#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3.LayerIndex", layer_index, 0x0, 0x20, true, 0x4c7fe544bb954bc2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3.hResource", h_resource, 0x20, 0x20, true, 0x92491fb489dc63f8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3.CompSurfaceLuid", comp_surface_luid, 0x40, 0x40, true, 0x19cd999ef4778611)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3.VidPnSourceId", vid_pn_source_id, 0x80, 0x20, true, 0x465cfb633125186c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::multiplane_overlay_attributes3_t*), "_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE3.pPlaneAttributes", p_plane_attributes, 0xc0, 0x40, true, 0x78dc9752151a6c3b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif