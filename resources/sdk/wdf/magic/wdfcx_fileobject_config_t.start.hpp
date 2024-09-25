#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFCX_FILEOBJECT_CONFIG.Size", size, 0x0, 0x20, true, 0xe3ac0fdba8948793)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdfcx_device_file_create_t ), "_WDFCX_FILEOBJECT_CONFIG.EvtCxDeviceFileCreate", evt_cx_device_file_create, 0x40, 0x40, true, 0x9f42ebc04d533b11)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDFCX_FILEOBJECT_CONFIG.EvtFileClose", evt_file_close, 0x80, 0x40, true, 0x72ff8918dbed93c3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDFCX_FILEOBJECT_CONFIG.EvtFileCleanup", evt_file_cleanup, 0xc0, 0x40, true, 0x4565adc56be891d5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDFCX_FILEOBJECT_CONFIG.AutoForwardCleanupClose", auto_forward_cleanup_close, 0x100, 0x20, true, 0x59b6147c7e9d4c1d)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::fileobject_class_t), "_WDFCX_FILEOBJECT_CONFIG.FileObjectClass", file_object_class, 0x120, 0x20, true, 0x80ce27fb27693fb6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif