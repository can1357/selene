#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_9.Size", size, 0x0, 0x20, true, 0x7634596a5ac66c2c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_9.EvtDeviceD0Entry", evt_device_d0_entry, 0x40, 0x40, true, 0x91bc03098d7e88c1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_9.EvtDeviceD0EntryPostInterruptsEnabled", evt_device_d0_entry_post_interrupts_enabled, 0x80, 0x40, true, 0x3bc4dc9bb06e6dcb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_9.EvtDeviceD0Exit", evt_device_d0_exit, 0xc0, 0x40, true, 0x66df6adb52a00399)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, enum wdf::power_device_state_t)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_9.EvtDeviceD0ExitPreInterruptsDisabled", evt_device_d0_exit_pre_interrupts_disabled, 0x100, 0x40, true, 0x30610fb15c20680d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_9.EvtDevicePrepareHardware", evt_device_prepare_hardware, 0x140, 0x40, true, 0xddba9ade9a9d8cc)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_9.EvtDeviceReleaseHardware", evt_device_release_hardware, 0x180, 0x40, true, 0xaf6a73e8ceaf2b35)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_9.EvtDeviceSelfManagedIoCleanup", evt_device_self_managed_io_cleanup, 0x1c0, 0x40, true, 0x69fec0f33e6b5006)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_9.EvtDeviceSelfManagedIoFlush", evt_device_self_managed_io_flush, 0x200, 0x40, true, 0x1f61435bd76e79dc)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_9.EvtDeviceSelfManagedIoInit", evt_device_self_managed_io_init, 0x240, 0x40, true, 0xc6eddbb83ec852e5)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_9.EvtDeviceSelfManagedIoSuspend", evt_device_self_managed_io_suspend, 0x280, 0x40, true, 0x57dca91405143fa8)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_9.EvtDeviceSelfManagedIoRestart", evt_device_self_managed_io_restart, 0x2c0, 0x40, true, 0x1e9277fca72d097e)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_9.EvtDeviceSurpriseRemoval", evt_device_surprise_removal, 0x300, 0x40, true, 0x74ec744ece0e51e1)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_9.EvtDeviceQueryRemove", evt_device_query_remove, 0x340, 0x40, true, 0x2b20d47033a27b90)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_9.EvtDeviceQueryStop", evt_device_query_stop, 0x380, 0x40, true, 0x890f08dad4f65449)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_usage_notification_t ), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_9.EvtDeviceUsageNotification", evt_device_usage_notification, 0x3c0, 0x40, true, 0xca59345c7e2abe5c)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_relations_query_t ), "_WDF_PNPPOWER_EVENT_CALLBACKS_V1_9.EvtDeviceRelationsQuery", evt_device_relations_query, 0x400, 0x40, true, 0x559396e91390961a)
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