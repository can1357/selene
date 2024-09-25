#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::csq_t), "_FLT_MESSAGE_WAITER_QUEUE.Csq", csq, 0x0, 0x0, true, 0x9bd7da0946cd6256)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_mutex_list_head_t), "_FLT_MESSAGE_WAITER_QUEUE.WaiterQ", waiter_q, 0x200, 0x80, true, 0x62040e9d425a2194)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FLT_MESSAGE_WAITER_QUEUE.MinimumWaiterLength", minimum_waiter_length, 0x480, 0x20, true, 0xf52d5be8efd52ef6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ksemaphore_t), "_FLT_MESSAGE_WAITER_QUEUE.Semaphore", semaphore, 0x4c0, 0x0, true, 0xcdff515b967405c3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_FLT_MESSAGE_WAITER_QUEUE.Event", event, 0x5c0, 0xc0, true, 0x70a6c399fe66cb57)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif