#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxCallbackMutexLock.m_Globals", m_globals, 0x40, 0x40, true, 0x7098837f85c72f1d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "FxCallbackMutexLock.m_OwnerThread", m_owner_thread, 0x80, 0x40, true, 0x2a6206c55e879343)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxCallbackMutexLock.m_RecursionCount", m_recursion_count, 0xc0, 0x20, true, 0x988049b9a946a1ef)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::verifier_lock_t*), "FxCallbackMutexLock.m_Verifier", m_verifier, 0x100, 0x40, true, 0x390c280d58fe1fa5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxCallbackMutexLock.m_PreviousIrql", m_previous_irql, 0x140, 0x8, true, 0x1fb9ab0e2a7e35d0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::paged_lock_t), "FxCallbackMutexLock.m_Lock", m_lock, 0x180, 0x0, true, 0x447c64c414f3869c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif