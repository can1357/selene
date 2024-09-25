#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_CONFIG.Size", size, 0x0, 0x20, true, 0x4efe5893fca18d00)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::io_queue_dispatch_type_t), "_WDF_IO_QUEUE_CONFIG.DispatchType", dispatch_type, 0x20, 0x20, true, 0xe6439e24b7d4830e)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_IO_QUEUE_CONFIG.PowerManaged", power_managed, 0x40, 0x20, true, 0xef5b8fde738481d6)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_IO_QUEUE_CONFIG.AllowZeroLengthRequests", allow_zero_length_requests, 0x60, 0x8, true, 0x26f13a109104f33c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_IO_QUEUE_CONFIG.DefaultQueue", default_queue, 0x68, 0x8, true, 0x66bdd866a0ed7e28)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG.EvtIoDefault", evt_io_default, 0x80, 0x40, true, 0x2ac6197ecf8875d2)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*), "_WDF_IO_QUEUE_CONFIG.EvtIoRead", evt_io_read, 0xc0, 0x40, true, 0x87d1ae0de238e30)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*), "_WDF_IO_QUEUE_CONFIG.EvtIoWrite", evt_io_write, 0x100, 0x40, true, 0xe700519c159617a0)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*), "_WDF_IO_QUEUE_CONFIG.EvtIoDeviceControl", evt_io_device_control, 0x140, 0x40, true, 0x523821687357ae34)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*), "_WDF_IO_QUEUE_CONFIG.EvtIoInternalDeviceControl", evt_io_internal_device_control, 0x180, 0x40, true, 0xa39a47d2a9ba2ba4)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_queue_io_stop_t ), "_WDF_IO_QUEUE_CONFIG.EvtIoStop", evt_io_stop, 0x1c0, 0x40, true, 0xf2c6fcd93fae3133)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG.EvtIoResume", evt_io_resume, 0x200, 0x40, true, 0xe59b770fff1dd38)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG.EvtIoCanceledOnQueue", evt_io_canceled_on_queue, 0x240, 0x40, true, 0xddf05f893e69dd2e)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_CONFIG.Settings.Parallel.NumberOfPresentedRequests", number_of_presented_requests, 0x0, 0x20, true, 0x19ddd4f7c5d8830c)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_parallel_t), "_WDF_IO_QUEUE_CONFIG.Settings.Parallel", parallel, 0x0, 0x20, true, 0x9dbbd94b5c65c0a8)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_settings_t), "_WDF_IO_QUEUE_CONFIG.Settings", settings, 0x280, 0x20, true, 0xeb4e38d48b7b12aa)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdriver_t*), "_WDF_IO_QUEUE_CONFIG.Driver", driver, 0x2c0, 0x40, true, 0x5f6030373b6b6042)
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
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#endif