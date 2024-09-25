#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_FILEOBJECT_CONFIG_V1_0.Size", size, 0x0, 0x0, false, 0xd51dcb5dcc87c184)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_file_create_t ), "_WDF_FILEOBJECT_CONFIG_V1_0.EvtDeviceFileCreate", evt_device_file_create, 0x0, 0x0, false, 0xd26c0a6ec7bc2314)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDF_FILEOBJECT_CONFIG_V1_0.EvtFileClose", evt_file_close, 0x0, 0x0, false, 0x4d7deae93dd261b6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDF_FILEOBJECT_CONFIG_V1_0.EvtFileCleanup", evt_file_cleanup, 0x0, 0x0, false, 0x9203718c6e7cc6f3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_FILEOBJECT_CONFIG_V1_0.AutoForwardCleanupClose", auto_forward_cleanup_close, 0x0, 0x0, false, 0x4f55a5bbc9a4f326)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::fileobject_class_t), "_WDF_FILEOBJECT_CONFIG_V1_0.FileObjectClass", file_object_class, 0x0, 0x0, false, 0x8003cb945b93b865)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif