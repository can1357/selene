#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE.hAllocation", h_allocation, 0x0, 0x40, true, 0x3470045ac7c0856f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE.VidPnSourceId", vid_pn_source_id, 0x40, 0x20, true, 0xb6331bc6d4c7e79a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_attributes_t), "_DXGK_CHECK_MULTIPLANE_OVERLAY_SUPPORT_PLANE.PlaneAttributes", plane_attributes, 0x60, 0xc0, true, 0xda7d35a1bf866952)
#else
#define _m00
#define _m01
#define _m02
#endif