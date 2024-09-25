#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_LOCK_STATE.LockState", lock_state, 0x0, 0x10, true, 0x680889366b80697a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOCK_STATE.OldIrql", old_irql, 0x10, 0x8, true, 0x246951740974387a)
#else
#define _m00
#define _m01
#endif