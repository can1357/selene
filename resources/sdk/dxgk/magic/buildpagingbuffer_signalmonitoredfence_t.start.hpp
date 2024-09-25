#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_BUILDPAGINGBUFFER_SIGNALMONITOREDFENCE.MonitoredFenceGpuVa", monitored_fence_gpu_va, 0x0, 0x40, true, 0xa32953a45fba9164)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_BUILDPAGINGBUFFER_SIGNALMONITOREDFENCE.MonitoredFenceValue", monitored_fence_value, 0x40, 0x40, true, 0x9d61dfe80f15a8ab)
#else
#define _m00
#define _m01
#endif