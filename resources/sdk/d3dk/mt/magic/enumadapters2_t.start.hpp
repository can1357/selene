#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ENUMADAPTERS2.NumAdapters", num_adapters, 0x0, 0x20, true, 0xb395f99aef621b62)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::adapterinfo_t*), "_D3DKMT_ENUMADAPTERS2.Adapters", adapters, 0x40, 0x40, true, 0x7066078e3ac1f328)
#else
#define _m00
#define _m01
#endif