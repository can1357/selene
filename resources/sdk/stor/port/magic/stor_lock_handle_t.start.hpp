#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::stor_spinlock_t), "_STOR_LOCK_HANDLE.Lock", lock, 0x0, 0x20, true, 0xc7d84dcbe8ec8180)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_LOCK_HANDLE.Context.LockQueue.Next", next, 0x0, 0x40, true, 0x1dd25bab275296be)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_LOCK_HANDLE.Context.LockQueue.Lock", lock, 0x40, 0x40, true, 0xd22213b1c66127)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_lock_queue_t), "_STOR_LOCK_HANDLE.Context.LockQueue", lock_queue, 0x0, 0x80, true, 0x794c5dde2f1c8ea3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_STOR_LOCK_HANDLE.Context.OldIrql", old_irql, 0x80, 0x8, true, 0x334187299e12ea00)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_context_t), "_STOR_LOCK_HANDLE.Context", context, 0x40, 0xc0, true, 0xb777fb741da92b3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif