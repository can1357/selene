#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2.hContext", h_context, 0x0, 0x20, true, 0x3e4141685d0267f6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2.ObjectCount", object_count, 0x20, 0x20, true, 0x8b713718b9afb4c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 32>), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2.ObjectHandleArray", object_handle_array, 0x40, 0x0, true, 0x7fa3d306dcee05cb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::d3dddicb_signalflags_t), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2.Flags", flags, 0x440, 0x20, true, 0xf8f801b18052b6bf)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2.BroadcastContextCount", broadcast_context_count, 0x460, 0x20, true, 0x5b42cb4b82a75a36)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 64>), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2.BroadcastContext", broadcast_context, 0x480, 0x0, true, 0x5eab92ccb0f5dc07)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2.Fence.FenceValue", fence_value, 0x0, 0x40, true, 0x4163d1ef99109c29)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_fence_t), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2.Fence", fence, 0xc80, 0x40, true, 0x6b4037590afdaec3)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT2.CpuEventHandle", cpu_event_handle, 0xc80, 0x40, true, 0xb8d94e0e5a0936b6)
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