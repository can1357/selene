#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_FILEOBJECT_CONFIG_V1_7.Size", size, 0x0, 0x0, false, 0x674fd400e5072372)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_file_create_t ), "_WDF_FILEOBJECT_CONFIG_V1_7.EvtDeviceFileCreate", evt_device_file_create, 0x0, 0x0, false, 0xafaa24dfbe02bddc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDF_FILEOBJECT_CONFIG_V1_7.EvtFileClose", evt_file_close, 0x0, 0x0, false, 0xb6b261b3936e4492)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDF_FILEOBJECT_CONFIG_V1_7.EvtFileCleanup", evt_file_cleanup, 0x0, 0x0, false, 0xd0f1d71b740ad0fa)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_FILEOBJECT_CONFIG_V1_7.AutoForwardCleanupClose", auto_forward_cleanup_close, 0x0, 0x0, false, 0xa2dcb81a5b1d13a7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::fileobject_class_t), "_WDF_FILEOBJECT_CONFIG_V1_7.FileObjectClass", file_object_class, 0x0, 0x0, false, 0xcf81a631252ef462)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif