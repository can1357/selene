#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_TIMEZONE_CHANGE_EVENT.Dpc", dpc, 0x0, 0x0, false, 0x479c551365650003)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_TIMEZONE_CHANGE_EVENT.Timer", timer, 0x0, 0x0, false, 0xd1aa1a05cd37520c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_TIMEZONE_CHANGE_EVENT.WorkItem", work_item, 0x0, 0x0, false, 0x44da469ea9848e6a)
#else
#define _m00
#define _m01
#define _m02
#endif