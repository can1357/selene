#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DESTROYALLOCATION.hDevice", h_device, 0x0, 0x20, true, 0x42e0854870579f45)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DESTROYALLOCATION.hResource", h_resource, 0x20, 0x20, true, 0xeecaa14480280937)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_DESTROYALLOCATION.phAllocationList", ph_allocation_list, 0x40, 0x40, true, 0x5424dd5d72dab4e2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DESTROYALLOCATION.AllocationCount", allocation_count, 0x80, 0x20, true, 0xd7b1cb45981881e8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif