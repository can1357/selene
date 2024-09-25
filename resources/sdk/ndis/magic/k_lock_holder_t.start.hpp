#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_state_t), "KLockHolder.m_State", m_state, 0x0, 0x20, true, 0x43af0d96427d1ead)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class ndis::k_push_lock_base_t&), "KLockHolder.m_Lock", m_lock, 0x40, 0x40, true, 0x46cf0937400adf88)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class ndis::k_critical_region_t), "KLockHolder.m_Region", m_region, 0x80, 0x8, true, 0x276f6895c82f9b58)
#else
#define _m00
#define _m01
#define _m02
#endif