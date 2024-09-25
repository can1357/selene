#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_m_state_t), "KLockThisExclusive.m_State", m_state, 0x0, 0x20, true, 0x50b5c15be1b88440)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class ndis::k_push_lock_base_t&), "KLockThisExclusive.m_Lock", m_lock, 0x40, 0x40, true, 0xeee4f262652e484)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class ndis::k_critical_region_t), "KLockThisExclusive.m_Region", m_region, 0x80, 0x8, true, 0x1417eb6aedb3ad97)
#else
#define _m00
#define _m01
#define _m02
#endif