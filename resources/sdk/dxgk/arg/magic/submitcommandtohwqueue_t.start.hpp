#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_SUBMITCOMMANDTOHWQUEUE.hHwQueue", h_hw_queue, 0x0, 0x40, true, 0x450251145abb347d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_SUBMITCOMMANDTOHWQUEUE.HwQueueProgressFenceId", hw_queue_progress_fence_id, 0x40, 0x40, true, 0xe04398bef526408)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_SUBMITCOMMANDTOHWQUEUE.DmaBufferVirtualAddress", dma_buffer_virtual_address, 0x80, 0x40, true, 0x3b075fc4603d6f14)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SUBMITCOMMANDTOHWQUEUE.DmaBufferSize", dma_buffer_size, 0xc0, 0x20, true, 0x954d4261129c665d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SUBMITCOMMANDTOHWQUEUE.DmaBufferPrivateDataSize", dma_buffer_private_data_size, 0xe0, 0x20, true, 0x655b1818ebbc49a5)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_SUBMITCOMMANDTOHWQUEUE.pDmaBufferPrivateData", p_dma_buffer_private_data, 0x100, 0x40, true, 0xe16c14d34ffc80ac)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::submitcommandflags_t), "_DXGKARG_SUBMITCOMMANDTOHWQUEUE.Flags", flags, 0x140, 0x20, true, 0xf6ef51aabd6313bf)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_SUBMITCOMMANDTOHWQUEUE.HwQueueProgressFenceGpuVa", hw_queue_progress_fence_gpu_va, 0x180, 0x40, true, 0x68240ec689f26dab)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_SUBMITCOMMANDTOHWQUEUE.HwQueueProgressFenceCpuVa", hw_queue_progress_fence_cpu_va, 0x1c0, 0x40, true, 0x392f47e17dcf43e0)
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
#endif