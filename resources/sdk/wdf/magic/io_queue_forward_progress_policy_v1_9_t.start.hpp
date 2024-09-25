#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_9.Size", size, 0x0, 0x0, false, 0xfa66c5030c7f4f70)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_9.TotalForwardProgressRequests", total_forward_progress_requests, 0x0, 0x0, false, 0x3fc9ec0592a0b17b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_forward_progress_reserved_policy_t), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_9.ForwardProgressReservedPolicy", forward_progress_reserved_policy, 0x0, 0x0, false, 0xe6d85f25a96655cf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wdf_io_forward_progress_reserved_policy_settings_t ), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_9.ForwardProgressReservePolicySettings", forward_progress_reserve_policy_settings, 0x0, 0x0, false, 0xf47b169185d15ece)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_9.EvtIoAllocateResourcesForReservedRequest", evt_io_allocate_resources_for_reserved_request, 0x0, 0x0, false, 0xa41f09cd8e4999c4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_9.EvtIoAllocateRequestResources", evt_io_allocate_request_resources, 0x0, 0x0, false, 0x4396e517434213c4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif