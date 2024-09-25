#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_FILEOBJECT_CONFIG_V1_13.Size", size, 0x0, 0x0, false, 0x8d4c2af8d2cc2de5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_file_create_t ), "_WDF_FILEOBJECT_CONFIG_V1_13.EvtDeviceFileCreate", evt_device_file_create, 0x0, 0x0, false, 0x79543176af2becbb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDF_FILEOBJECT_CONFIG_V1_13.EvtFileClose", evt_file_close, 0x0, 0x0, false, 0x853d30b7891c125d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDF_FILEOBJECT_CONFIG_V1_13.EvtFileCleanup", evt_file_cleanup, 0x0, 0x0, false, 0x7814cbe6cbec013d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_FILEOBJECT_CONFIG_V1_13.AutoForwardCleanupClose", auto_forward_cleanup_close, 0x0, 0x0, false, 0xc76c60564df2ea6d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::fileobject_class_t), "_WDF_FILEOBJECT_CONFIG_V1_13.FileObjectClass", file_object_class, 0x0, 0x0, false, 0x307c5efe2bfb8f58)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif