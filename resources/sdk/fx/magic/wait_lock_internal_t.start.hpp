#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::event_t), "FxWaitLockInternal.m_Event", m_event, 0x0, 0x0, true, 0x516740b45c68102f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "FxWaitLockInternal.m_OwningThread", m_owning_thread, 0x100, 0x40, true, 0xa7ed131036fd2791)
#else
#define _m00
#define _m01
#endif