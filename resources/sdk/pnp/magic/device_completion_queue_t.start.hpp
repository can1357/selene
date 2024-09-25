#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PNP_DEVICE_COMPLETION_QUEUE.DispatchedList", dispatched_list, 0x0, 0x80, true, 0x9aeadf96f261c3a1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PNP_DEVICE_COMPLETION_QUEUE.DispatchedCount", dispatched_count, 0x80, 0x20, true, 0x4be142681cb2d21b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_PNP_DEVICE_COMPLETION_QUEUE.CompletedList", completed_list, 0xc0, 0x80, true, 0xfc39339f047a0e83)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ksemaphore_t), "_PNP_DEVICE_COMPLETION_QUEUE.CompletedSemaphore", completed_semaphore, 0x140, 0x0, true, 0xfe3a35b872f564ea)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PNP_DEVICE_COMPLETION_QUEUE.SpinLock", spin_lock, 0x240, 0x40, true, 0x8b6764ccf4e17a0e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif