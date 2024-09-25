#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_CONFIG_V1_13.Size", size, 0x0, 0x0, false, 0x279ee75748c4ca0b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_queue_dispatch_type_t), "_WDF_IO_QUEUE_CONFIG_V1_13.DispatchType", dispatch_type, 0x0, 0x0, false, 0xb1b14a8adb3363cb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_IO_QUEUE_CONFIG_V1_13.PowerManaged", power_managed, 0x0, 0x0, false, 0xa487426349273b41)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_IO_QUEUE_CONFIG_V1_13.AllowZeroLengthRequests", allow_zero_length_requests, 0x0, 0x0, false, 0x294e0401b56e822d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_IO_QUEUE_CONFIG_V1_13.DefaultQueue", default_queue, 0x0, 0x0, false, 0xed62940ca108bcd3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_13.EvtIoDefault", evt_io_default, 0x0, 0x0, false, 0x7224b89c4364743f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_13.EvtIoRead", evt_io_read, 0x0, 0x0, false, 0x81ec798291d9c602)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_13.EvtIoWrite", evt_io_write, 0x0, 0x0, false, 0xc3df34af03cfe678)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_13.EvtIoDeviceControl", evt_io_device_control, 0x0, 0x0, false, 0x49a62f0fb5a45235)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_13.EvtIoInternalDeviceControl", evt_io_internal_device_control, 0x0, 0x0, false, 0xace8007cd938caeb)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_queue_io_stop_t ), "_WDF_IO_QUEUE_CONFIG_V1_13.EvtIoStop", evt_io_stop, 0x0, 0x0, false, 0x11c6144f192c72b3)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_13.EvtIoResume", evt_io_resume, 0x0, 0x0, false, 0xe1b81835acc0abc0)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_13.EvtIoCanceledOnQueue", evt_io_canceled_on_queue, 0x0, 0x0, false, 0xb9de603dc74875c)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_CONFIG_V1_13.Settings.Parallel.NumberOfPresentedRequests", number_of_presented_requests, 0x0, 0x0, false, 0xf9724072ada80f6e)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u1_parallel_t), "_WDF_IO_QUEUE_CONFIG_V1_13.Settings.Parallel", parallel, 0x0, 0x0, false, 0x2c296317925b0193)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_settings_t), "_WDF_IO_QUEUE_CONFIG_V1_13.Settings", settings, 0x0, 0x0, false, 0x346130d965cf6e52)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wdfdriver_t*), "_WDF_IO_QUEUE_CONFIG_V1_13.Driver", driver, 0x0, 0x0, false, 0x48877a3907bd44ce)
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