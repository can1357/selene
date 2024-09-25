#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_PRESENT.hDevice", h_device, 0x0, 0x40, true, 0x318ea5531fcdb9a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_PRESENT.hSurfaceToPresent", h_surface_to_present, 0x40, 0x40, true, 0xcf5068155339881c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_PRESENT.SrcSubResourceIndex", src_sub_resource_index, 0x80, 0x20, true, 0x9837b3563113407c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_PRESENT.hDstResource", h_dst_resource, 0xc0, 0x40, true, 0x9765b7d42ceb30c1)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_PRESENT.DstSubResourceIndex", dst_sub_resource_index, 0x100, 0x20, true, 0xa91395b9694a102d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "DXGI_DDI_ARG_PRESENT.pDXGIContext", p_dxgi_context, 0x140, 0x40, true, 0xce60a87dc644a31)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::ddi_present_flags_t), "DXGI_DDI_ARG_PRESENT.Flags", flags, 0x180, 0x20, true, 0x3e2f4acea43d4e73)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::ddi_flip_interval_type_t), "DXGI_DDI_ARG_PRESENT.FlipInterval", flip_interval, 0x1a0, 0x20, true, 0x72beef6889306d1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif