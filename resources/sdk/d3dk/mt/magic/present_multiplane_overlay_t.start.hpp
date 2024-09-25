#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DKMT_PRESENT_MULTIPLANE_OVERLAY.hDevice", h_device, 0x0, 0x20, true, 0x7ea8925ee9a4c633)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DKMT_PRESENT_MULTIPLANE_OVERLAY.hContext", h_context, 0x0, 0x20, true, 0x18c9264dde671c2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DKMT_PRESENT_MULTIPLANE_OVERLAY.BroadcastContextCount", broadcast_context_count, 0x20, 0x20, true, 0x7cf2b1501ca82ed)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 64>), "D3DKMT_PRESENT_MULTIPLANE_OVERLAY.BroadcastContext", broadcast_context, 0x40, 0x0, true, 0x95ff8c8b026dff7b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DKMT_PRESENT_MULTIPLANE_OVERLAY.VidPnSourceId", vid_pn_source_id, 0x840, 0x20, true, 0xff93bf050e588226)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DKMT_PRESENT_MULTIPLANE_OVERLAY.PresentCount", present_count, 0x860, 0x20, true, 0x52cd92b5e4ce1018)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::flipinterval_type_t), "D3DKMT_PRESENT_MULTIPLANE_OVERLAY.FlipInterval", flip_interval, 0x880, 0x20, true, 0xc0550a69adb51257)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::presentflags_t), "D3DKMT_PRESENT_MULTIPLANE_OVERLAY.Flags", flags, 0x8a0, 0x20, true, 0x42761bd0389ac865)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DKMT_PRESENT_MULTIPLANE_OVERLAY.PresentPlaneCount", present_plane_count, 0x8c0, 0x20, true, 0x18871271d920e955)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::multiplane_overlay_t*), "D3DKMT_PRESENT_MULTIPLANE_OVERLAY.pPresentPlanes", p_present_planes, 0x900, 0x40, true, 0x1f102d5e23f6216c)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "D3DKMT_PRESENT_MULTIPLANE_OVERLAY.Duration", duration, 0x940, 0x20, true, 0xf4503a65130e691a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif