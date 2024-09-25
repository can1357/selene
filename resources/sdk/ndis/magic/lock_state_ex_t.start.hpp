#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOCK_STATE_EX.OldIrql", old_irql, 0x0, 0x8, true, 0x8b96043e60cc34ea)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOCK_STATE_EX.LockState", lock_state, 0x8, 0x8, true, 0x84e632cc8db1a5cb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LOCK_STATE_EX.Flags", flags, 0x10, 0x8, true, 0xf75a273ce6c6a767)
#else
#define _m00
#define _m01
#define _m02
#endif