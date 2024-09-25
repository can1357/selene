#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_11.Size", size, 0x0, 0x0, false, 0xd0d66f8a96905746)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_driver_device_add_t ), "_WDF_DRIVER_CONFIG_V1_11.EvtDriverDeviceAdd", evt_driver_device_add, 0x0, 0x0, false, 0x4fa175a0e05356ce)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdriver_t*)>*), "_WDF_DRIVER_CONFIG_V1_11.EvtDriverUnload", evt_driver_unload, 0x0, 0x0, false, 0x9896f8b0d96cfed1)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_11.DriverInitFlags", driver_init_flags, 0x0, 0x0, false, 0x32f19a793e4ba966)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_11.DriverPoolTag", driver_pool_tag, 0x0, 0x0, false, 0x2d0a3798bbf9bab4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif