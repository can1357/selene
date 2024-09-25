#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "KAcquireSpinLock.m_oldIrql", m_old_irql, 0x0, 0x0, false, 0x2806db59c0a02c44)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class ndis::k_spin_lock_base_t&), "KAcquireSpinLock.m_lock", m_lock, 0x0, 0x0, false, 0x7645be7167311c11)
#else
#define _m00
#define _m01
#endif