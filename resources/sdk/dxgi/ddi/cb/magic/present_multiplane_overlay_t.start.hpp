#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY.pDXGIContext", p_dxgi_context, 0x0, 0x40, true, 0xc507c3929ddcd89b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY.hContext", h_context, 0x40, 0x40, true, 0x2a466045db961c90)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY.BroadcastContextCount", broadcast_context_count, 0x80, 0x20, true, 0xd3f390d9ce2dd351)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 64>), "DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY.BroadcastContext", broadcast_context, 0xc0, 0x0, true, 0xd6fe2b7e8f18e2d0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY.AllocationInfoCount", allocation_info_count, 0x10c0, 0x20, true, 0xfd86f00ac4278e3)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::dxgiddi_multiplane_overlay_allocation_info_t, 16>), "DXGIDDICB_PRESENT_MULTIPLANE_OVERLAY.AllocationInfo", allocation_info, 0x10e0, 0x0, true, 0x6d3b8424ea84486a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif