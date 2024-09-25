#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_CONFIG_V1_17.Size", size, 0x0, 0x0, false, 0xcb114f6cc86bbd33)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_queue_dispatch_type_t), "_WDF_IO_QUEUE_CONFIG_V1_17.DispatchType", dispatch_type, 0x0, 0x0, false, 0xa13545dbf1055f7a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_IO_QUEUE_CONFIG_V1_17.PowerManaged", power_managed, 0x0, 0x0, false, 0xf16f98a0ac171c4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_IO_QUEUE_CONFIG_V1_17.AllowZeroLengthRequests", allow_zero_length_requests, 0x0, 0x0, false, 0x92a0094ea2d14e30)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_IO_QUEUE_CONFIG_V1_17.DefaultQueue", default_queue, 0x0, 0x0, false, 0xc5c348629827087c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_17.EvtIoDefault", evt_io_default, 0x0, 0x0, false, 0x9bc9f208c85365dc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_17.EvtIoRead", evt_io_read, 0x0, 0x0, false, 0x1b917fb0f443f2df)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_17.EvtIoWrite", evt_io_write, 0x0, 0x0, false, 0xea1576d6ab4f5542)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_17.EvtIoDeviceControl", evt_io_device_control, 0x0, 0x0, false, 0x101cb3affe4f1e57)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_17.EvtIoInternalDeviceControl", evt_io_internal_device_control, 0x0, 0x0, false, 0xed45e3057f48e98a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_queue_io_stop_t ), "_WDF_IO_QUEUE_CONFIG_V1_17.EvtIoStop", evt_io_stop, 0x0, 0x0, false, 0xdab1c56eabc0753e)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_17.EvtIoResume", evt_io_resume, 0x0, 0x0, false, 0x4bb1102608c352d6)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_17.EvtIoCanceledOnQueue", evt_io_canceled_on_queue, 0x0, 0x0, false, 0x94e23349eb754a99)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_CONFIG_V1_17.Settings.Parallel.NumberOfPresentedRequests", number_of_presented_requests, 0x0, 0x0, false, 0x970c71e9f97f122e)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_parallel_t), "_WDF_IO_QUEUE_CONFIG_V1_17.Settings.Parallel", parallel, 0x0, 0x0, false, 0x57ff891abd5a84c1)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_settings_t), "_WDF_IO_QUEUE_CONFIG_V1_17.Settings", settings, 0x0, 0x0, false, 0xe50e1948580975ad)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdriver_t*), "_WDF_IO_QUEUE_CONFIG_V1_17.Driver", driver, 0x0, 0x0, false, 0x94675a2282eea712)
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