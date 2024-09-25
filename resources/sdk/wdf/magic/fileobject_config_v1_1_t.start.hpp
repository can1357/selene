#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_FILEOBJECT_CONFIG_V1_1.Size", size, 0x0, 0x0, false, 0xec48bb73354bcaab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_file_create_t ), "_WDF_FILEOBJECT_CONFIG_V1_1.EvtDeviceFileCreate", evt_device_file_create, 0x0, 0x0, false, 0xf3d2d32f74cab14b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDF_FILEOBJECT_CONFIG_V1_1.EvtFileClose", evt_file_close, 0x0, 0x0, false, 0xb309b1fcb5772e91)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDF_FILEOBJECT_CONFIG_V1_1.EvtFileCleanup", evt_file_cleanup, 0x0, 0x0, false, 0xe7144cbaf0ce33ef)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_FILEOBJECT_CONFIG_V1_1.AutoForwardCleanupClose", auto_forward_cleanup_close, 0x0, 0x0, false, 0xd6c2909e0f7b4e83)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::fileobject_class_t), "_WDF_FILEOBJECT_CONFIG_V1_1.FileObjectClass", file_object_class, 0x0, 0x0, false, 0x75ab6e4332a72367)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif