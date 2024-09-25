#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_IO_QUEUE_CONFIG_V1_0.Size", size, 0x0, 0x0, false, 0x4e31b01e53ebb05c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::io_queue_dispatch_type_t), "_WDF_IO_QUEUE_CONFIG_V1_0.DispatchType", dispatch_type, 0x0, 0x0, false, 0x34cf412ad6b17a59)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_IO_QUEUE_CONFIG_V1_0.PowerManaged", power_managed, 0x0, 0x0, false, 0xd940f51681c81085)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_IO_QUEUE_CONFIG_V1_0.AllowZeroLengthRequests", allow_zero_length_requests, 0x0, 0x0, false, 0x41bd4bbcd1a79e12)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WDF_IO_QUEUE_CONFIG_V1_0.DefaultQueue", default_queue, 0x0, 0x0, false, 0xed01c5044ce23192)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_0.EvtIoDefault", evt_io_default, 0x0, 0x0, false, 0x6a43c2258cec4723)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_0.EvtIoRead", evt_io_read, 0x0, 0x0, false, 0x401bf149cf224bb4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_0.EvtIoWrite", evt_io_write, 0x0, 0x0, false, 0x5a94dfe6a162925c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_0.EvtIoDeviceControl", evt_io_device_control, 0x0, 0x0, false, 0xc7aeb6b43b011530)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*), "_WDF_IO_QUEUE_CONFIG_V1_0.EvtIoInternalDeviceControl", evt_io_internal_device_control, 0x0, 0x0, false, 0x320b093570d01ca0)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_queue_io_stop_t ), "_WDF_IO_QUEUE_CONFIG_V1_0.EvtIoStop", evt_io_stop, 0x0, 0x0, false, 0x32f7315989e9227)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_0.EvtIoResume", evt_io_resume, 0x0, 0x0, false, 0xc6287185c7a50fb7)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "_WDF_IO_QUEUE_CONFIG_V1_0.EvtIoCanceledOnQueue", evt_io_canceled_on_queue, 0x0, 0x0, false, 0x87b529ffa1322abc)
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