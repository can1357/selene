#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_ALLOCATE_BC_STREAM_OUTPUT.RequestSize", request_size, 0x0, 0x40, true, 0x33290d76b19f80a5)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_ALLOCATE_BC_STREAM_OUTPUT.NumOutStandingRequests", num_out_standing_requests, 0x40, 0x20, true, 0x19cb2277a904922e)
#else
#define _m00
#define _m01
#endif