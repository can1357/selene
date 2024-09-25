#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const void*), "_DXGKARG_CREATEALLOCATION.pPrivateDriverData", p_private_driver_data, 0x0, 0x40, true, 0x8f4a0310b70db257)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CREATEALLOCATION.PrivateDriverDataSize", private_driver_data_size, 0x40, 0x20, true, 0xeac3a87f0ccbda9e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CREATEALLOCATION.NumAllocations", num_allocations, 0x60, 0x20, true, 0xddc20caa31424e9c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::allocationinfo_t*), "_DXGKARG_CREATEALLOCATION.pAllocationInfo", p_allocation_info, 0x80, 0x40, true, 0x96715bda04fd2a0d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_CREATEALLOCATION.hResource", h_resource, 0xc0, 0x40, true, 0x3cf76733d2bdd9ca)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::createallocationflags_t), "_DXGKARG_CREATEALLOCATION.Flags", flags, 0x100, 0x20, true, 0xd56598f66d41c5bc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif