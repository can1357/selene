#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_FILEOBJECT_CONFIG_V1_11.Size", size, 0x0, 0x0, false, 0xedef309eb6d1a7a1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_file_create_t ), "_WDF_FILEOBJECT_CONFIG_V1_11.EvtDeviceFileCreate", evt_device_file_create, 0x0, 0x0, false, 0xea8d73347164fc74)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDF_FILEOBJECT_CONFIG_V1_11.EvtFileClose", evt_file_close, 0x0, 0x0, false, 0xb347684323185232)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDF_FILEOBJECT_CONFIG_V1_11.EvtFileCleanup", evt_file_cleanup, 0x0, 0x0, false, 0x15b4061fabd34c17)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_FILEOBJECT_CONFIG_V1_11.AutoForwardCleanupClose", auto_forward_cleanup_close, 0x0, 0x0, false, 0x5cb5462fecf9ff80)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::fileobject_class_t), "_WDF_FILEOBJECT_CONFIG_V1_11.FileObjectClass", file_object_class, 0x0, 0x0, false, 0xb24487e5493ffb70)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif