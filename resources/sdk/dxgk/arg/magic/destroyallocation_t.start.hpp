#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_DESTROYALLOCATION.NumAllocations", num_allocations, 0x0, 0x20, true, 0x59d1e68744c5aa3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const void**), "_DXGKARG_DESTROYALLOCATION.pAllocationList", p_allocation_list, 0x40, 0x40, true, 0xe900406567a82fa4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_DESTROYALLOCATION.hResource", h_resource, 0x80, 0x40, true, 0x21f8d36d9a60c284)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::destroyallocationflags_t), "_DXGKARG_DESTROYALLOCATION.Flags", flags, 0xc0, 0x20, true, 0x166591abd30e1b28)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif