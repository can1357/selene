#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_MI_RESUME_WORKITEM.ResumeCompleteEvent", resume_complete_event, 0x0, 0xc0, true, 0x929901a0860cfe35)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_MI_RESUME_WORKITEM.WorkItem", work_item, 0xc0, 0x0, true, 0xee903156cc46c2d2)
#else
#define _m00
#define _m01
#endif