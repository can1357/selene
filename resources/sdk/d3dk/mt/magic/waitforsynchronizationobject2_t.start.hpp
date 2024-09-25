#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2.hContext", h_context, 0x0, 0x20, true, 0x6fa6ec6909967829)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2.ObjectCount", object_count, 0x20, 0x20, true, 0x1b4d56a2b35c39d3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 32>), "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2.ObjectHandleArray", object_handle_array, 0x40, 0x0, true, 0xa8ba771819f58633)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2.Fence.FenceValue", fence_value, 0x0, 0x40, true, 0x40bee4c6e7ddc906)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_fence_t), "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT2.Fence", fence, 0x440, 0x40, true, 0x17427f651ed69197)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif