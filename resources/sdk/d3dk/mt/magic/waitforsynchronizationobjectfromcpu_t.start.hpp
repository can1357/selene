#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU.hDevice", h_device, 0x0, 0x20, true, 0x615c6c58168f22c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU.ObjectCount", object_count, 0x20, 0x20, true, 0xb7de57958726ecf2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU.ObjectHandleArray", object_handle_array, 0x40, 0x40, true, 0x9b0c23489b8054e7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint64_t*), "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU.FenceValueArray", fence_value_array, 0x80, 0x40, true, 0x7229a5c0802236dc)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU.hAsyncEvent", h_async_event, 0xc0, 0x40, true, 0xfba04a737449430b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3d::ddi::waitforsynchronizationobjectfromcpu_flags_t), "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECTFROMCPU.Flags", flags, 0x100, 0x20, true, 0x34053664b1d9a5af)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif