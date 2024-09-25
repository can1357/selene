#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_FDO_EVENT_CALLBACKS_V1_9.Size", size, 0x0, 0x0, false, 0xe1a740dfd0374c8a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfioresreqlist_t*)>*), "_WDF_FDO_EVENT_CALLBACKS_V1_9.EvtDeviceFilterAddResourceRequirements", evt_device_filter_add_resource_requirements, 0x0, 0x0, false, 0x6537ac9c9cfbbdbb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfioresreqlist_t*)>*), "_WDF_FDO_EVENT_CALLBACKS_V1_9.EvtDeviceFilterRemoveResourceRequirements", evt_device_filter_remove_resource_requirements, 0x0, 0x0, false, 0xa97851d233482e7d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_FDO_EVENT_CALLBACKS_V1_9.EvtDeviceRemoveAddedResources", evt_device_remove_added_resources, 0x0, 0x0, false, 0x124855da43f4393b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif