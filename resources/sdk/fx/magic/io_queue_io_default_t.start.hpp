#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxIoQueueIoDefault.m_CallbackLock", m_callback_lock, 0x0, 0x40, true, 0xc5e4eedc9c57acd5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "FxIoQueueIoDefault.Method", method, 0x40, 0x40, true, 0xbfc8ea3ec32f48e1)
#else
#define _m00
#define _m01
#endif