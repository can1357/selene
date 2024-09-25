#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_PDO_EVENT_CALLBACKS_V1_11.Size", size, 0x0, 0x0, false, 0x3767c8ef3a55fde3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_11.EvtDeviceResourcesQuery", evt_device_resources_query, 0x0, 0x0, false, 0x3d55dea21fa799b4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfioresreqlist_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_11.EvtDeviceResourceRequirementsQuery", evt_device_resource_requirements_query, 0x0, 0x0, false, 0xcaadc60ae86ef0d4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_11.EvtDeviceEject", evt_device_eject, 0x0, 0x0, false, 0x464d3c1bd101eb92)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_set_lock_t ), "_WDF_PDO_EVENT_CALLBACKS_V1_11.EvtDeviceSetLock", evt_device_set_lock, 0x0, 0x0, false, 0x695bbb6cb91c2596)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_enable_wake_at_bus_t ), "_WDF_PDO_EVENT_CALLBACKS_V1_11.EvtDeviceEnableWakeAtBus", evt_device_enable_wake_at_bus, 0x0, 0x0, false, 0xeecf530afadd134a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_11.EvtDeviceDisableWakeAtBus", evt_device_disable_wake_at_bus, 0x0, 0x0, false, 0x27a276037f96c63e)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_11.EvtDeviceReportedMissing", evt_device_reported_missing, 0x0, 0x0, false, 0x9e20312681b0b164)
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