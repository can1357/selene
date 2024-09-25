#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kspin_lock_queue_t volatile*), "_KSPIN_LOCK_QUEUE.Next", next, 0x0, 0x40, true, 0x7a6d5ffb57a434f0)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t volatile*), "_KSPIN_LOCK_QUEUE.Lock", lock, 0x40, 0x40, true, 0x8cd8d8e938c368b8)
#else
#define _m00
#define _m01
#endif