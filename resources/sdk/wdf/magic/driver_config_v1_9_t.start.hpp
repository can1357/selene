#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_9.Size", size, 0x0, 0x0, false, 0x3cc977998fbaab48)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_driver_device_add_t ), "_WDF_DRIVER_CONFIG_V1_9.EvtDriverDeviceAdd", evt_driver_device_add, 0x0, 0x0, false, 0x401d7e38f941b1e0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdriver_t*)>*), "_WDF_DRIVER_CONFIG_V1_9.EvtDriverUnload", evt_driver_unload, 0x0, 0x0, false, 0x240e774cb625a54c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_9.DriverInitFlags", driver_init_flags, 0x0, 0x0, false, 0x4b5d8d0a5040e49d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_9.DriverPoolTag", driver_pool_tag, 0x0, 0x0, false, 0xfc60cf6ce593d2e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif