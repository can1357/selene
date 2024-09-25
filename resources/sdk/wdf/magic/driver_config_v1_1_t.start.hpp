#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_1.Size", size, 0x0, 0x20, true, 0xf492f7211283e536)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_driver_device_add_t ), "_WDF_DRIVER_CONFIG_V1_1.EvtDriverDeviceAdd", evt_driver_device_add, 0x40, 0x40, true, 0x857f3d5e998e5762)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdriver_t*)>*), "_WDF_DRIVER_CONFIG_V1_1.EvtDriverUnload", evt_driver_unload, 0x80, 0x40, true, 0xb6be765c1c8af9b2)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG_V1_1.DriverInitFlags", driver_init_flags, 0xc0, 0x20, true, 0x574a693f41d862aa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif