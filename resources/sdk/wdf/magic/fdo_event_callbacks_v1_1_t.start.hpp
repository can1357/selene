#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_FDO_EVENT_CALLBACKS_V1_1.Size", size, 0x0, 0x0, false, 0x50132ad19a56de73)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfioresreqlist_t*)>*), "_WDF_FDO_EVENT_CALLBACKS_V1_1.EvtDeviceFilterAddResourceRequirements", evt_device_filter_add_resource_requirements, 0x0, 0x0, false, 0x54ed6a228920091b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfioresreqlist_t*)>*), "_WDF_FDO_EVENT_CALLBACKS_V1_1.EvtDeviceFilterRemoveResourceRequirements", evt_device_filter_remove_resource_requirements, 0x0, 0x0, false, 0xa8843d5214470ff5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_FDO_EVENT_CALLBACKS_V1_1.EvtDeviceRemoveAddedResources", evt_device_remove_added_resources, 0x0, 0x0, false, 0xb95c52bd85b2e4dd)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif