#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_17.Size", size, 0x0, 0x0, false, 0xe9cc1af41faf7e4c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_17.TotalForwardProgressRequests", total_forward_progress_requests, 0x0, 0x0, false, 0x319bd3566f572687)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_forward_progress_reserved_policy_t), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_17.ForwardProgressReservedPolicy", forward_progress_reserved_policy, 0x0, 0x0, false, 0x4e96f439ca9015eb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wdf_io_forward_progress_reserved_policy_settings_t ), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_17.ForwardProgressReservePolicySettings", forward_progress_reserve_policy_settings, 0x0, 0x0, false, 0x486514e99f2a8fb6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_17.EvtIoAllocateResourcesForReservedRequest", evt_io_allocate_resources_for_reserved_request, 0x0, 0x0, false, 0x2e29c0a46d74081a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY_V1_17.EvtIoAllocateRequestResources", evt_io_allocate_request_resources, 0x0, 0x0, false, 0x653eb629c8b7274f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif