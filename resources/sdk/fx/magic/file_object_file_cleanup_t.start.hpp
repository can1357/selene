#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxFileObjectFileCleanup.m_CallbackLock", m_callback_lock, 0x0, 0x40, true, 0xed89d06e68fd8f04)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdffileobject_t*)>*), "FxFileObjectFileCleanup.Method", method, 0x40, 0x40, true, 0x709ce63ef914adfb)
#else
#define _m00
#define _m01
#endif