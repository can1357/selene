#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE2.LayerIndex", layer_index, 0x0, 0x20, true, 0x18a5e180d471b556)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE2.Enabled", enabled, 0x20, 0x20, true, 0x1526ee2590fe7be0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE2.AllocationSegment", allocation_segment, 0x40, 0x20, true, 0xbda712fc28ea3f45)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE2.AllocationAddress", allocation_address, 0x80, 0x40, true, 0xda0cda42ac907b96)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_MULTIPLANE_OVERLAY_PLANE2.hAllocation", h_allocation, 0xc0, 0x40, true, 0x9aab8f8832bef826)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::multiplane_overlay_attributes2_t), "_DXGK_MULTIPLANE_OVERLAY_PLANE2.PlaneAttributes", plane_attributes, 0x100, 0xe0, true, 0xd74c667de7f3411d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif