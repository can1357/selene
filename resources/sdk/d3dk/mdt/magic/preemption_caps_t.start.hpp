#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(d3dkmdt_graphics_preemption_granularity_t ), "_D3DKMDT_PREEMPTION_CAPS.GraphicsPreemptionGranularity", graphics_preemption_granularity, 0x0, 0x20, true, 0xd55e00211f63c98a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::compute_preemption_granularity_t), "_D3DKMDT_PREEMPTION_CAPS.ComputePreemptionGranularity", compute_preemption_granularity, 0x20, 0x20, true, 0x9d943653566730d1)
#else
#define _m00
#define _m01
#endif