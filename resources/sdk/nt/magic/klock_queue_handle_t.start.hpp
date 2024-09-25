#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kspin_lock_queue_t), "_KLOCK_QUEUE_HANDLE.LockQueue", lock_queue, 0x0, 0x80, true, 0xe32690e316022754)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_KLOCK_QUEUE_HANDLE.OldIrql", old_irql, 0x80, 0x8, true, 0x2247ea249d951199)
#else
#define _m00
#define _m01
#endif