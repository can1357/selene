#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxIoQueueIoInternalDeviceControl.m_CallbackLock", m_callback_lock, 0x0, 0x40, true, 0xd933fd3e8565f075)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wdf::wdfqueue_t*, struct wdf::wdfrequest_t*, uint64_t, uint64_t, uint32_t)>*), "FxIoQueueIoInternalDeviceControl.Method", method, 0x40, 0x40, true, 0x1fd18f5ebb246df2)
#else
#define _m00
#define _m01
#endif