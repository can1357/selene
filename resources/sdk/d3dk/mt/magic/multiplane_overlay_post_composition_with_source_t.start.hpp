#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE.VidPnSourceId", vid_pn_source_id, 0x0, 0x20, true, 0xde39da1b7ad1ea3a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::multiplane_overlay_post_composition_t), "_D3DKMT_MULTIPLANE_OVERLAY_POST_COMPOSITION_WITH_SOURCE.PostComposition", post_composition, 0x20, 0x40, true, 0x1debf785765ca826)
#else
#define _m00
#define _m01
#endif