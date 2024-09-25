#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_GET_BC_PROPERTIES_OUTPUT.MaximumRequestsPerPeriod", maximum_requests_per_period, 0x0, 0x20, true, 0x5e6eaa8c62923fcb)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_GET_BC_PROPERTIES_OUTPUT.MinimumPeriod", minimum_period, 0x20, 0x20, true, 0xe0ff3a0dfcc0346b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_GET_BC_PROPERTIES_OUTPUT.MaximumRequestSize", maximum_request_size, 0x40, 0x40, true, 0xecc015c80860521d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_GET_BC_PROPERTIES_OUTPUT.EstimatedTimePerRequest", estimated_time_per_request, 0x80, 0x20, true, 0x156f27705065d212)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_GET_BC_PROPERTIES_OUTPUT.NumOutStandingRequests", num_out_standing_requests, 0xa0, 0x20, true, 0xecde74769b7afa49)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_STORAGE_GET_BC_PROPERTIES_OUTPUT.RequestSize", request_size, 0xc0, 0x40, true, 0x4d9fe8ad129162a9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif