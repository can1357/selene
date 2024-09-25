#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_CONFIG_V1_11.Size", size, 0x0, 0x0, false, 0xdd15d1e38436b707)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_queue_dispatch_type_t), "_WDF_IO_QUEUE_CONFIG_V1_11.DispatchType", dispatch_type, 0x0, 0x0, false, 0xb7d3b686bedb9b07)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_IO_QUEUE_CONFIG_V1_11.PowerManaged", power_managed, 0x0, 0x0, false, 0xc559f8156f777e69)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_IO_QUEUE_CONFIG_V1_11.AllowZeroLengthRequests", allow_zero_length_requests, 0x0, 0x0, false, 0xe4341dd92b88ec7b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_IO_QUEUE_CONFIG_V1_11.DefaultQueue", default_queue, 0x0, 0x0, false, 0xe9be4b66975b1650)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_11.EvtIoDefault", evt_io_default, 0x0, 0x0, false, 0xf58e5a2392398928)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_11.EvtIoRead", evt_io_read, 0x0, 0x0, false, 0xd77aad59ebf88f9b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_11.EvtIoWrite", evt_io_write, 0x0, 0x0, false, 0xd81d2b004189bce2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_11.EvtIoDeviceControl", evt_io_device_control, 0x0, 0x0, false, 0x89d4a7dfef6941a9)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_11.EvtIoInternalDeviceControl", evt_io_internal_device_control, 0x0, 0x0, false, 0x685761df8d511eb9)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_queue_io_stop_t ), "_WDF_IO_QUEUE_CONFIG_V1_11.EvtIoStop", evt_io_stop, 0x0, 0x0, false, 0x68e6e080068e7e61)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_11.EvtIoResume", evt_io_resume, 0x0, 0x0, false, 0xaee1adaf51f09895)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_11.EvtIoCanceledOnQueue", evt_io_canceled_on_queue, 0x0, 0x0, false, 0xa950ddcde4d65899)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_CONFIG_V1_11.Settings.Parallel.NumberOfPresentedRequests", number_of_presented_requests, 0x0, 0x0, false, 0xd59a4f2bf19f03d4)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_parallel_t), "_WDF_IO_QUEUE_CONFIG_V1_11.Settings.Parallel", parallel, 0x0, 0x0, false, 0x403e455431882108)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_settings_t), "_WDF_IO_QUEUE_CONFIG_V1_11.Settings", settings, 0x0, 0x0, false, 0xb1de56c6ab5b2f28)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdriver_t*), "_WDF_IO_QUEUE_CONFIG_V1_11.Driver", driver, 0x0, 0x0, false, 0xf866f16c9ea9b3db)
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