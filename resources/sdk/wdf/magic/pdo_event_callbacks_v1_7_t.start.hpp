#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_PDO_EVENT_CALLBACKS_V1_7.Size", size, 0x0, 0x0, false, 0x8c2ae4da9166e33)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_7.EvtDeviceResourcesQuery", evt_device_resources_query, 0x0, 0x0, false, 0x295c409ad034d521)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfioresreqlist_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_7.EvtDeviceResourceRequirementsQuery", evt_device_resource_requirements_query, 0x0, 0x0, false, 0xc1fe7fbee30e858f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_7.EvtDeviceEject", evt_device_eject, 0x0, 0x0, false, 0xa34c21c8fab3b63b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_set_lock_t ), "_WDF_PDO_EVENT_CALLBACKS_V1_7.EvtDeviceSetLock", evt_device_set_lock, 0x0, 0x0, false, 0x573c317d29c477b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_enable_wake_at_bus_t ), "_WDF_PDO_EVENT_CALLBACKS_V1_7.EvtDeviceEnableWakeAtBus", evt_device_enable_wake_at_bus, 0x0, 0x0, false, 0xa1c374377b0db33c)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_7.EvtDeviceDisableWakeAtBus", evt_device_disable_wake_at_bus, 0x0, 0x0, false, 0xaf72253dbc5a259f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif