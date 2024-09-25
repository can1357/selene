#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE.hAllocation", h_allocation, 0x0, 0x40, true, 0xda569b8e3fc5475d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE.VidPnSourceId", vid_pn_source_id, 0x40, 0x20, true, 0x40ffd7f2db07564d)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE.LayerIndex", layer_index, 0x60, 0x20, true, 0x91d78c3bf79d42ed)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_attributes2_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE_WITH_SOURCE.PlaneAttributes", plane_attributes, 0x80, 0xe0, true, 0x64782415c623e657)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif