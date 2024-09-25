#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GET_MULTIPLANE_OVERLAY_CAPS.hAdapter", h_adapter, 0x0, 0x20, true, 0x54fd4a00cf3123fa)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GET_MULTIPLANE_OVERLAY_CAPS.VidPnSourceId", vid_pn_source_id, 0x20, 0x20, true, 0xaff6d50296ba6594)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GET_MULTIPLANE_OVERLAY_CAPS.MaxPlanes", max_planes, 0x40, 0x20, true, 0x21d6c2400a68039b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GET_MULTIPLANE_OVERLAY_CAPS.MaxRGBPlanes", max_rgb_planes, 0x60, 0x20, true, 0x548c4314d6d86982)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GET_MULTIPLANE_OVERLAY_CAPS.MaxYUVPlanes", max_yuv_planes, 0x80, 0x20, true, 0x8606357bd3cbd4c0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::multiplane_overlay_caps_t), "_D3DKMT_GET_MULTIPLANE_OVERLAY_CAPS.OverlayCaps", overlay_caps, 0xa0, 0x20, true, 0xae05ede52021faae)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_D3DKMT_GET_MULTIPLANE_OVERLAY_CAPS.MaxStretchFactor", max_stretch_factor, 0xc0, 0x20, true, 0xaad5c0c7c960dd14)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(float), "_D3DKMT_GET_MULTIPLANE_OVERLAY_CAPS.MaxShrinkFactor", max_shrink_factor, 0xe0, 0x20, true, 0x890200ea46e6c056)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif