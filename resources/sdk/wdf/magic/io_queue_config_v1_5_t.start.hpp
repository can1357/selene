#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_CONFIG_V1_5.Size", size, 0x0, 0x0, false, 0x724ea733d7b9d56f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_queue_dispatch_type_t), "_WDF_IO_QUEUE_CONFIG_V1_5.DispatchType", dispatch_type, 0x0, 0x0, false, 0x60a8ddfedb64c508)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_IO_QUEUE_CONFIG_V1_5.PowerManaged", power_managed, 0x0, 0x0, false, 0x7c72b89896377def)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_IO_QUEUE_CONFIG_V1_5.AllowZeroLengthRequests", allow_zero_length_requests, 0x0, 0x0, false, 0x50539f58da3f5c5c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_IO_QUEUE_CONFIG_V1_5.DefaultQueue", default_queue, 0x0, 0x0, false, 0xb9f83fbb2ecfe8b1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_5.EvtIoDefault", evt_io_default, 0x0, 0x0, false, 0xe6ec03c2d4daf4d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_5.EvtIoRead", evt_io_read, 0x0, 0x0, false, 0x6c9aab09c75033ef)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_5.EvtIoWrite", evt_io_write, 0x0, 0x0, false, 0xd8d6e893f87177d4)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_5.EvtIoDeviceControl", evt_io_device_control, 0x0, 0x0, false, 0x9b56f1e65bd507ff)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_5.EvtIoInternalDeviceControl", evt_io_internal_device_control, 0x0, 0x0, false, 0x8a9b5f435a0399b2)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_queue_io_stop_t ), "_WDF_IO_QUEUE_CONFIG_V1_5.EvtIoStop", evt_io_stop, 0x0, 0x0, false, 0x11cc6e32a6f77daa)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_5.EvtIoResume", evt_io_resume, 0x0, 0x0, false, 0xc6f0a01d0c34f68c)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_5.EvtIoCanceledOnQueue", evt_io_canceled_on_queue, 0x0, 0x0, false, 0x8e6942ea1ec38f5c)
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