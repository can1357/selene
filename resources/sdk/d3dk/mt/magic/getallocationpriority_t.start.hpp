#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETALLOCATIONPRIORITY.hDevice", h_device, 0x0, 0x20, true, 0xa9bf613fa1253af5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETALLOCATIONPRIORITY.hResource", h_resource, 0x20, 0x20, true, 0x13dc72071574e51)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_GETALLOCATIONPRIORITY.phAllocationList", ph_allocation_list, 0x40, 0x40, true, 0xdc6baffc8c84bf2a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_GETALLOCATIONPRIORITY.AllocationCount", allocation_count, 0x80, 0x20, true, 0x5125f44b171c33d6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t*), "_D3DKMT_GETALLOCATIONPRIORITY.pPriorities", p_priorities, 0xc0, 0x40, true, 0x3554d558fb434871)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif