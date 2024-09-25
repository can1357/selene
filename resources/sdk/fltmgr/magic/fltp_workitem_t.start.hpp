#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union fltmgr::flt_type_t), "_FLTP_WORKITEM.Type", type, 0x0, 0x20, true, 0x9c56767f56cf553a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_FLTP_WORKITEM.WorkItem", work_item, 0x40, 0x0, true, 0x19cbd9851168124f)
#else
#define _m00
#define _m01
#endif