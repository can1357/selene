#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU.hContext", h_context, 0x0, 0x20, true, 0xb154c60d68149e4c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU.ObjectCount", object_count, 0x20, 0x20, true, 0x6bb9231f9e393f6a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU.ObjectHandleArray", object_handle_array, 0x40, 0x40, true, 0x6987f585dfaca575)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint64_t*), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU.MonitoredFenceValueArray", monitored_fence_value_array, 0x80, 0x40, true, 0xaf6a90f3c281bb2e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif