#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_1.Size", size, 0x0, 0x0, false, 0x32bb83a0f4a98ca0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_1.EvtDeviceD0Entry", evt_device_d0_entry, 0x0, 0x0, false, 0x543a41cb41c712ee)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_1.EvtDeviceD0EntryPostInterruptsEnabled", evt_device_d0_entry_post_interrupts_enabled, 0x0, 0x0, false, 0xae4ab8438d3ce2dd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_1.EvtDeviceD0Exit", evt_device_d0_exit, 0x0, 0x0, false, 0xea010d2b9836b589)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_1.EvtDeviceD0ExitPreInterruptsDisabled", evt_device_d0_exit_pre_interrupts_disabled, 0x0, 0x0, false, 0x20db345e9d910a12)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_1.EvtDevicePrepareHardware", evt_device_prepare_hardware, 0x0, 0x0, false, 0x2e9dc22d10beab9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_1.EvtDeviceReleaseHardware", evt_device_release_hardware, 0x0, 0x0, false, 0x1b82411b8fcfda3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_1.EvtDeviceSelfManagedIoCleanup", evt_device_self_managed_io_cleanup, 0x0, 0x0, false, 0xa097f0702191951)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_1.EvtDeviceSelfManagedIoFlush", evt_device_self_managed_io_flush, 0x0, 0x0, false, 0x24fbfe6506e4c163)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_1.EvtDeviceSelfManagedIoInit", evt_device_self_managed_io_init, 0x0, 0x0, false, 0x3803bec70dd07c3e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_1.EvtDeviceSelfManagedIoSuspend", evt_device_self_managed_io_suspend, 0x0, 0x0, false, 0xba88e041365e6208)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_1.EvtDeviceSelfManagedIoRestart", evt_device_self_managed_io_restart, 0x0, 0x0, false, 0xc917eb9ef7bb7bf9)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_1.EvtDeviceSurpriseRemoval", evt_device_surprise_removal, 0x0, 0x0, false, 0x962722b0ca6fb94d)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_1.EvtDeviceQueryRemove", evt_device_query_remove, 0x0, 0x0, false, 0x54dcebc2c9e8cd20)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_1.EvtDeviceQueryStop", evt_device_query_stop, 0x0, 0x0, false, 0xeb1b74d7f3250730)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_usage_notification_t ), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_1.EvtDeviceUsageNotification", evt_device_usage_notification, 0x0, 0x0, false, 0xa0a28ca4dd466c7)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_relations_query_t ), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_1.EvtDeviceRelationsQuery", evt_device_relations_query, 0x0, 0x0, false, 0xdff9c10b68998b78)
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