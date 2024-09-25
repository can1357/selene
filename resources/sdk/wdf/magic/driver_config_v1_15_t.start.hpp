#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_15.Size", size, 0x0, 0x0, false, 0x559387636b8dd6cf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_driver_device_add_t ), "_WDF_DRIVER_CONFIG_V1_15.EvtDriverDeviceAdd", evt_driver_device_add, 0x0, 0x0, false, 0xb87e3b0c41221c5d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdriver_t*)>*), "_WDF_DRIVER_CONFIG_V1_15.EvtDriverUnload", evt_driver_unload, 0x0, 0x0, false, 0x560141b570995cc2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_15.DriverInitFlags", driver_init_flags, 0x0, 0x0, false, 0xb09d7d3dde4297bc)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_15.DriverPoolTag", driver_pool_tag, 0x0, 0x0, false, 0xfb26e6b664a5969)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif