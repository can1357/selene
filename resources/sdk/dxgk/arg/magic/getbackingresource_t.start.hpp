#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_GETBACKINGRESOURCE.VirtualFunctionIndex", virtual_function_index, 0x0, 0x20, true, 0x8a20798326f3cfb9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGKARG_GETBACKINGRESOURCE.ResourceIndex", resource_index, 0x20, 0x10, true, 0xab6d1aeae5f88534)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_descriptor_t*), "_DXGKARG_GETBACKINGRESOURCE.Resource", resource, 0x40, 0x40, true, 0x3edb857530b7d1af)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::mdl_t*), "_DXGKARG_GETBACKINGRESOURCE.pMdl", p_mdl, 0x80, 0x40, true, 0x4aa71605398b0549)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif