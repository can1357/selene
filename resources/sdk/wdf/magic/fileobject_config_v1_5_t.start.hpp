#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_FILEOBJECT_CONFIG_V1_5.Size", size, 0x0, 0x0, false, 0x2152e79d412b7695)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_file_create_t ), "_WDF_FILEOBJECT_CONFIG_V1_5.EvtDeviceFileCreate", evt_device_file_create, 0x0, 0x0, false, 0xefb78121589b31cf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDF_FILEOBJECT_CONFIG_V1_5.EvtFileClose", evt_file_close, 0x0, 0x0, false, 0xcf26acdd014dc4f8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDF_FILEOBJECT_CONFIG_V1_5.EvtFileCleanup", evt_file_cleanup, 0x0, 0x0, false, 0xc6b19c61aaf06995)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_FILEOBJECT_CONFIG_V1_5.AutoForwardCleanupClose", auto_forward_cleanup_close, 0x0, 0x0, false, 0x85392c99f4193e69)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::fileobject_class_t), "_WDF_FILEOBJECT_CONFIG_V1_5.FileObjectClass", file_object_class, 0x0, 0x0, false, 0x636f7d49e047b24d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif