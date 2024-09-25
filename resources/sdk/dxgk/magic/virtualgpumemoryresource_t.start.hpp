#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGK_VIRTUALGPUMEMORYRESOURCE.DriverAllocationHandle", driver_allocation_handle, 0x0, 0x40, true, 0x60d6e9055401c2d2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::gpu_physical_address_t), "_DXGK_VIRTUALGPUMEMORYRESOURCE.AllocationAddress", allocation_address, 0x40, 0x80, true, 0x8e4065922d21ee7c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_VIRTUALGPUMEMORYRESOURCE.AllocationSize", allocation_size, 0xc0, 0x40, true, 0xda34e02d74727ba9)
#else
#define _m00
#define _m01
#define _m02
#endif