#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_MI_QUEUED_DEADSTACK_WORKITEM.WorkItem", work_item, 0x0, 0x0, false, 0xa810f7f6b0f3bb95)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_QUEUED_DEADSTACK_WORKITEM.Active", active, 0x0, 0x0, false, 0x303f98fec27bd791)
#else
#define _m00
#define _m01
#endif