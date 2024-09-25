#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_CREATEHWQUEUE.hHwQueue", h_hw_queue, 0x0, 0x40, true, 0x1f27131792ce4820)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::createhwqueueflags_t), "_DXGKARG_CREATEHWQUEUE.Flags", flags, 0x40, 0x20, true, 0xc9a7266f9410d20)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CREATEHWQUEUE.PrivateDriverDataSize", private_driver_data_size, 0x60, 0x20, true, 0xae81d0be79b82d68)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_CREATEHWQUEUE.pPrivateDriverData", p_private_driver_data, 0x80, 0x40, true, 0x9b4ee47de458c450)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_CREATEHWQUEUE.hHwQueueProgressFence", h_hw_queue_progress_fence, 0xc0, 0x20, true, 0x2e872131942c6634)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_CREATEHWQUEUE.HwQueueProgressFenceCPUVirtualAddress", hw_queue_progress_fence_cpu_virtual_address, 0x100, 0x40, true, 0xe22cb2b36399345b)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_CREATEHWQUEUE.HwQueueProgressFenceGPUVirtualAddress", hw_queue_progress_fence_gpu_virtual_address, 0x140, 0x40, true, 0x9d4af75574f114ea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif