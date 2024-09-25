#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union d3dk::mt::enumadapters_filter_t), "_D3DKMT_ENUMADAPTERS3.Filter", filter, 0x0, 0x40, true, 0x6d896a2ffc5142cf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ENUMADAPTERS3.NumAdapters", num_adapters, 0x40, 0x20, true, 0x545c8678c8396574)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::adapterinfo_t*), "_D3DKMT_ENUMADAPTERS3.pAdapters", p_adapters, 0x80, 0x40, true, 0x9cced9b0084725bb)
#else
#define _m00
#define _m01
#define _m02
#endif