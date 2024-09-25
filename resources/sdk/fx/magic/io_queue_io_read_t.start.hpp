#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxIoQueueIoRead.m_CallbackLock", m_callback_lock, 0x0, 0x40, true, 0x5426530b349701c8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t)>*), "FxIoQueueIoRead.Method", method, 0x40, 0x40, true, 0x46386c38826bb379)
#else
#define _m00
#define _m01
#endif