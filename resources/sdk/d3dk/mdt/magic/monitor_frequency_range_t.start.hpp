#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mdt::monitor_capabilities_origin_t), "_D3DKMDT_MONITOR_FREQUENCY_RANGE.Origin", origin, 0x0, 0x20, true, 0x8e716c2df8198029)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::frequency_range_t), "_D3DKMDT_MONITOR_FREQUENCY_RANGE.RangeLimits", range_limits, 0x20, 0x0, true, 0xf3c350c327157e92)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(d3dkmdt_monitor_frequency_range_constraint_t ), "_D3DKMDT_MONITOR_FREQUENCY_RANGE.ConstraintType", constraint_type, 0x120, 0x20, true, 0x71bee95ac69d45c3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::_2dregion_t), "_D3DKMDT_MONITOR_FREQUENCY_RANGE.Constraint.ActiveSize", active_size, 0x0, 0x40, true, 0xb40af8eef2219a21)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMDT_MONITOR_FREQUENCY_RANGE.Constraint.MaxPixelRate", max_pixel_rate, 0x0, 0x40, true, 0x6dbdb12fdf758aa2)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_constraint_t), "_D3DKMDT_MONITOR_FREQUENCY_RANGE.Constraint", constraint, 0x140, 0x40, true, 0x9f535d8efb7c8c2e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif