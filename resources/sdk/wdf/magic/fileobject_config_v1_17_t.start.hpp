#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_FILEOBJECT_CONFIG_V1_17.Size", size, 0x0, 0x0, false, 0x37cc85c1cc6f5344)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_file_create_t ), "_WDF_FILEOBJECT_CONFIG_V1_17.EvtDeviceFileCreate", evt_device_file_create, 0x0, 0x0, false, 0x69332f5dba9d6f6d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDF_FILEOBJECT_CONFIG_V1_17.EvtFileClose", evt_file_close, 0x0, 0x0, false, 0xefcd99f146924966)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "_WDF_FILEOBJECT_CONFIG_V1_17.EvtFileCleanup", evt_file_cleanup, 0x0, 0x0, false, 0x5703f2851aa58f0b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::tri_state_t), "_WDF_FILEOBJECT_CONFIG_V1_17.AutoForwardCleanupClose", auto_forward_cleanup_close, 0x0, 0x0, false, 0x9dc60408861fc7d7)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum wdf::fileobject_class_t), "_WDF_FILEOBJECT_CONFIG_V1_17.FileObjectClass", file_object_class, 0x0, 0x0, false, 0xed526e213a0808b2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif