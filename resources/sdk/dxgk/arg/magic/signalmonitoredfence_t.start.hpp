#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::kernel_submission_type_t), "_DXGKARG_SIGNALMONITOREDFENCE.KernelSubmissionType", kernel_submission_type, 0x0, 0x20, true, 0xd08f805c8f945513)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_SIGNALMONITOREDFENCE.pDmaBuffer", p_dma_buffer, 0x40, 0x40, true, 0x79c2d548dc1ebfa6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_SIGNALMONITOREDFENCE.DmaBufferGpuVirtualAddress", dma_buffer_gpu_virtual_address, 0x80, 0x40, true, 0xb067953e4f3390fb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SIGNALMONITOREDFENCE.DmaSize", dma_size, 0xc0, 0x20, true, 0xb7d413ab4c723cce)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_SIGNALMONITOREDFENCE.pDmaBufferPrivateData", p_dma_buffer_private_data, 0x100, 0x40, true, 0x61726623627a1a6a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SIGNALMONITOREDFENCE.DmaBufferPrivateDataSize", dma_buffer_private_data_size, 0x140, 0x20, true, 0x15d376285096f719)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SIGNALMONITOREDFENCE.MultipassOffset", multipass_offset, 0x160, 0x20, true, 0xa73b6128208cd4d7)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_SIGNALMONITOREDFENCE.MonitoredFenceGpuVa", monitored_fence_gpu_va, 0x180, 0x40, true, 0xb69e8b8a0eab21e5)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGKARG_SIGNALMONITOREDFENCE.MonitoredFenceValue", monitored_fence_value, 0x1c0, 0x40, true, 0x24182c39a4e34ea0)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_SIGNALMONITOREDFENCE.MonitoredFenceCpuVa", monitored_fence_cpu_va, 0x200, 0x40, true, 0xc4ac296c078ae440)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DXGKARG_SIGNALMONITOREDFENCE.hHwQueue", h_hw_queue, 0x240, 0x40, true, 0xbb81b296325aaf66)
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
#endif