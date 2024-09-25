#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxCallbackSpinLock.m_Globals", m_globals, 0x40, 0x40, true, 0xc30686aabd75e606)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "FxCallbackSpinLock.m_OwnerThread", m_owner_thread, 0x80, 0x40, true, 0x32ab3445a6278961)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxCallbackSpinLock.m_RecursionCount", m_recursion_count, 0xc0, 0x20, true, 0xbb58d96f8b79378c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::verifier_lock_t*), "FxCallbackSpinLock.m_Verifier", m_verifier, 0x100, 0x40, true, 0x268e9016fc3cb614)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxCallbackSpinLock.m_PreviousIrql", m_previous_irql, 0x140, 0x8, true, 0x988c2cce479a5e85)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxCallbackSpinLock.m_Lock", m_lock, 0x180, 0x80, true, 0x1d09aec295ad670)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif