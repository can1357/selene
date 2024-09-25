#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_PDO_EVENT_CALLBACKS_V1_15.Size", size, 0x0, 0x0, false, 0x569903f1c08797c7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_15.EvtDeviceResourcesQuery", evt_device_resources_query, 0x0, 0x0, false, 0x87af130b50cbc53e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfioresreqlist_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_15.EvtDeviceResourceRequirementsQuery", evt_device_resource_requirements_query, 0x0, 0x0, false, 0x6ec851a8510c3a79)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_15.EvtDeviceEject", evt_device_eject, 0x0, 0x0, false, 0xcd5c0409ff444f8f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_set_lock_t ), "_WDF_PDO_EVENT_CALLBACKS_V1_15.EvtDeviceSetLock", evt_device_set_lock, 0x0, 0x0, false, 0xb2e242d8deff05e8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_enable_wake_at_bus_t ), "_WDF_PDO_EVENT_CALLBACKS_V1_15.EvtDeviceEnableWakeAtBus", evt_device_enable_wake_at_bus, 0x0, 0x0, false, 0x3acda5a06016d5d9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_15.EvtDeviceDisableWakeAtBus", evt_device_disable_wake_at_bus, 0x0, 0x0, false, 0xa9f80d7dd0b5d922)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_15.EvtDeviceReportedMissing", evt_device_reported_missing, 0x0, 0x0, false, 0x859b25dcc27dfc43)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif