#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_IO_WORKITEM.WorkItem", work_item, 0x0, 0x0, true, 0xa90ee45892dc2b11)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, struct io::workitem_t*)>*), "_IO_WORKITEM.Routine", routine, 0x100, 0x40, true, 0xe75b881be117f8ff)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IO_WORKITEM.IoObject", io_object, 0x140, 0x40, true, 0x4b8dd6925f50f712)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_IO_WORKITEM.Context", context, 0x180, 0x40, true, 0x48d948dd4afbdbd8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_IO_WORKITEM.WorkOnBehalfThread", work_on_behalf_thread, 0x1c0, 0x40, true, 0xdc7a878b147c7d9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_WORKITEM.Type", type, 0x200, 0x20, true, 0xd559086d41a5a34e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_IO_WORKITEM.ActivityId", activity_id, 0x220, 0x80, true, 0x4fc1d937f5c421dc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif