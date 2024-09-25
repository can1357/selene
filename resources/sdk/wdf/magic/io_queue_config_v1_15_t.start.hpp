#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_CONFIG_V1_15.Size", size, 0x0, 0x0, false, 0x374d33399dc5d951)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_queue_dispatch_type_t), "_WDF_IO_QUEUE_CONFIG_V1_15.DispatchType", dispatch_type, 0x0, 0x0, false, 0x6ae5efc2c3a7f309)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_IO_QUEUE_CONFIG_V1_15.PowerManaged", power_managed, 0x0, 0x0, false, 0x4a257362a51437e8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_IO_QUEUE_CONFIG_V1_15.AllowZeroLengthRequests", allow_zero_length_requests, 0x0, 0x0, false, 0xc732d85f96a81f4d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_IO_QUEUE_CONFIG_V1_15.DefaultQueue", default_queue, 0x0, 0x0, false, 0x8749eb88519df4d8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_15.EvtIoDefault", evt_io_default, 0x0, 0x0, false, 0xe8cc6921ab80083c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_15.EvtIoRead", evt_io_read, 0x0, 0x0, false, 0xcc056db4f43991a6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_15.EvtIoWrite", evt_io_write, 0x0, 0x0, false, 0xa3062fd3afb5a821)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_15.EvtIoDeviceControl", evt_io_device_control, 0x0, 0x0, false, 0xf0673a76cddd508d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_15.EvtIoInternalDeviceControl", evt_io_internal_device_control, 0x0, 0x0, false, 0x36e46b27fe46e5d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_queue_io_stop_t ), "_WDF_IO_QUEUE_CONFIG_V1_15.EvtIoStop", evt_io_stop, 0x0, 0x0, false, 0x5116b8dc8d6cf8ef)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_15.EvtIoResume", evt_io_resume, 0x0, 0x0, false, 0xae459db88640f47e)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_15.EvtIoCanceledOnQueue", evt_io_canceled_on_queue, 0x0, 0x0, false, 0x859a96fadec833f7)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_CONFIG_V1_15.Settings.Parallel.NumberOfPresentedRequests", number_of_presented_requests, 0x0, 0x0, false, 0xab9c19a1d05ef2dc)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_parallel_t), "_WDF_IO_QUEUE_CONFIG_V1_15.Settings.Parallel", parallel, 0x0, 0x0, false, 0x9dbe237bc20dd08)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_settings_t), "_WDF_IO_QUEUE_CONFIG_V1_15.Settings", settings, 0x0, 0x0, false, 0x39a05ea44bc2ea9f)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdriver_t*), "_WDF_IO_QUEUE_CONFIG_V1_15.Driver", driver, 0x0, 0x0, false, 0x71be23da7f1e55d3)
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