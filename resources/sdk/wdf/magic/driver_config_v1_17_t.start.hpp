#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_17.Size", size, 0x0, 0x0, false, 0x3a06dfcfb8141c2f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_driver_device_add_t ), "_WDF_DRIVER_CONFIG_V1_17.EvtDriverDeviceAdd", evt_driver_device_add, 0x0, 0x0, false, 0x9094263162b8d279)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdriver_t*)>*), "_WDF_DRIVER_CONFIG_V1_17.EvtDriverUnload", evt_driver_unload, 0x0, 0x0, false, 0xc1b2fc37e35129eb)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_17.DriverInitFlags", driver_init_flags, 0x0, 0x0, false, 0x3607e0afe7b0671e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_17.DriverPoolTag", driver_pool_tag, 0x0, 0x0, false, 0x1c2a0f68654ccaa0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif