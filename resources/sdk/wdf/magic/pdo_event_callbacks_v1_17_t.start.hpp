#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_PDO_EVENT_CALLBACKS_V1_17.Size", size, 0x0, 0x0, false, 0x3f004161203a5798)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_17.EvtDeviceResourcesQuery", evt_device_resources_query, 0x0, 0x0, false, 0x44549d630c1b2563)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfioresreqlist_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_17.EvtDeviceResourceRequirementsQuery", evt_device_resource_requirements_query, 0x0, 0x0, false, 0x18abc3d5a19595f5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_17.EvtDeviceEject", evt_device_eject, 0x0, 0x0, false, 0x9a0203245abb28db)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_set_lock_t ), "_WDF_PDO_EVENT_CALLBACKS_V1_17.EvtDeviceSetLock", evt_device_set_lock, 0x0, 0x0, false, 0xb50abab666111b45)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_enable_wake_at_bus_t ), "_WDF_PDO_EVENT_CALLBACKS_V1_17.EvtDeviceEnableWakeAtBus", evt_device_enable_wake_at_bus, 0x0, 0x0, false, 0x52966ace8402c495)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_17.EvtDeviceDisableWakeAtBus", evt_device_disable_wake_at_bus, 0x0, 0x0, false, 0x5a53eafd8a0470bb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_17.EvtDeviceReportedMissing", evt_device_reported_missing, 0x0, 0x0, false, 0xcef07f7d240a603a)
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