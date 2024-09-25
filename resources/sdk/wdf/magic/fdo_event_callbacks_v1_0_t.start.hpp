#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_FDO_EVENT_CALLBACKS_V1_0.Size", size, 0x0, 0x0, false, 0xc87e3ddbb7e8c8ff)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfioresreqlist_t*)>*), "_WDF_FDO_EVENT_CALLBACKS_V1_0.EvtDeviceFilterAddResourceRequirements", evt_device_filter_add_resource_requirements, 0x0, 0x0, false, 0x269ccdea7ee2c75e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfioresreqlist_t*)>*), "_WDF_FDO_EVENT_CALLBACKS_V1_0.EvtDeviceFilterRemoveResourceRequirements", evt_device_filter_remove_resource_requirements, 0x0, 0x0, false, 0xd85d46cd2d9eeca3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_FDO_EVENT_CALLBACKS_V1_0.EvtDeviceRemoveAddedResources", evt_device_remove_added_resources, 0x0, 0x0, false, 0x6bce366bbda97a48)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif