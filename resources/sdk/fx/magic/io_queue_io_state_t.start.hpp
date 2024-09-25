#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxIoQueueIoState.m_CallbackLock", m_callback_lock, 0x0, 0x40, true, 0x15deb25913a95947)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_queue_state_t ), "FxIoQueueIoState.Method", method, 0x40, 0x40, true, 0xaf45a17d8e2aab61)
#else
#define _m00
#define _m01
#endif