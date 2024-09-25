#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_MULTIPLANE_OVERLAY3.LayerIndex", layer_index, 0x0, 0x20, true, 0x4151ecdd713586c2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::plane_specific_input_flags_t), "_D3DKMT_MULTIPLANE_OVERLAY3.InputFlags", input_flags, 0x20, 0x20, true, 0xbc1b190f6d32281a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::flipinterval_type_t), "_D3DKMT_MULTIPLANE_OVERLAY3.FlipInterval", flip_interval, 0x40, 0x20, true, 0x55ed415b191dc16c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_MULTIPLANE_OVERLAY3.MaxImmediateFlipLine", max_immediate_flip_line, 0x60, 0x20, true, 0x2fc7c6b6b483729c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_MULTIPLANE_OVERLAY3.AllocationCount", allocation_count, 0x80, 0x20, true, 0x998ca570502d2b0)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_D3DKMT_MULTIPLANE_OVERLAY3.pAllocationList", p_allocation_list, 0xc0, 0x40, true, 0x1456e24645f80dfa)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_MULTIPLANE_OVERLAY3.DriverPrivateDataSize", driver_private_data_size, 0x100, 0x20, true, 0x6522297074462338)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_MULTIPLANE_OVERLAY3.pDriverPrivateData", p_driver_private_data, 0x140, 0x40, true, 0xb8ece0f9eeadc7f8)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct d3dk::mt::multiplane_overlay_attributes3_t*), "_D3DKMT_MULTIPLANE_OVERLAY3.pPlaneAttributes", p_plane_attributes, 0x180, 0x40, true, 0x5687badfec1e18ef)
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
#endif