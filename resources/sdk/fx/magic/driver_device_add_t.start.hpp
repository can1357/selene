#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxDriverDeviceAdd.m_CallbackLock", m_callback_lock, 0x0, 0x40, true, 0xee1506af652a03f6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_driver_device_add_t ), "FxDriverDeviceAdd.Method", method, 0x40, 0x40, true, 0x6df0cd28cc118896)
#else
#define _m00
#define _m01
#endif