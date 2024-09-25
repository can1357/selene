#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::csq_t), "_SECTION_CONFLICT_QUEUE.Csq", csq, 0x0, 0x0, true, 0x6cd96b64fa7190d5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_SECTION_CONFLICT_QUEUE.QueueHead", queue_head, 0x200, 0x80, true, 0xa0eb2b7c89fc911c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fast_mutex_t), "_SECTION_CONFLICT_QUEUE.QueueLock", queue_lock, 0x280, 0xc0, true, 0xcf4daf730ef801b8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_SECTION_CONFLICT_QUEUE.QueueCoordinationCount", queue_coordination_count, 0x440, 0x20, true, 0x9afda7a9a1497023)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::workitem_t*), "_SECTION_CONFLICT_QUEUE.WorkItem", work_item, 0x480, 0x40, true, 0x2efe7220feaaa67f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::section_list_ctrl_t*), "_SECTION_CONFLICT_QUEUE.SectionListCtrl", section_list_ctrl, 0x4c0, 0x40, true, 0xa3bd48193489c8c1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif