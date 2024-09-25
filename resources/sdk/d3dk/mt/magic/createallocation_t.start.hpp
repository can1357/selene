#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEALLOCATION.hDevice", h_device, 0x0, 0x20, true, 0x9484eb7ef3cdc797)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEALLOCATION.hResource", h_resource, 0x20, 0x20, true, 0xf3af5a18506a6645)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEALLOCATION.hGlobalShare", h_global_share, 0x40, 0x20, true, 0xd0cdf6ed7b80d1cb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const void*), "_D3DKMT_CREATEALLOCATION.pPrivateRuntimeData", p_private_runtime_data, 0x80, 0x40, true, 0xcd0b5c1594ac712a)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEALLOCATION.PrivateRuntimeDataSize", private_runtime_data_size, 0xc0, 0x20, true, 0xfd689907b8800624)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::createstandardallocation_t*), "_D3DKMT_CREATEALLOCATION.pStandardAllocation", p_standard_allocation, 0x100, 0x40, true, 0xc43d4255fd3e6a0a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const void*), "_D3DKMT_CREATEALLOCATION.pPrivateDriverData", p_private_driver_data, 0x100, 0x40, true, 0xd38f87041144db7)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEALLOCATION.PrivateDriverDataSize", private_driver_data_size, 0x140, 0x20, true, 0xf82b531b5d177f63)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEALLOCATION.NumAllocations", num_allocations, 0x160, 0x20, true, 0x6aab110e09c0e5d9)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::allocationinfo_t*), "_D3DKMT_CREATEALLOCATION.pAllocationInfo", p_allocation_info, 0x180, 0x40, true, 0x77efda958ac94112)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::allocationinfo2_t*), "_D3DKMT_CREATEALLOCATION.pAllocationInfo2", p_allocation_info2, 0x180, 0x40, true, 0x1511739ebd074a7f)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mt::createallocationflags_t), "_D3DKMT_CREATEALLOCATION.Flags", flags, 0x1c0, 0x20, true, 0x95caf7933e51bcf5)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_CREATEALLOCATION.hPrivateRuntimeResourceHandle", h_private_runtime_resource_handle, 0x200, 0x40, true, 0xa46428fba51a3507)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif