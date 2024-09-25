#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGIDDI_MULTIPLANE_OVERLAY_ALLOCATION_INFO.PresentAllocation", present_allocation, 0x0, 0x20, true, 0x3d35a4ab661eecc3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGIDDI_MULTIPLANE_OVERLAY_ALLOCATION_INFO.SubResourceIndex", sub_resource_index, 0x20, 0x20, true, 0x29dda7a3517e1d6b)
#else
#define _m00
#define _m01
#endif