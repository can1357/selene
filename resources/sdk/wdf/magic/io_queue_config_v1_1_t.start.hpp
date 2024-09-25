#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_CONFIG_V1_1.Size", size, 0x0, 0x0, false, 0xecfed0ce2d182ae1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_queue_dispatch_type_t), "_WDF_IO_QUEUE_CONFIG_V1_1.DispatchType", dispatch_type, 0x0, 0x0, false, 0xfd5d3fe97c231c89)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_IO_QUEUE_CONFIG_V1_1.PowerManaged", power_managed, 0x0, 0x0, false, 0xa1f688873373995b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_IO_QUEUE_CONFIG_V1_1.AllowZeroLengthRequests", allow_zero_length_requests, 0x0, 0x0, false, 0x6a68c3b60f975df5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_IO_QUEUE_CONFIG_V1_1.DefaultQueue", default_queue, 0x0, 0x0, false, 0x6e6146f547dec53d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_1.EvtIoDefault", evt_io_default, 0x0, 0x0, false, 0x3c2e1fc269ab7b51)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_1.EvtIoRead", evt_io_read, 0x0, 0x0, false, 0x318f55bd12655927)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_1.EvtIoWrite", evt_io_write, 0x0, 0x0, false, 0x62c65a4a7e2f31a0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_1.EvtIoDeviceControl", evt_io_device_control, 0x0, 0x0, false, 0xce5e687eadbc1b27)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_1.EvtIoInternalDeviceControl", evt_io_internal_device_control, 0x0, 0x0, false, 0xf10235e891bd9e6e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_queue_io_stop_t ), "_WDF_IO_QUEUE_CONFIG_V1_1.EvtIoStop", evt_io_stop, 0x0, 0x0, false, 0xec600da9a5a7d710)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_1.EvtIoResume", evt_io_resume, 0x0, 0x0, false, 0x661348c7ccbfd2d2)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_1.EvtIoCanceledOnQueue", evt_io_canceled_on_queue, 0x0, 0x0, false, 0x14524063497b425)
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