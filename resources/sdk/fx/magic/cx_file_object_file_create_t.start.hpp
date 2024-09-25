#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxCxFileObjectFileCreate.m_CallbackLock", m_callback_lock, 0x0, 0x40, true, 0xc129bdeee21f1335)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdfcx_device_file_create_t ), "FxCxFileObjectFileCreate.Method", method, 0x40, 0x40, true, 0x924b128ed729f5c5)
#else
#define _m00
#define _m01
#endif