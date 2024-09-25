#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_FDO_EVENT_CALLBACKS_V1_7.Size", size, 0x0, 0x0, false, 0x61620b0b6be77cef)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfioresreqlist_t*)>*), "_WDF_FDO_EVENT_CALLBACKS_V1_7.EvtDeviceFilterAddResourceRequirements", evt_device_filter_add_resource_requirements, 0x0, 0x0, false, 0x9c91d4b7a75f9ba7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfioresreqlist_t*)>*), "_WDF_FDO_EVENT_CALLBACKS_V1_7.EvtDeviceFilterRemoveResourceRequirements", evt_device_filter_remove_resource_requirements, 0x0, 0x0, false, 0xd2f43470bfb6cfda)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_FDO_EVENT_CALLBACKS_V1_7.EvtDeviceRemoveAddedResources", evt_device_remove_added_resources, 0x0, 0x0, false, 0x5813157e523d3d25)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif