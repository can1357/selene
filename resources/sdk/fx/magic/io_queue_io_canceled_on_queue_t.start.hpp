#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxIoQueueIoCanceledOnQueue.m_CallbackLock", m_callback_lock, 0x0, 0x40, true, 0x427d7cf6106e55e5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "FxIoQueueIoCanceledOnQueue.Method", method, 0x40, 0x40, true, 0xc7b49997645f619c)
#else
#define _m00
#define _m01
#endif