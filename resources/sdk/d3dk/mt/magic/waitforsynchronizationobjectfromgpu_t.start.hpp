#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU.hContext", h_context, 0x0, 0x20, true, 0xb2bd95a7b63ed76d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU.ObjectCount", object_count, 0x20, 0x20, true, 0x93069f2f7f2134b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU.ObjectHandleArray", object_handle_array, 0x40, 0x40, true, 0x3f90bb0bed1105f3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint64_t*), "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU.MonitoredFenceValueArray", monitored_fence_value_array, 0x80, 0x40, true, 0x7e14ae922112d0c0)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMGPU.FenceValue", fence_value, 0x80, 0x40, true, 0xce410a7f1eb0e537)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif