#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_5.Size", size, 0x0, 0x0, false, 0x2d3f5358951fbfa2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_5.EvtDeviceD0Entry", evt_device_d0_entry, 0x0, 0x0, false, 0xa609e743efe525ff)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_5.EvtDeviceD0EntryPostInterruptsEnabled", evt_device_d0_entry_post_interrupts_enabled, 0x0, 0x0, false, 0xef370b1651252aae)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_5.EvtDeviceD0Exit", evt_device_d0_exit, 0x0, 0x0, false, 0x7960ad0a7b8a4fa4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_5.EvtDeviceD0ExitPreInterruptsDisabled", evt_device_d0_exit_pre_interrupts_disabled, 0x0, 0x0, false, 0x8ab45132456c058)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_5.EvtDevicePrepareHardware", evt_device_prepare_hardware, 0x0, 0x0, false, 0xfb86ab463e4afa16)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_5.EvtDeviceReleaseHardware", evt_device_release_hardware, 0x0, 0x0, false, 0x2be1cf2b563c7799)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_5.EvtDeviceSelfManagedIoCleanup", evt_device_self_managed_io_cleanup, 0x0, 0x0, false, 0xccbe024d8c32b9bc)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_5.EvtDeviceSelfManagedIoFlush", evt_device_self_managed_io_flush, 0x0, 0x0, false, 0xa072b842c5744658)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_5.EvtDeviceSelfManagedIoInit", evt_device_self_managed_io_init, 0x0, 0x0, false, 0x1728e8a31d4b7026)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_5.EvtDeviceSelfManagedIoSuspend", evt_device_self_managed_io_suspend, 0x0, 0x0, false, 0x8127a10f2bbe9612)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_5.EvtDeviceSelfManagedIoRestart", evt_device_self_managed_io_restart, 0x0, 0x0, false, 0x7fd8cfcaf43edad3)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_5.EvtDeviceSurpriseRemoval", evt_device_surprise_removal, 0x0, 0x0, false, 0x4fabd8ce6a3769f3)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_5.EvtDeviceQueryRemove", evt_device_query_remove, 0x0, 0x0, false, 0xaa9aa210da16d1b3)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_5.EvtDeviceQueryStop", evt_device_query_stop, 0x0, 0x0, false, 0xdd6634f04a9952b4)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_usage_notification_t ), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_5.EvtDeviceUsageNotification", evt_device_usage_notification, 0x0, 0x0, false, 0xf3cf215069116eae)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_relations_query_t ), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_5.EvtDeviceRelationsQuery", evt_device_relations_query, 0x0, 0x0, false, 0xa24886acd9a6cebd)
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