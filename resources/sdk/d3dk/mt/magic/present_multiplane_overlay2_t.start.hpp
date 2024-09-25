#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2.hAdapter", h_adapter, 0x0, 0x20, true, 0x7a6a66ecdeb2c9dd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2.hDevice", h_device, 0x20, 0x20, true, 0x6f8d35ce350755bb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2.hContext", h_context, 0x20, 0x20, true, 0xea567bd61ef7b929)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2.BroadcastContextCount", broadcast_context_count, 0x40, 0x20, true, 0x1e03002ef159e0c3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 64>), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2.BroadcastContext", broadcast_context, 0x60, 0x0, true, 0x22cddb8dc1454e7b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2.VidPnSourceId", vid_pn_source_id, 0x860, 0x20, true, 0x2717c820d04aece7)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2.PresentCount", present_count, 0x880, 0x20, true, 0x77af203d8b111594)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::flipinterval_type_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2.FlipInterval", flip_interval, 0x8a0, 0x20, true, 0x1201d006e5dcc8e)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::presentflags_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2.Flags", flags, 0x8c0, 0x20, true, 0x880aabe71e7cfca9)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2.PresentPlaneCount", present_plane_count, 0x8e0, 0x20, true, 0xdb86dabd3df2104)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::multiplane_overlay2_t*), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2.pPresentPlanes", p_present_planes, 0x900, 0x40, true, 0x33cfdbc385aae789)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY2.Duration", duration, 0x940, 0x20, true, 0x772a43a121252b5)
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
#define _m11
#endif