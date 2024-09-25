#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_FILEOBJECT_CONFIG.Size", size, 0x0, 0x20, true, 0x7767846aa03cf4a2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_file_create_t ), "_WDF_FILEOBJECT_CONFIG.EvtDeviceFileCreate", evt_device_file_create, 0x40, 0x40, true, 0xe3862193383069c2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDF_FILEOBJECT_CONFIG.EvtFileClose", evt_file_close, 0x80, 0x40, true, 0x83cf37bd5e6db550)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDF_FILEOBJECT_CONFIG.EvtFileCleanup", evt_file_cleanup, 0xc0, 0x40, true, 0xf04850e0ac26e3a6)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_FILEOBJECT_CONFIG.AutoForwardCleanupClose", auto_forward_cleanup_close, 0x100, 0x20, true, 0xa5bf46792bf32317)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum wdf::fileobject_class_t), "_WDF_FILEOBJECT_CONFIG.FileObjectClass", file_object_class, 0x120, 0x20, true, 0x2bfe15e82958a1d4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif