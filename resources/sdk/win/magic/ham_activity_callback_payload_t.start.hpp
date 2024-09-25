#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HAM_ACTIVITY_CALLBACK_PAYLOAD.ActivityHandle", activity_handle, 0x0, 0x40, true, 0x6f534d036350ae1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HAM_ACTIVITY_CALLBACK_PAYLOAD.Context", context, 0x40, 0x40, true, 0x3165b5ac5325eb47)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::ham_activity_callback_subject_t), "_HAM_ACTIVITY_CALLBACK_PAYLOAD.Subject", subject, 0x80, 0x20, true, 0x7ec5506f648ae6d9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::ham_activity_stop_request_type_t), "_HAM_ACTIVITY_CALLBACK_PAYLOAD.StopRequest.Type", type, 0x0, 0x20, true, 0xe64dcdc6b52552e0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::ham_activity_stop_request_reason_t), "_HAM_ACTIVITY_CALLBACK_PAYLOAD.StopRequest.Reason", reason, 0x20, 0x20, true, 0x2058c8a336d8154b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::ham_terminate_reason_t), "_HAM_ACTIVITY_CALLBACK_PAYLOAD.StopRequest.TerminateReason", terminate_reason, 0x40, 0x20, true, 0x8af2cb545f2bd314)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HAM_ACTIVITY_CALLBACK_PAYLOAD.StopRequest.FailureCode", failure_code, 0x60, 0x20, true, 0xb92cc184c486707e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_stop_request_t), "_HAM_ACTIVITY_CALLBACK_PAYLOAD.StopRequest", stop_request, 0xc0, 0x80, true, 0x7b9dc1cfb0fb64ed)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::ham_activity_started_payload_t), "_HAM_ACTIVITY_CALLBACK_PAYLOAD.Started", started, 0xc0, 0x40, true, 0x129ac3421b62c8ad)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::ham_terminate_reason_t), "_HAM_ACTIVITY_CALLBACK_PAYLOAD.Invalidated.TerminateReason", terminate_reason, 0x0, 0x20, true, 0xa26c4e38c462ae84)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u3_invalidated_t), "_HAM_ACTIVITY_CALLBACK_PAYLOAD.Invalidated", invalidated, 0xc0, 0x20, true, 0xfc0f72abb8383d98)
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
#define _m09
#define _m10
#endif