#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY.Size", size, 0x0, 0x20, true, 0x24d40e8d4b7d43bf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY.TotalForwardProgressRequests", total_forward_progress_requests, 0x20, 0x20, true, 0x41979b5c50e2dd3b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::io_forward_progress_reserved_policy_t), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY.ForwardProgressReservedPolicy", forward_progress_reserved_policy, 0x40, 0x20, true, 0x8ca26145a97fad88)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(wdf_io_forward_progress_reserved_policy_settings_t ), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY.ForwardProgressReservePolicySettings", forward_progress_reserve_policy_settings, 0x80, 0x40, true, 0x930647bddd9b5d19)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY.EvtIoAllocateResourcesForReservedRequest", evt_io_allocate_resources_for_reserved_request, 0xc0, 0x40, true, 0xfd476c7cdaecd8db)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY.EvtIoAllocateRequestResources", evt_io_allocate_request_resources, 0x100, 0x40, true, 0x202b7b8c9a34181d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif