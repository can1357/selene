#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYALLOCATIONRESIDENCY.hDevice", h_device, 0x0, 0x20, true, 0xabd73471f41f0f5c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYALLOCATIONRESIDENCY.hResource", h_resource, 0x20, 0x20, true, 0xc87fed6b37b79762)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_QUERYALLOCATIONRESIDENCY.phAllocationList", ph_allocation_list, 0x40, 0x40, true, 0x414569d3e8426a64)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_QUERYALLOCATIONRESIDENCY.AllocationCount", allocation_count, 0x80, 0x20, true, 0x537b1f09a3f91943)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3dk::mt::allocationresidencystatus_t*), "_D3DKMT_QUERYALLOCATIONRESIDENCY.pResidencyStatus", p_residency_status, 0xc0, 0x40, true, 0xa067c670b194c759)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif