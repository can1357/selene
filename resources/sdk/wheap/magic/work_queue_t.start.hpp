#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WHEAP_WORK_QUEUE.ListHead", list_head, 0x0, 0x80, true, 0xcda431d1f3f6c33)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEAP_WORK_QUEUE.ListLock", list_lock, 0x80, 0x40, true, 0x3da263953ecdb0bf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_WHEAP_WORK_QUEUE.ItemCount", item_count, 0xc0, 0x20, true, 0x73e3eac2dd5d463a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_WHEAP_WORK_QUEUE.Dpc", dpc, 0x100, 0x0, true, 0xd0bc3ba784f5208b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_WHEAP_WORK_QUEUE.WorkItem", work_item, 0x300, 0x0, true, 0x5ef12f5dde5517b4)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct wheap::work_queue_t*, nt::list_entry_t*)>*), "_WHEAP_WORK_QUEUE.WorkRoutine", work_routine, 0x400, 0x40, true, 0x332fa2e354b95008)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif