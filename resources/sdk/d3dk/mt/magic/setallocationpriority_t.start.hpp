#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETALLOCATIONPRIORITY.hDevice", h_device, 0x0, 0x20, true, 0xf9324983f27fe8da)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETALLOCATIONPRIORITY.hResource", h_resource, 0x20, 0x20, true, 0xdc141ce2715bd3a2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_SETALLOCATIONPRIORITY.phAllocationList", ph_allocation_list, 0x40, 0x40, true, 0x4e62efea8d33fc88)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SETALLOCATIONPRIORITY.AllocationCount", allocation_count, 0x80, 0x20, true, 0xa3535ad9a74441b5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_SETALLOCATIONPRIORITY.pPriorities", p_priorities, 0xc0, 0x40, true, 0xbb82ec45bf6446cc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif