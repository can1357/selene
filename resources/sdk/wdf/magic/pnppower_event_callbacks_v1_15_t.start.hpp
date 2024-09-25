#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_15.Size", size, 0x0, 0x0, false, 0x8375722b682e6f9b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_15.EvtDeviceD0Entry", evt_device_d0_entry, 0x0, 0x0, false, 0xce31c228f05e16b6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_15.EvtDeviceD0EntryPostInterruptsEnabled", evt_device_d0_entry_post_interrupts_enabled, 0x0, 0x0, false, 0xb5d9c2f376ff63fc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_15.EvtDeviceD0Exit", evt_device_d0_exit, 0x0, 0x0, false, 0xc07c3e468d267894)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_15.EvtDeviceD0ExitPreInterruptsDisabled", evt_device_d0_exit_pre_interrupts_disabled, 0x0, 0x0, false, 0x5539bb831d3b5383)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_15.EvtDevicePrepareHardware", evt_device_prepare_hardware, 0x0, 0x0, false, 0xcbde3b2674d12e33)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_15.EvtDeviceReleaseHardware", evt_device_release_hardware, 0x0, 0x0, false, 0x6900a477966fdc02)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_15.EvtDeviceSelfManagedIoCleanup", evt_device_self_managed_io_cleanup, 0x0, 0x0, false, 0xa8a87901e02489ea)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_15.EvtDeviceSelfManagedIoFlush", evt_device_self_managed_io_flush, 0x0, 0x0, false, 0x8b3e3f293d4d6461)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_15.EvtDeviceSelfManagedIoInit", evt_device_self_managed_io_init, 0x0, 0x0, false, 0x80711e5a419c8338)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_15.EvtDeviceSelfManagedIoSuspend", evt_device_self_managed_io_suspend, 0x0, 0x0, false, 0xd54f0d57c17495c)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_15.EvtDeviceSelfManagedIoRestart", evt_device_self_managed_io_restart, 0x0, 0x0, false, 0xb28caef4fbb8e225)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_15.EvtDeviceSurpriseRemoval", evt_device_surprise_removal, 0x0, 0x0, false, 0xb45f24eb5232773e)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_15.EvtDeviceQueryRemove", evt_device_query_remove, 0x0, 0x0, false, 0x20d119a134914d80)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_15.EvtDeviceQueryStop", evt_device_query_stop, 0x0, 0x0, false, 0x755d10c104654c1c)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_usage_notification_t ), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_15.EvtDeviceUsageNotification", evt_device_usage_notification, 0x0, 0x0, false, 0x6e7597385bd0efaa)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_relations_query_t ), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_15.EvtDeviceRelationsQuery", evt_device_relations_query, 0x0, 0x0, false, 0x905f5acac8080fab)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_usage_notification_ex_t ), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_15.EvtDeviceUsageNotificationEx", evt_device_usage_notification_ex, 0x0, 0x0, false, 0x113f3d63008dbe18)
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