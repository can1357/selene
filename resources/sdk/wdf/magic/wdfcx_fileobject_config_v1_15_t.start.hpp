#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFCX_FILEOBJECT_CONFIG_V1_15.Size", size, 0x0, 0x0, false, 0x551c46c5080b2aa5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcx_device_file_create_t ), "_WDFCX_FILEOBJECT_CONFIG_V1_15.EvtCxDeviceFileCreate", evt_cx_device_file_create, 0x0, 0x0, false, 0x252afaff677074e2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDFCX_FILEOBJECT_CONFIG_V1_15.EvtFileClose", evt_file_close, 0x0, 0x0, false, 0xaa758ab9045a4973)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDFCX_FILEOBJECT_CONFIG_V1_15.EvtFileCleanup", evt_file_cleanup, 0x0, 0x0, false, 0x6c5ff4fabbd8e208)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDFCX_FILEOBJECT_CONFIG_V1_15.AutoForwardCleanupClose", auto_forward_cleanup_close, 0x0, 0x0, false, 0xfb7f1ddafd3b7222)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::fileobject_class_t), "_WDFCX_FILEOBJECT_CONFIG_V1_15.FileObjectClass", file_object_class, 0x0, 0x0, false, 0x87371a99bded6e8f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif