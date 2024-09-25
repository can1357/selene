#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_FILEOBJECT_CONFIG_V1_9.Size", size, 0x0, 0x0, false, 0x29d6b3ce5d2b9232)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_file_create_t ), "_WDF_FILEOBJECT_CONFIG_V1_9.EvtDeviceFileCreate", evt_device_file_create, 0x0, 0x0, false, 0x2a48e5fa830827a0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDF_FILEOBJECT_CONFIG_V1_9.EvtFileClose", evt_file_close, 0x0, 0x0, false, 0xfc3369a37844018)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDF_FILEOBJECT_CONFIG_V1_9.EvtFileCleanup", evt_file_cleanup, 0x0, 0x0, false, 0x222c812986630d04)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_FILEOBJECT_CONFIG_V1_9.AutoForwardCleanupClose", auto_forward_cleanup_close, 0x0, 0x0, false, 0x9fec8f07f17246b5)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::fileobject_class_t), "_WDF_FILEOBJECT_CONFIG_V1_9.FileObjectClass", file_object_class, 0x0, 0x0, false, 0xbc640d5af8941f86)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif