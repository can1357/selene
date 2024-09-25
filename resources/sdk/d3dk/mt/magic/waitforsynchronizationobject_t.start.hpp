#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT.hContext", h_context, 0x0, 0x20, true, 0x94c71ad111ae25e3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT.ObjectCount", object_count, 0x20, 0x20, true, 0xbf4b36059b51ff61)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 32>), "_D3DKMT_WAITFORSYNCHRONIZATIONOBJECT.ObjectHandleArray", object_handle_array, 0x40, 0x0, true, 0xa2273416c9df402)
#else
#define _m00
#define _m01
#define _m02
#endif