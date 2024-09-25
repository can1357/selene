#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENRESOURCEFROMNTHANDLE.hDevice", h_device, 0x0, 0x20, true, 0xc0b8779fa1637105)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_OPENRESOURCEFROMNTHANDLE.hNtHandle", h_nt_handle, 0x40, 0x40, true, 0xac81cac638d8dd9a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENRESOURCEFROMNTHANDLE.NumAllocations", num_allocations, 0x80, 0x20, true, 0x4dd1e587b490282d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::openallocationinfo2_t*), "_D3DKMT_OPENRESOURCEFROMNTHANDLE.pOpenAllocationInfo2", p_open_allocation_info2, 0xc0, 0x40, true, 0x34cc1b10d7dbd1ee)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENRESOURCEFROMNTHANDLE.PrivateRuntimeDataSize", private_runtime_data_size, 0x100, 0x20, true, 0xc99540592fdd8877)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_OPENRESOURCEFROMNTHANDLE.pPrivateRuntimeData", p_private_runtime_data, 0x140, 0x40, true, 0x673cac389408e85a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENRESOURCEFROMNTHANDLE.ResourcePrivateDriverDataSize", resource_private_driver_data_size, 0x180, 0x20, true, 0x31454d171c7ffe60)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_OPENRESOURCEFROMNTHANDLE.pResourcePrivateDriverData", p_resource_private_driver_data, 0x1c0, 0x40, true, 0x6f54d784dbb0869a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENRESOURCEFROMNTHANDLE.TotalPrivateDriverDataBufferSize", total_private_driver_data_buffer_size, 0x200, 0x20, true, 0x40ade478c3c998a)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_OPENRESOURCEFROMNTHANDLE.pTotalPrivateDriverDataBuffer", p_total_private_driver_data_buffer, 0x240, 0x40, true, 0x7f0479627ed3fa8)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENRESOURCEFROMNTHANDLE.hResource", h_resource, 0x280, 0x20, true, 0x65dd6eb41e1c22b0)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENRESOURCEFROMNTHANDLE.hKeyedMutex", h_keyed_mutex, 0x2a0, 0x20, true, 0x5c9066b2dc17b59e)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_OPENRESOURCEFROMNTHANDLE.pKeyedMutexPrivateRuntimeData", p_keyed_mutex_private_runtime_data, 0x2c0, 0x40, true, 0x6f577b062005d0ca)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENRESOURCEFROMNTHANDLE.KeyedMutexPrivateRuntimeDataSize", keyed_mutex_private_runtime_data_size, 0x300, 0x20, true, 0xdd7baacafc88deda)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_OPENRESOURCEFROMNTHANDLE.hSyncObject", h_sync_object, 0x320, 0x20, true, 0x27be7971281d2e7)
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
#define _m13
#define _m14
#endif