#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_7.Size", size, 0x0, 0x0, false, 0x2b47f33cd2aaa9f6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_driver_device_add_t ), "_WDF_DRIVER_CONFIG_V1_7.EvtDriverDeviceAdd", evt_driver_device_add, 0x0, 0x0, false, 0xe6da5742973081e0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdriver_t*)>*), "_WDF_DRIVER_CONFIG_V1_7.EvtDriverUnload", evt_driver_unload, 0x0, 0x0, false, 0xa5523017f6a5e60a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_7.DriverInitFlags", driver_init_flags, 0x0, 0x0, false, 0x494bd89d5093b08f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_7.DriverPoolTag", driver_pool_tag, 0x0, 0x0, false, 0x9c83c2b533c39079)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif