#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_SPIN_LOCK.SpinLock", spin_lock, 0x0, 0x40, true, 0x3cb2e0a4fb32d788)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_SPIN_LOCK.OldIrql", old_irql, 0x40, 0x8, true, 0xb09801aaae12ab0)
#else
#define _m00
#define _m01
#endif