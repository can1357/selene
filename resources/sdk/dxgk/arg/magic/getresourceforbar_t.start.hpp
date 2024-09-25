#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETRESOURCEFORBAR.VirtualFunctionIndex", virtual_function_index, 0x0, 0x20, true, 0x8ba4a43015ed3e14)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETRESOURCEFORBAR.BarIndex", bar_index, 0x20, 0x20, true, 0x57f5a0cc99192c31)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "_DXGKARG_GETRESOURCEFORBAR.pResource", p_resource, 0x40, 0x40, true, 0xff03a3c9d6662058)
#else
#define _m00
#define _m01
#define _m02
#endif