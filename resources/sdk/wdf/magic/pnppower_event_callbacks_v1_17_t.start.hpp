#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_17.Size", size, 0x0, 0x0, false, 0x4ee1eb15c8f86d9b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_17.EvtDeviceD0Entry", evt_device_d0_entry, 0x0, 0x0, false, 0xa2132202092f379e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_17.EvtDeviceD0EntryPostInterruptsEnabled", evt_device_d0_entry_post_interrupts_enabled, 0x0, 0x0, false, 0x1b69a04939baa021)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_17.EvtDeviceD0Exit", evt_device_d0_exit, 0x0, 0x0, false, 0xdf9614af4eea0db9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_17.EvtDeviceD0ExitPreInterruptsDisabled", evt_device_d0_exit_pre_interrupts_disabled, 0x0, 0x0, false, 0x5583b7f3555a6acc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_17.EvtDevicePrepareHardware", evt_device_prepare_hardware, 0x0, 0x0, false, 0x8b4905be423a565c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_17.EvtDeviceReleaseHardware", evt_device_release_hardware, 0x0, 0x0, false, 0x33b5a619c42ecb1e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_17.EvtDeviceSelfManagedIoCleanup", evt_device_self_managed_io_cleanup, 0x0, 0x0, false, 0x4156b7ac27d022f5)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_17.EvtDeviceSelfManagedIoFlush", evt_device_self_managed_io_flush, 0x0, 0x0, false, 0x4760e31589290b24)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_17.EvtDeviceSelfManagedIoInit", evt_device_self_managed_io_init, 0x0, 0x0, false, 0xba9fc752e4c163af)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_17.EvtDeviceSelfManagedIoSuspend", evt_device_self_managed_io_suspend, 0x0, 0x0, false, 0x5a6e5545778b77b3)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_17.EvtDeviceSelfManagedIoRestart", evt_device_self_managed_io_restart, 0x0, 0x0, false, 0xea5cf8ed819f0d59)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_17.EvtDeviceSurpriseRemoval", evt_device_surprise_removal, 0x0, 0x0, false, 0xf033190fe882c074)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_17.EvtDeviceQueryRemove", evt_device_query_remove, 0x0, 0x0, false, 0x849f4d2b8f297ae8)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_17.EvtDeviceQueryStop", evt_device_query_stop, 0x0, 0x0, false, 0x1360bd24f7f79bc)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_usage_notification_t ), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_17.EvtDeviceUsageNotification", evt_device_usage_notification, 0x0, 0x0, false, 0xa8446e0f2612d318)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_relations_query_t ), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_17.EvtDeviceRelationsQuery", evt_device_relations_query, 0x0, 0x0, false, 0xb60ea9e4870346d1)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_usage_notification_ex_t ), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_17.EvtDeviceUsageNotificationEx", evt_device_usage_notification_ex, 0x0, 0x0, false, 0xde29bb80d2fa5d9a)
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
#define _m17
#endif