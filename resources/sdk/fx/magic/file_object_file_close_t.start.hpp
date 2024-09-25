#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxFileObjectFileClose.m_CallbackLock", m_callback_lock, 0x0, 0x40, true, 0xfa026ab827b32e74)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "FxFileObjectFileClose.Method", method, 0x40, 0x40, true, 0x13c71f846a802398)
#else
#define _m00
#define _m01
#endif