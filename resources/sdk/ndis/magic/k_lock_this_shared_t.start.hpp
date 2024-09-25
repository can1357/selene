#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_state_t), "KLockThisShared.m_State", m_state, 0x0, 0x20, true, 0x83c1ceb2036bd7c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class ndis::k_push_lock_base_t&), "KLockThisShared.m_Lock", m_lock, 0x40, 0x40, true, 0x31ffa4dcab14f6cf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class ndis::k_critical_region_t), "KLockThisShared.m_Region", m_region, 0x80, 0x8, true, 0xe3e8fe8937984c8e)
#else
#define _m00
#define _m01
#define _m02
#endif