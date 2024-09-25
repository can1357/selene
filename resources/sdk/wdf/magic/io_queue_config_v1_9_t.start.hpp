#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_CONFIG_V1_9.Size", size, 0x0, 0x20, true, 0xf121ea23437bd952)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_queue_dispatch_type_t), "_WDF_IO_QUEUE_CONFIG_V1_9.DispatchType", dispatch_type, 0x20, 0x20, true, 0xc56a4a449bf6c639)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_IO_QUEUE_CONFIG_V1_9.PowerManaged", power_managed, 0x40, 0x20, true, 0x400d6a7abf895875)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_IO_QUEUE_CONFIG_V1_9.AllowZeroLengthRequests", allow_zero_length_requests, 0x60, 0x8, true, 0x5a9023316a9f0ebf)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_IO_QUEUE_CONFIG_V1_9.DefaultQueue", default_queue, 0x68, 0x8, true, 0x5ff79314c3e8f732)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_9.EvtIoDefault", evt_io_default, 0x80, 0x40, true, 0x9d6d78e4954ade2a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_9.EvtIoRead", evt_io_read, 0xc0, 0x40, true, 0x200c0c9260a44bb6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_9.EvtIoWrite", evt_io_write, 0x100, 0x40, true, 0x499110a93dc32e5b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_9.EvtIoDeviceControl", evt_io_device_control, 0x140, 0x40, true, 0x6455e0fc5ca530b8)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_9.EvtIoInternalDeviceControl", evt_io_internal_device_control, 0x180, 0x40, true, 0x5f9a23b601d752a5)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_queue_io_stop_t ), "_WDF_IO_QUEUE_CONFIG_V1_9.EvtIoStop", evt_io_stop, 0x1c0, 0x40, true, 0xae537e2a1c362f06)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_9.EvtIoResume", evt_io_resume, 0x200, 0x40, true, 0x72902711bf940616)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_9.EvtIoCanceledOnQueue", evt_io_canceled_on_queue, 0x240, 0x40, true, 0x739d65e938758ac0)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_CONFIG_V1_9.Settings.Parallel.NumberOfPresentedRequests", number_of_presented_requests, 0x0, 0x20, true, 0x573f42e479aea942)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_parallel_t), "_WDF_IO_QUEUE_CONFIG_V1_9.Settings.Parallel", parallel, 0x0, 0x20, true, 0x7467a1ac47bfe2d0)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_settings_t), "_WDF_IO_QUEUE_CONFIG_V1_9.Settings", settings, 0x280, 0x20, true, 0xb091e367d745a196)
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
#endif