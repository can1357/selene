#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2.LayerIndex", layer_index, 0x0, 0x20, true, 0x2ef1ff4570e45d30)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2.hResource", h_resource, 0x20, 0x20, true, 0xfb20279f9ce8c79f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2.CompSurfaceLuid", comp_surface_luid, 0x40, 0x40, true, 0x3f3c875ccacee5ba)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2.VidPnSourceId", vid_pn_source_id, 0x80, 0x20, true, 0x35908fbc71375f13)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::multiplane_overlay_attributes2_t), "_D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE2.PlaneAttributes", plane_attributes, 0xc0, 0x40, true, 0xc23ed75bfc6b7db8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif