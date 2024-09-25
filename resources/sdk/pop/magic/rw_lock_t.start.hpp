#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::push_lock_t), "_POP_RW_LOCK.Lock", lock, 0x0, 0x40, true, 0x8f8051098624a08e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_POP_RW_LOCK.Thread", thread, 0x40, 0x40, true, 0x8e734d9775972c8a)
#else
#define _m00
#define _m01
#endif