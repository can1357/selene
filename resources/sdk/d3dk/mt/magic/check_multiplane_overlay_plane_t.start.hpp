#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE.hResource", h_resource, 0x0, 0x20, true, 0xfad3efbf79c1424b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::luid_t), "D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE.CompSurfaceLuid", comp_surface_luid, 0x20, 0x40, true, 0x9176ad33155b54b6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE.VidPnSourceId", vid_pn_source_id, 0x60, 0x20, true, 0x47a4233b065763e2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::multiplane_overlay_attributes_t), "D3DKMT_CHECK_MULTIPLANE_OVERLAY_PLANE.PlaneAttributes", plane_attributes, 0x80, 0x40, true, 0x33db9c7976540f8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif