#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::workingsetflags_t), "_D3DKMT_WORKINGSETINFO.Flags", flags, 0x0, 0x20, true, 0xdba6f0867a8321f0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_WORKINGSETINFO.MinimumWorkingSetPercentile", minimum_working_set_percentile, 0x20, 0x20, true, 0x8e8354d9023cc6ed)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_WORKINGSETINFO.MaximumWorkingSetPercentile", maximum_working_set_percentile, 0x40, 0x20, true, 0xa1b8f6f3b03a466f)
#else
#define _m00
#define _m01
#define _m02
#endif