#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_13.Size", size, 0x0, 0x0, false, 0xe658e635061dcd0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_13.TotalForwardProgressRequests", total_forward_progress_requests, 0x0, 0x0, false, 0xaf7de01f351cc58b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_forward_progress_reserved_policy_t), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_13.ForwardProgressReservedPolicy", forward_progress_reserved_policy, 0x0, 0x0, false, 0x3cf9f09de57ed5ad)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wdf_io_forward_progress_reserved_policy_settings_t ), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_13.ForwardProgressReservePolicySettings", forward_progress_reserve_policy_settings, 0x0, 0x0, false, 0x90f74e1baa577dea)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_13.EvtIoAllocateResourcesForReservedRequest", evt_io_allocate_resources_for_reserved_request, 0x0, 0x0, false, 0xe96c8a319ec9d143)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_13.EvtIoAllocateRequestResources", evt_io_allocate_request_resources, 0x0, 0x0, false, 0x901dab39f3095242)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif