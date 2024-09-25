#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::partition_t*), "_EX_WORK_QUEUE_MANAGER.Partition", partition, 0x0, 0x40, true, 0xfa8a180681b06093)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::enode_t*), "_EX_WORK_QUEUE_MANAGER.Node", node, 0x40, 0x40, true, 0x97ebccb1e8f653e4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_EX_WORK_QUEUE_MANAGER.Event", event, 0x80, 0xc0, true, 0xf0cdc3b6d2b6c445)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_EX_WORK_QUEUE_MANAGER.DeadlockTimer", deadlock_timer, 0x140, 0x0, true, 0x70f06c49bd1fbbd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_EX_WORK_QUEUE_MANAGER.ReaperEvent", reaper_event, 0x340, 0xc0, true, 0x1413a3b5e9631277)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer2_t), "_EX_WORK_QUEUE_MANAGER.ReaperTimer", reaper_timer, 0x400, 0x40, true, 0xbfc5af71efb7348f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EX_WORK_QUEUE_MANAGER.ThreadHandle", thread_handle, 0x840, 0x40, true, 0xa23532e73db3a2ba)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_EX_WORK_QUEUE_MANAGER.ExitThread", exit_thread, 0x880, 0x20, true, 0x4c8d5c338b99f8d2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_EX_WORK_QUEUE_MANAGER.ThreadSeed", thread_seed, 0x8a0, 0x10, true, 0xffbf8eead4b42858)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif