#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_11.Size", size, 0x0, 0x0, false, 0x58779a7bac0f94b1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_11.TotalForwardProgressRequests", total_forward_progress_requests, 0x0, 0x0, false, 0xec2b32a6bd40407f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_forward_progress_reserved_policy_t), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_11.ForwardProgressReservedPolicy", forward_progress_reserved_policy, 0x0, 0x0, false, 0xa262fb14c8867ff)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wdf_io_forward_progress_reserved_policy_settings_t ), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_11.ForwardProgressReservePolicySettings", forward_progress_reserve_policy_settings, 0x0, 0x0, false, 0x93c128592455ab79)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_11.EvtIoAllocateResourcesForReservedRequest", evt_io_allocate_resources_for_reserved_request, 0x0, 0x0, false, 0x4559427a9c5f7b47)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_11.EvtIoAllocateRequestResources", evt_io_allocate_request_resources, 0x0, 0x0, false, 0xf9baa4fbd63aad38)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif