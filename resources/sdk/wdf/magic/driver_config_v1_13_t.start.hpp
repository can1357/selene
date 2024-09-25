#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_13.Size", size, 0x0, 0x0, false, 0x4b838ff1977d7814)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_driver_device_add_t ), "_WDF_DRIVER_CONFIG_V1_13.EvtDriverDeviceAdd", evt_driver_device_add, 0x0, 0x0, false, 0xca48f4a73a47139)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdriver_t*)>*), "_WDF_DRIVER_CONFIG_V1_13.EvtDriverUnload", evt_driver_unload, 0x0, 0x0, false, 0xbf7478a80330683f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_13.DriverInitFlags", driver_init_flags, 0x0, 0x0, false, 0xd4938056c5a028c9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_13.DriverPoolTag", driver_pool_tag, 0x0, 0x0, false, 0x6b515db041608da0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif