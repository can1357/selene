#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxIoQueueIoResume.m_CallbackLock", m_callback_lock, 0x0, 0x40, true, 0x1ee2fc63c29fb999)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*)>*), "FxIoQueueIoResume.Method", method, 0x40, 0x40, true, 0xb70ee013f6976f08)
#else
#define _m00
#define _m01
#endif