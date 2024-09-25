#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxVerifierLock.m_Globals", m_globals, 0x0, 0x40, true, 0xefb98e143c28cde5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxVerifierLock.m_Type", m_type, 0x40, 0x10, true, 0x3937a1bac7633bcd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxVerifierLock.m_Size", m_size, 0x50, 0x10, true, 0x5b24696f7217469e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxVerifierLock.m_Lock", m_lock, 0x80, 0x80, true, 0x54141abf9ae9b48c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxVerifierLock.m_OldIrql", m_old_irql, 0x100, 0x8, true, 0x481cca173893caa4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::paged_lock_t), "FxVerifierLock.m_Mutex", m_mutex, 0x140, 0x0, true, 0xa0dbbf11fac38ee3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxVerifierLock.m_ParentObject", m_parent_object, 0x340, 0x40, true, 0x797727130f44343a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "FxVerifierLock.m_OwningThread", m_owning_thread, 0x380, 0x40, true, 0xd986fbcd47b645a3)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxVerifierLock.m_Order", m_order, 0x3c0, 0x10, true, 0x3e35d899cee8b45a)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxVerifierLock.m_UseMutex", m_use_mutex, 0x3d0, 0x8, true, 0x3f6ca26de27c3b87)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxVerifierLock.m_CallbackLock", m_callback_lock, 0x3d8, 0x8, true, 0x3f347f0e6db5888c)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::verifier_lock_t*), "FxVerifierLock.m_OwnedLink", m_owned_link, 0x400, 0x40, true, 0x454104262b67add1)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::verifier_thread_table_entry_t), "FxVerifierLock.m_ThreadTableEntry", m_thread_table_entry, 0x440, 0x40, true, 0x4e06cbe08bcb5de2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif