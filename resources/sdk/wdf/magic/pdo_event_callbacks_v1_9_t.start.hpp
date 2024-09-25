#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_PDO_EVENT_CALLBACKS_V1_9.Size", size, 0x0, 0x20, true, 0xe99b215cafbca8c2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_9.EvtDeviceResourcesQuery", evt_device_resources_query, 0x40, 0x40, true, 0xe7a0723b578073b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfioresreqlist_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_9.EvtDeviceResourceRequirementsQuery", evt_device_resource_requirements_query, 0x80, 0x40, true, 0xddb834f9b88ed8d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_9.EvtDeviceEject", evt_device_eject, 0xc0, 0x40, true, 0x92f9fe604a6277c1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_set_lock_t ), "_WDF_PDO_EVENT_CALLBACKS_V1_9.EvtDeviceSetLock", evt_device_set_lock, 0x100, 0x40, true, 0xa0262adfca89aad2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_enable_wake_at_bus_t ), "_WDF_PDO_EVENT_CALLBACKS_V1_9.EvtDeviceEnableWakeAtBus", evt_device_enable_wake_at_bus, 0x140, 0x40, true, 0x45d383a697757d1b)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdevice_t*)>*), "_WDF_PDO_EVENT_CALLBACKS_V1_9.EvtDeviceDisableWakeAtBus", evt_device_disable_wake_at_bus, 0x180, 0x40, true, 0x7f70866dbf1b3e18)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif