#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxFileObjectFileCreate.m_CallbackLock", m_callback_lock, 0x0, 0x40, true, 0x136faab7d8fac9e7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_device_file_create_t ), "FxFileObjectFileCreate.Method", method, 0x40, 0x40, true, 0xcff70a1fd5dbaa9)
#else
#define _m00
#define _m01
#endif