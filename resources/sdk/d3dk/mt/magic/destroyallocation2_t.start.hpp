#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DESTROYALLOCATION2.hDevice", h_device, 0x0, 0x20, true, 0x92c0779361c346b7)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DESTROYALLOCATION2.hResource", h_resource, 0x20, 0x20, true, 0xfd61dd79731d7f93)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_DESTROYALLOCATION2.phAllocationList", ph_allocation_list, 0x40, 0x40, true, 0x51fbf50a69e96d92)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_DESTROYALLOCATION2.AllocationCount", allocation_count, 0x80, 0x20, true, 0xc789074adbd2098e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::d3dddicb_destroyallocation2flags_t), "_D3DKMT_DESTROYALLOCATION2.Flags", flags, 0xa0, 0x20, true, 0x168200bfd0e03d13)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif