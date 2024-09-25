#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::klock_queue_handle_t), "_LOCK_CONTEXT.LockHandle", lock_handle, 0x0, 0xc0, true, 0xdfd1e44dae4957e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOCK_CONTEXT.OldIrql", old_irql, 0x0, 0x8, true, 0x2f6119abd33b69cf)
#else
#define _m00
#define _m01
#endif