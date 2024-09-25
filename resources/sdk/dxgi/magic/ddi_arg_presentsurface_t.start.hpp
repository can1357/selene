#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_PRESENTSURFACE.hSurface", h_surface, 0x0, 0x40, true, 0x8cb843ecd7725730)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_PRESENTSURFACE.SubResourceIndex", sub_resource_index, 0x40, 0x20, true, 0x5645e337de5629bb)
#else
#define _m00
#define _m01
#endif