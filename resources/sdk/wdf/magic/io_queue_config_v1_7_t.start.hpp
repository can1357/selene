#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_CONFIG_V1_7.Size", size, 0x0, 0x20, true, 0xa7636eb1673ab111)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_queue_dispatch_type_t), "_WDF_IO_QUEUE_CONFIG_V1_7.DispatchType", dispatch_type, 0x20, 0x20, true, 0x62796dbe667fbbae)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_IO_QUEUE_CONFIG_V1_7.PowerManaged", power_managed, 0x40, 0x20, true, 0x70513582f8c553e2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_IO_QUEUE_CONFIG_V1_7.AllowZeroLengthRequests", allow_zero_length_requests, 0x60, 0x8, true, 0x1d96d6ccd0b0942c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_IO_QUEUE_CONFIG_V1_7.DefaultQueue", default_queue, 0x68, 0x8, true, 0x6e3fe34d0d9f0b4d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_7.EvtIoDefault", evt_io_default, 0x80, 0x40, true, 0xf00c91dcedc212fe)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_7.EvtIoRead", evt_io_read, 0xc0, 0x40, true, 0x6eb28670b91bd70)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_7.EvtIoWrite", evt_io_write, 0x100, 0x40, true, 0x843adf464ecd9250)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_7.EvtIoDeviceControl", evt_io_device_control, 0x140, 0x40, true, 0x1961ff4dfa29472e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_7.EvtIoInternalDeviceControl", evt_io_internal_device_control, 0x180, 0x40, true, 0x2fdfd8024a2323cb)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_queue_io_stop_t ), "_WDF_IO_QUEUE_CONFIG_V1_7.EvtIoStop", evt_io_stop, 0x1c0, 0x40, true, 0x697aafa7bdfbc3eb)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_7.EvtIoResume", evt_io_resume, 0x200, 0x40, true, 0xb4bc0a4618d9fb8)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_7.EvtIoCanceledOnQueue", evt_io_canceled_on_queue, 0x240, 0x40, true, 0x2b0a4ae015f91770)
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
#endif