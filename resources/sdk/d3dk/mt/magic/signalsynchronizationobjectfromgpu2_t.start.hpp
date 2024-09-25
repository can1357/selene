#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2.ObjectCount", object_count, 0x0, 0x20, true, 0x924407b1a29f3b1c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2.ObjectHandleArray", object_handle_array, 0x40, 0x40, true, 0x977485ff11591e3c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::d3dddicb_signalflags_t), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2.Flags", flags, 0x80, 0x20, true, 0xb84b54fe4e5883da)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2.BroadcastContextCount", broadcast_context_count, 0xa0, 0x20, true, 0x32c22ebe4a72a7b2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2.BroadcastContextArray", broadcast_context_array, 0xc0, 0x40, true, 0xc77c4e93cfa3628c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2.FenceValue", fence_value, 0x100, 0x40, true, 0xd6432f13122abbcf)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2.CpuEventHandle", cpu_event_handle, 0x100, 0x40, true, 0x1e7e6c126e67cd48)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint64_t*), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMGPU2.MonitoredFenceValueArray", monitored_fence_value_array, 0x100, 0x40, true, 0x50e7fba79de12d8a)
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