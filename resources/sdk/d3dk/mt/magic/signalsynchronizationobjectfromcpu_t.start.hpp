#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU.hDevice", h_device, 0x0, 0x20, true, 0x26401e2bb78254c4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU.ObjectCount", object_count, 0x20, 0x20, true, 0x2390fafb63dce85f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint32_t*), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU.ObjectHandleArray", object_handle_array, 0x40, 0x40, true, 0x3574527c9e70496b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(const uint64_t*), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU.FenceValueArray", fence_value_array, 0x80, 0x40, true, 0x14e7ad8da876f8eb)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::d3dddicb_signalflags_t), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECTFROMCPU.Flags", flags, 0xc0, 0x20, true, 0x93ab0735d41ab596)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif