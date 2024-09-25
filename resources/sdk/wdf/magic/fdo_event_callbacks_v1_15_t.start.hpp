#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_FDO_EVENT_CALLBACKS_V1_15.Size", size, 0x0, 0x0, false, 0x23252490d382e72a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfioresreqlist_t*)>*), "_WDF_FDO_EVENT_CALLBACKS_V1_15.EvtDeviceFilterAddResourceRequirements", evt_device_filter_add_resource_requirements, 0x0, 0x0, false, 0x1d0f8e9087135e1d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfioresreqlist_t*)>*), "_WDF_FDO_EVENT_CALLBACKS_V1_15.EvtDeviceFilterRemoveResourceRequirements", evt_device_filter_remove_resource_requirements, 0x0, 0x0, false, 0x1a35dea4e4efd4ad)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_FDO_EVENT_CALLBACKS_V1_15.EvtDeviceRemoveAddedResources", evt_device_remove_added_resources, 0x0, 0x0, false, 0x4b215a5e0325c2a9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif