#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_PRESENT1.hDevice", h_device, 0x0, 0x40, true, 0x4c980777910a79c6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct dxgi::ddi_arg_presentsurface_t*), "DXGI_DDI_ARG_PRESENT1.phSurfacesToPresent", ph_surfaces_to_present, 0x40, 0x40, true, 0x3594df80c5c0e849)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_PRESENT1.SurfacesToPresent", surfaces_to_present, 0x80, 0x20, true, 0x434e511375aa1236)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI_DDI_ARG_PRESENT1.hDstResource", h_dst_resource, 0xc0, 0x40, true, 0xa0ff00491fcd77e2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_PRESENT1.DstSubResourceIndex", dst_sub_resource_index, 0x100, 0x20, true, 0x3308d75fbc5f4bf)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "DXGI_DDI_ARG_PRESENT1.pDXGIContext", p_dxgi_context, 0x140, 0x40, true, 0x9a7652f8a0c40708)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::ddi_present_flags_t), "DXGI_DDI_ARG_PRESENT1.Flags", flags, 0x180, 0x20, true, 0x3c474e66b4faa93c)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::ddi_flip_interval_type_t), "DXGI_DDI_ARG_PRESENT1.FlipInterval", flip_interval, 0x1a0, 0x20, true, 0x55744e9c3de15c55)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct tag::rect_t*), "DXGI_DDI_ARG_PRESENT1.pDirtyRects", p_dirty_rects, 0x200, 0x40, true, 0x2a685b60877e7f43)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_PRESENT1.DirtyRects", dirty_rects, 0x240, 0x20, true, 0xb564b45f8fc0ab82)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI_DDI_ARG_PRESENT1.BackBufferMultiplicity", back_buffer_multiplicity, 0x260, 0x20, true, 0xff20eae042779f41)
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
#define _m09
#define _m10
#endif