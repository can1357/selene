#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_PNPPOWER_EVENT_CALLBACKS.Size", size, 0x0, 0x20, true, 0xcc2f059b89583218)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS.EvtDeviceD0Entry", evt_device_d0_entry, 0x40, 0x40, true, 0xc614069137ba657a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS.EvtDeviceD0EntryPostInterruptsEnabled", evt_device_d0_entry_post_interrupts_enabled, 0x80, 0x40, true, 0xc761032dc1837b75)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS.EvtDeviceD0Exit", evt_device_d0_exit, 0xc0, 0x40, true, 0x6c5c24d5cd1d27cc)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS.EvtDeviceD0ExitPreInterruptsDisabled", evt_device_d0_exit_pre_interrupts_disabled, 0x100, 0x40, true, 0x6a0261dbb6932197)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS.EvtDevicePrepareHardware", evt_device_prepare_hardware, 0x140, 0x40, true, 0xe381e04750e3fdf7)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS.EvtDeviceReleaseHardware", evt_device_release_hardware, 0x180, 0x40, true, 0xa6b9b206011ab4ab)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS.EvtDeviceSelfManagedIoCleanup", evt_device_self_managed_io_cleanup, 0x1c0, 0x40, true, 0xecd9f10cc3fdb739)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS.EvtDeviceSelfManagedIoFlush", evt_device_self_managed_io_flush, 0x200, 0x40, true, 0xc165246747ebeeef)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS.EvtDeviceSelfManagedIoInit", evt_device_self_managed_io_init, 0x240, 0x40, true, 0xdada24aabc426acf)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS.EvtDeviceSelfManagedIoSuspend", evt_device_self_managed_io_suspend, 0x280, 0x40, true, 0x85cd7ba0bc32ba00)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS.EvtDeviceSelfManagedIoRestart", evt_device_self_managed_io_restart, 0x2c0, 0x40, true, 0xcd9f2cb46d60a506)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS.EvtDeviceSurpriseRemoval", evt_device_surprise_removal, 0x300, 0x40, true, 0x508bfdc147e83627)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS.EvtDeviceQueryRemove", evt_device_query_remove, 0x340, 0x40, true, 0x76199dec5752c132)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS.EvtDeviceQueryStop", evt_device_query_stop, 0x380, 0x40, true, 0x7d0b57d7efc0a4c6)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_usage_notification_t ), "_WDF_PNPPOWER_EVENT_CALLBACKS.EvtDeviceUsageNotification", evt_device_usage_notification, 0x3c0, 0x40, true, 0xe610d455aadf0f3c)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_relations_query_t ), "_WDF_PNPPOWER_EVENT_CALLBACKS.EvtDeviceRelationsQuery", evt_device_relations_query, 0x400, 0x40, true, 0x3827add5878853f2)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_usage_notification_ex_t ), "_WDF_PNPPOWER_EVENT_CALLBACKS.EvtDeviceUsageNotificationEx", evt_device_usage_notification_ex, 0x440, 0x40, true, 0xd2809eda2be05234)
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