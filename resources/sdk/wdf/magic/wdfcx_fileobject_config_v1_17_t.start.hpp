#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFCX_FILEOBJECT_CONFIG_V1_17.Size", size, 0x0, 0x0, false, 0x1e8aa483a696835a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcx_device_file_create_t ), "_WDFCX_FILEOBJECT_CONFIG_V1_17.EvtCxDeviceFileCreate", evt_cx_device_file_create, 0x0, 0x0, false, 0x9af421af94caeb96)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDFCX_FILEOBJECT_CONFIG_V1_17.EvtFileClose", evt_file_close, 0x0, 0x0, false, 0x1f9ea8c10801c2d8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDFCX_FILEOBJECT_CONFIG_V1_17.EvtFileCleanup", evt_file_cleanup, 0x0, 0x0, false, 0xfe12e1dd6139cf4a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDFCX_FILEOBJECT_CONFIG_V1_17.AutoForwardCleanupClose", auto_forward_cleanup_close, 0x0, 0x0, false, 0xd0defe5690de0687)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::fileobject_class_t), "_WDFCX_FILEOBJECT_CONFIG_V1_17.FileObjectClass", file_object_class, 0x0, 0x0, false, 0x2b1d1f404b04612b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif