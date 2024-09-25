#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2.hAllocation", h_allocation, 0x0, 0x40, true, 0x1f2cf87ef5a5b868)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2.VidPnSourceId", vid_pn_source_id, 0x40, 0x20, true, 0xc0535006c5a679aa)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2.LayerIndex", layer_index, 0x60, 0x20, true, 0x19de497e87b1300)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_attributes3_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE2.PlaneAttributes", plane_attributes, 0x80, 0xc0, true, 0x830bc4c98c4da3b2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif