#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEHWQUEUE.hHwContext", h_hw_context, 0x0, 0x20, true, 0xaacdb90aeea0600d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::createhwqueueflags_t), "_D3DKMT_CREATEHWQUEUE.Flags", flags, 0x20, 0x20, true, 0x717f02e596a87041)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEHWQUEUE.PrivateDriverDataSize", private_driver_data_size, 0x40, 0x20, true, 0x238d2a83704b83b5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_CREATEHWQUEUE.pPrivateDriverData", p_private_driver_data, 0x80, 0x40, true, 0xa81ae9fda93b46ea)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEHWQUEUE.hHwQueue", h_hw_queue, 0xc0, 0x20, true, 0xf6360b332f0f6468)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_CREATEHWQUEUE.hHwQueueProgressFence", h_hw_queue_progress_fence, 0xe0, 0x20, true, 0x6bcfae9f6ec12c56)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_CREATEHWQUEUE.HwQueueProgressFenceCPUVirtualAddress", hw_queue_progress_fence_cpu_virtual_address, 0x100, 0x40, true, 0xa9693b808dbee18a)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_CREATEHWQUEUE.HwQueueProgressFenceGPUVirtualAddress", hw_queue_progress_fence_gpu_virtual_address, 0x140, 0x40, true, 0xcc6c8c8194d462ec)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif