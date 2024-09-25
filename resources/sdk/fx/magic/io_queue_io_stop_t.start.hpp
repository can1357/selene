#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::callback_lock_t*), "FxIoQueueIoStop.m_CallbackLock", m_callback_lock, 0x0, 0x40, true, 0xa8fd5f20451e4218)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pfn_wdf_io_queue_io_stop_t ), "FxIoQueueIoStop.Method", method, 0x40, 0x40, true, 0x798a9d6806e9836c)
#else
#define _m00
#define _m01
#endif