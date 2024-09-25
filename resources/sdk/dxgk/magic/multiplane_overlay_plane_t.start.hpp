#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE.LayerIndex", layer_index, 0x0, 0x20, true, 0x5b1deb7a98c7f2f5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE.Enabled", enabled, 0x20, 0x20, true, 0x7336fae0bd3eb3a2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE.AllocationSegment", allocation_segment, 0x40, 0x20, true, 0x405a5ee747c18ce3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE.AllocationAddress", allocation_address, 0x80, 0x40, true, 0x5fb5055cbda15d69)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_MULTIPLANE_OVERLAY_PLANE.hAllocation", h_allocation, 0xc0, 0x40, true, 0x3669a3e2efee3127)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_attributes_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE.PlaneAttributes", plane_attributes, 0x100, 0xc0, true, 0x84e6b0c2df25b706)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif