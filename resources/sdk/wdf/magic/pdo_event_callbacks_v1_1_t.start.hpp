#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_PDO_EVENT_CALLBACKS_V1_1.Size", size, 0x0, 0x0, false, 0xd7f67c1a1e2e5ab9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_1.EvtDeviceResourcesQuery", evt_device_resources_query, 0x0, 0x0, false, 0x6261650936675034)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfioresreqlist_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_1.EvtDeviceResourceRequirementsQuery", evt_device_resource_requirements_query, 0x0, 0x0, false, 0x8e75739775f52e62)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_1.EvtDeviceEject", evt_device_eject, 0x0, 0x0, false, 0x1f3b68ecb68cfa4e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_set_lock_t ), "_WDF_PDO_EVENT_CALLBACKS_V1_1.EvtDeviceSetLock", evt_device_set_lock, 0x0, 0x0, false, 0xbd3a2f0dde1692ff)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_enable_wake_at_bus_t ), "_WDF_PDO_EVENT_CALLBACKS_V1_1.EvtDeviceEnableWakeAtBus", evt_device_enable_wake_at_bus, 0x0, 0x0, false, 0xbbb7e7d3fa743c55)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_1.EvtDeviceDisableWakeAtBus", evt_device_disable_wake_at_bus, 0x0, 0x0, false, 0x613407576734bade)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif