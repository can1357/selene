#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_5.Size", size, 0x0, 0x0, false, 0xd3abb5da7ae76bce)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_driver_device_add_t ), "_WDF_DRIVER_CONFIG_V1_5.EvtDriverDeviceAdd", evt_driver_device_add, 0x0, 0x0, false, 0x9809c9204272f78e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdriver_t*)>*), "_WDF_DRIVER_CONFIG_V1_5.EvtDriverUnload", evt_driver_unload, 0x0, 0x0, false, 0x1fb6389189572f4c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_5.DriverInitFlags", driver_init_flags, 0x0, 0x0, false, 0xf73199f5ba731bad)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_5.DriverPoolTag", driver_pool_tag, 0x0, 0x0, false, 0x9af613eb197b6d05)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif