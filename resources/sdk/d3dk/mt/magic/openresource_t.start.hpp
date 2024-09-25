#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENRESOURCE.hDevice", h_device, 0x0, 0x20, true, 0xe06750f13b14c8e4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENRESOURCE.hGlobalShare", h_global_share, 0x20, 0x20, true, 0x5622070118e325e7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENRESOURCE.NumAllocations", num_allocations, 0x40, 0x20, true, 0x3f2ece9efc624011)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::openallocationinfo_t*), "_D3DKMT_OPENRESOURCE.pOpenAllocationInfo", p_open_allocation_info, 0x80, 0x40, true, 0x1eb9c39c0e0e6b34)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::openallocationinfo2_t*), "_D3DKMT_OPENRESOURCE.pOpenAllocationInfo2", p_open_allocation_info2, 0x80, 0x40, true, 0x3874a319167a9abf)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_OPENRESOURCE.pPrivateRuntimeData", p_private_runtime_data, 0xc0, 0x40, true, 0x9d0b0befacfe4314)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENRESOURCE.PrivateRuntimeDataSize", private_runtime_data_size, 0x100, 0x20, true, 0x7b73e79788817f)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_OPENRESOURCE.pResourcePrivateDriverData", p_resource_private_driver_data, 0x140, 0x40, true, 0xe554dea6015978c9)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENRESOURCE.ResourcePrivateDriverDataSize", resource_private_driver_data_size, 0x180, 0x20, true, 0xe6721c73ea13aa66)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_OPENRESOURCE.pTotalPrivateDriverDataBuffer", p_total_private_driver_data_buffer, 0x1c0, 0x40, true, 0x736479e8999a5c5e)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENRESOURCE.TotalPrivateDriverDataBufferSize", total_private_driver_data_buffer_size, 0x200, 0x20, true, 0xdb11dc4aee433d19)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENRESOURCE.hResource", h_resource, 0x220, 0x20, true, 0xf66ec0d739c4ad0e)
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
#endif