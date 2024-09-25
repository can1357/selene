#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_0.Size", size, 0x0, 0x20, true, 0x1224618e55066c66)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_driver_device_add_t ), "_WDF_DRIVER_CONFIG_V1_0.EvtDriverDeviceAdd", evt_driver_device_add, 0x40, 0x40, true, 0x34edb7950fcd384b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdriver_t*)>*), "_WDF_DRIVER_CONFIG_V1_0.EvtDriverUnload", evt_driver_unload, 0x80, 0x40, true, 0xa79bd144da8199b2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_0.DriverInitFlags", driver_init_flags, 0xc0, 0x20, true, 0xd3910c56ca86087)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif