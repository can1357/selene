#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_15.Size", size, 0x0, 0x0, false, 0x4ee5dd700319f05f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_15.TotalForwardProgressRequests", total_forward_progress_requests, 0x0, 0x0, false, 0x12549a0c4e09e996)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_forward_progress_reserved_policy_t), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_15.ForwardProgressReservedPolicy", forward_progress_reserved_policy, 0x0, 0x0, false, 0x5a5f81e22f53ce27)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wdf_io_forward_progress_reserved_policy_settings_t ), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_15.ForwardProgressReservePolicySettings", forward_progress_reserve_policy_settings, 0x0, 0x0, false, 0xf10b02987cc154a0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_15.EvtIoAllocateResourcesForReservedRequest", evt_io_allocate_resources_for_reserved_request, 0x0, 0x0, false, 0xd1c8aca508b7ea7a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_15.EvtIoAllocateRequestResources", evt_io_allocate_request_resources, 0x0, 0x0, false, 0x7a304411a8f068e6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif