#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFCX_FILEOBJECT_CONFIG_V1_13.Size", size, 0x0, 0x0, false, 0xd41d695e74dfee3f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcx_device_file_create_t ), "_WDFCX_FILEOBJECT_CONFIG_V1_13.EvtCxDeviceFileCreate", evt_cx_device_file_create, 0x0, 0x0, false, 0xe8b6c489a7fcf0fe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDFCX_FILEOBJECT_CONFIG_V1_13.EvtFileClose", evt_file_close, 0x0, 0x0, false, 0xf0eaf2d2c103bbb2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDFCX_FILEOBJECT_CONFIG_V1_13.EvtFileCleanup", evt_file_cleanup, 0x0, 0x0, false, 0xc7e709ac48554f7e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDFCX_FILEOBJECT_CONFIG_V1_13.AutoForwardCleanupClose", auto_forward_cleanup_close, 0x0, 0x0, false, 0x6c8a273ee79ee6f3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::fileobject_class_t), "_WDFCX_FILEOBJECT_CONFIG_V1_13.FileObjectClass", file_object_class, 0x0, 0x0, false, 0x9ccbf9a99d044e54)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif