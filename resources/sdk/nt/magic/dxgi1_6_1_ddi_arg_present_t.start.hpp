#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI1_6_1_DDI_ARG_PRESENT.hDevice", h_device, 0x0, 0x40, true, 0xbc6d465029f42b5f)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct dxgi::ddi_arg_presentsurface_t*), "DXGI1_6_1_DDI_ARG_PRESENT.phSurfacesToPresent", ph_surfaces_to_present, 0x40, 0x40, true, 0x4614a82228510d5b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI1_6_1_DDI_ARG_PRESENT.SurfacesToPresent", surfaces_to_present, 0x80, 0x20, true, 0x452c671de98e12ec)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "DXGI1_6_1_DDI_ARG_PRESENT.hDstResource", h_dst_resource, 0xc0, 0x40, true, 0xd4dd4f55abd119c8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI1_6_1_DDI_ARG_PRESENT.DstSubResourceIndex", dst_sub_resource_index, 0x100, 0x20, true, 0x8bfbd3b7545398db)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "DXGI1_6_1_DDI_ARG_PRESENT.pDXGIContext", p_dxgi_context, 0x140, 0x40, true, 0x6a00ddbfd4397384)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgi::ddi_present_flags_t), "DXGI1_6_1_DDI_ARG_PRESENT.Flags", flags, 0x180, 0x20, true, 0xc87f6966f734e29b)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::ddi_flip_interval_type_t), "DXGI1_6_1_DDI_ARG_PRESENT.FlipInterval", flip_interval, 0x1a0, 0x20, true, 0xf389daf074026b69)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgi::ddi_mode_rotation_t), "DXGI1_6_1_DDI_ARG_PRESENT.RotationHint", rotation_hint, 0x1c0, 0x20, true, 0x3b73b56e5a28967a)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const struct tag::rect_t*), "DXGI1_6_1_DDI_ARG_PRESENT.pDirtyRects", p_dirty_rects, 0x200, 0x40, true, 0xf5afd6d919938e80)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI1_6_1_DDI_ARG_PRESENT.DirtyRects", dirty_rects, 0x240, 0x20, true, 0xad39519a659f38ce)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DXGI1_6_1_DDI_ARG_PRESENT.BackBufferMultiplicity", back_buffer_multiplicity, 0x260, 0x20, true, 0x76dd14f0c1a48ba1)
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
#define _m11
#endif