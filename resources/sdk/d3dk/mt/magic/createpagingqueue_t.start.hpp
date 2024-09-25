#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEPAGINGQUEUE.hDevice", h_device, 0x0, 0x20, true, 0x92e16c31b9905100)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum d3d::ddi::pagingqueue_priority_t), "_D3DKMT_CREATEPAGINGQUEUE.Priority", priority, 0x20, 0x20, true, 0x55c22c3ef2179a49)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEPAGINGQUEUE.hPagingQueue", h_paging_queue, 0x40, 0x20, true, 0x68732d170a144d08)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEPAGINGQUEUE.hSyncObject", h_sync_object, 0x60, 0x20, true, 0x8c3b38c7d8ce8a3e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_CREATEPAGINGQUEUE.FenceValueCPUVirtualAddress", fence_value_cpu_virtual_address, 0x80, 0x40, true, 0x5f1ecf410066a5d8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEPAGINGQUEUE.PhysicalAdapterIndex", physical_adapter_index, 0xc0, 0x20, true, 0x77d8e4780e455b79)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif