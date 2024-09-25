#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_FILEOBJECT_CONFIG_V1_15.Size", size, 0x0, 0x0, false, 0x552df51d03469201)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_file_create_t ), "_WDF_FILEOBJECT_CONFIG_V1_15.EvtDeviceFileCreate", evt_device_file_create, 0x0, 0x0, false, 0x22d7bedcd29c6f3b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDF_FILEOBJECT_CONFIG_V1_15.EvtFileClose", evt_file_close, 0x0, 0x0, false, 0x2d16afe0d5ffaadf)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDF_FILEOBJECT_CONFIG_V1_15.EvtFileCleanup", evt_file_cleanup, 0x0, 0x0, false, 0xcf82cde971cb0760)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_FILEOBJECT_CONFIG_V1_15.AutoForwardCleanupClose", auto_forward_cleanup_close, 0x0, 0x0, false, 0xf1e8c860d529a882)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::fileobject_class_t), "_WDF_FILEOBJECT_CONFIG_V1_15.FileObjectClass", file_object_class, 0x0, 0x0, false, 0x51b9dae917caf1c8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif