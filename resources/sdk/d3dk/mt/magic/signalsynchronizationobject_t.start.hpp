#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT.hContext", h_context, 0x0, 0x20, true, 0x2084919759679776)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT.ObjectCount", object_count, 0x20, 0x20, true, 0xf9274799a7fab2f4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 32>), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT.ObjectHandleArray", object_handle_array, 0x40, 0x0, true, 0xf44a16dae22ce91b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::d3dddicb_signalflags_t), "_D3DKMT_SIGNALSYNCHRONIZATIONOBJECT.Flags", flags, 0x440, 0x20, true, 0x2fe158e5129c2549)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif