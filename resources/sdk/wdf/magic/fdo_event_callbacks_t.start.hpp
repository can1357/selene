#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_FDO_EVENT_CALLBACKS.Size", size, 0x0, 0x20, true, 0x33a034f0cbca3a76)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfioresreqlist_t*)>*), "_WDF_FDO_EVENT_CALLBACKS.EvtDeviceFilterAddResourceRequirements", evt_device_filter_add_resource_requirements, 0x40, 0x40, true, 0x7f2a6ae4061bf2ff)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfioresreqlist_t*)>*), "_WDF_FDO_EVENT_CALLBACKS.EvtDeviceFilterRemoveResourceRequirements", evt_device_filter_remove_resource_requirements, 0x80, 0x40, true, 0x7e7e7494667ea637)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct wdf::wdfdevice_t*, struct wdf::wdfcmreslist_t*, struct wdf::wdfcmreslist_t*)>*), "_WDF_FDO_EVENT_CALLBACKS.EvtDeviceRemoveAddedResources", evt_device_remove_added_resources, 0xc0, 0x40, true, 0xedba6bd1c9c14c81)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif