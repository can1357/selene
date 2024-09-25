#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_QUEUED_CLOSE.Status", status, 0x0, 0x0, false, 0x5c1e900b9051d498)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_QUEUED_CLOSE.WorkItem", work_item, 0x0, 0x0, false, 0x3da8beacbab082c5)
#else
#define _m00
#define _m01
#endif