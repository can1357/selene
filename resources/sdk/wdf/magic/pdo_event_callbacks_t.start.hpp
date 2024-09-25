#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_PDO_EVENT_CALLBACKS.Size", size, 0x0, 0x20, true, 0x2ccfc6256b65dec9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_PDO_EVENT_CALLBACKS.EvtDeviceResourcesQuery", evt_device_resources_query, 0x40, 0x40, true, 0x1034d4a97d5412e9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfioresreqlist_t*)>*), "_WDF_PDO_EVENT_CALLBACKS.EvtDeviceResourceRequirementsQuery", evt_device_resource_requirements_query, 0x80, 0x40, true, 0x51f8277edbea1651)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PDO_EVENT_CALLBACKS.EvtDeviceEject", evt_device_eject, 0xc0, 0x40, true, 0x1e87bb7985898f7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_set_lock_t ), "_WDF_PDO_EVENT_CALLBACKS.EvtDeviceSetLock", evt_device_set_lock, 0x100, 0x40, true, 0x981dd9373453b48d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_enable_wake_at_bus_t ), "_WDF_PDO_EVENT_CALLBACKS.EvtDeviceEnableWakeAtBus", evt_device_enable_wake_at_bus, 0x140, 0x40, true, 0x74a75c75fbe602)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PDO_EVENT_CALLBACKS.EvtDeviceDisableWakeAtBus", evt_device_disable_wake_at_bus, 0x180, 0x40, true, 0xbc6543efdf905b7e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PDO_EVENT_CALLBACKS.EvtDeviceReportedMissing", evt_device_reported_missing, 0x1c0, 0x40, true, 0xef4352b6024a3dda)
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