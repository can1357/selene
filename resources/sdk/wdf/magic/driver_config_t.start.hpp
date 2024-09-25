#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG.Size", size, 0x0, 0x20, true, 0x679fdd6b25125a04)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_driver_device_add_t ), "_WDF_DRIVER_CONFIG.EvtDriverDeviceAdd", evt_driver_device_add, 0x40, 0x40, true, 0x25248d7fc97c99e2)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfdriver_t*)>*), "_WDF_DRIVER_CONFIG.EvtDriverUnload", evt_driver_unload, 0x80, 0x40, true, 0xa7888a973a7b80de)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG.DriverInitFlags", driver_init_flags, 0xc0, 0x20, true, 0x314d5d6ea75425cf)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_DRIVER_CONFIG.DriverPoolTag", driver_pool_tag, 0xe0, 0x20, true, 0x1f4ad609b1c782d8)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif