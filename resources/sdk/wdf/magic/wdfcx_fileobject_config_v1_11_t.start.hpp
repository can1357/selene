#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFCX_FILEOBJECT_CONFIG_V1_11.Size", size, 0x0, 0x0, false, 0xf92b1274c0ac9569)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcx_device_file_create_t ), "_WDFCX_FILEOBJECT_CONFIG_V1_11.EvtCxDeviceFileCreate", evt_cx_device_file_create, 0x0, 0x0, false, 0x478c0a486e062ef2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDFCX_FILEOBJECT_CONFIG_V1_11.EvtFileClose", evt_file_close, 0x0, 0x0, false, 0x373c06f7643e4261)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDFCX_FILEOBJECT_CONFIG_V1_11.EvtFileCleanup", evt_file_cleanup, 0x0, 0x0, false, 0x7a50bd21419cbcd4)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDFCX_FILEOBJECT_CONFIG_V1_11.AutoForwardCleanupClose", auto_forward_cleanup_close, 0x0, 0x0, false, 0x84946c84481b0e0f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::fileobject_class_t), "_WDFCX_FILEOBJECT_CONFIG_V1_11.FileObjectClass", file_object_class, 0x0, 0x0, false, 0x2eb7eeada51649f6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif