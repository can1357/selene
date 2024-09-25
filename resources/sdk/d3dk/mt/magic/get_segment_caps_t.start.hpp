#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GET_SEGMENT_CAPS.PhysicalAdapterIndex", physical_adapter_index, 0x0, 0x20, true, 0xd0455f41c944effd)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GET_SEGMENT_CAPS.NumSegments", num_segments, 0x20, 0x20, true, 0x4003b7ef2d1cf131)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct d3dk::mt::segment_caps_t, 32>), "_D3DKMT_GET_SEGMENT_CAPS.SegmentCaps", segment_caps, 0x40, 0x0, true, 0x3744899d309c2cfc)
#else
#define _m00
#define _m01
#define _m02
#endif