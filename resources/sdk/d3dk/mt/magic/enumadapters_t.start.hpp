#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ENUMADAPTERS.NumAdapters", num_adapters, 0x0, 0x20, true, 0x4ee57b2d858b1e7a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct d3dk::mt::adapterinfo_t, 16>), "_D3DKMT_ENUMADAPTERS.Adapters", adapters, 0x20, 0x0, true, 0x12edc40f3cbb2a33)
#else
#define _m00
#define _m01
#endif