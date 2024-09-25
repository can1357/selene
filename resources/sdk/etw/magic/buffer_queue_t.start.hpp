#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t*), "_ETW_BUFFER_QUEUE.QueueTail", queue_tail, 0x0, 0x40, true, 0xd01883f5a9273d2f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_ETW_BUFFER_QUEUE.QueueEntry", queue_entry, 0x40, 0x40, true, 0xc32e7b3a8ae24bad)
#else
#define _m00
#define _m01
#endif