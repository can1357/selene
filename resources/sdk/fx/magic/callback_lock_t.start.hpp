#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxCallbackLock.m_Globals", m_globals, 0x40, 0x40, true, 0x5a04cb9360b70225)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "FxCallbackLock.m_OwnerThread", m_owner_thread, 0x80, 0x40, true, 0xdfefa490223dfccc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxCallbackLock.m_RecursionCount", m_recursion_count, 0xc0, 0x20, true, 0xf734623c91d86b9d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::verifier_lock_t*), "FxCallbackLock.m_Verifier", m_verifier, 0x100, 0x40, true, 0x8f9f940133339cd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxCallbackLock.m_PreviousIrql", m_previous_irql, 0x140, 0x8, true, 0xeeab62d1512b0613)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif