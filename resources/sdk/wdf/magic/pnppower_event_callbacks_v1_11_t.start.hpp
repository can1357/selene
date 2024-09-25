#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_11.Size", size, 0x0, 0x0, false, 0x1b31a2ed81e97dc8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_11.EvtDeviceD0Entry", evt_device_d0_entry, 0x0, 0x0, false, 0xbb0c128f619787d1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_11.EvtDeviceD0EntryPostInterruptsEnabled", evt_device_d0_entry_post_interrupts_enabled, 0x0, 0x0, false, 0xe6cabde753bab1a4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_11.EvtDeviceD0Exit", evt_device_d0_exit, 0x0, 0x0, false, 0x1080ded6f0b3c769)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_11.EvtDeviceD0ExitPreInterruptsDisabled", evt_device_d0_exit_pre_interrupts_disabled, 0x0, 0x0, false, 0x468da11f645880cc)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_11.EvtDevicePrepareHardware", evt_device_prepare_hardware, 0x0, 0x0, false, 0x10a388aa166c7055)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_11.EvtDeviceReleaseHardware", evt_device_release_hardware, 0x0, 0x0, false, 0x5098736eb939edfc)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_11.EvtDeviceSelfManagedIoCleanup", evt_device_self_managed_io_cleanup, 0x0, 0x0, false, 0x99d789b472cc6308)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_11.EvtDeviceSelfManagedIoFlush", evt_device_self_managed_io_flush, 0x0, 0x0, false, 0x4aa80a6f51b68a02)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_11.EvtDeviceSelfManagedIoInit", evt_device_self_managed_io_init, 0x0, 0x0, false, 0x7401192bdb49689e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_11.EvtDeviceSelfManagedIoSuspend", evt_device_self_managed_io_suspend, 0x0, 0x0, false, 0x4accf949a7774d37)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_11.EvtDeviceSelfManagedIoRestart", evt_device_self_managed_io_restart, 0x0, 0x0, false, 0x1fd8310d8147578c)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_11.EvtDeviceSurpriseRemoval", evt_device_surprise_removal, 0x0, 0x0, false, 0x5d1510060d7eea1)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_11.EvtDeviceQueryRemove", evt_device_query_remove, 0x0, 0x0, false, 0x6758bc0535b2b515)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_11.EvtDeviceQueryStop", evt_device_query_stop, 0x0, 0x0, false, 0xce48e1ec92a56fb6)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_usage_notification_t ), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_11.EvtDeviceUsageNotification", evt_device_usage_notification, 0x0, 0x0, false, 0xbe9b4a2e0b1446db)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_relations_query_t ), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_11.EvtDeviceRelationsQuery", evt_device_relations_query, 0x0, 0x0, false, 0x2df5136039aa7be1)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_usage_notification_ex_t ), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_11.EvtDeviceUsageNotificationEx", evt_device_usage_notification_ex, 0x0, 0x0, false, 0x6b4afb38ca4f4ae)
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