#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::fltp_workitem_t), "_FLT_DEFERRED_IO_WORKITEM.FltWork", flt_work, 0x0, 0x40, true, 0xdc2a02b9a6c0ec36)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::work_queue_type_t), "_FLT_DEFERRED_IO_WORKITEM.QueueType", queue_type, 0x140, 0x20, true, 0xaccdda5c9a595b30)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct fltmgr::flt_deferred_io_workitem_t*, struct fltmgr::flt_callback_data_t*, void*)>*), "_FLT_DEFERRED_IO_WORKITEM.DeferredWorkerRoutine", deferred_worker_routine, 0x180, 0x40, true, 0xe27a93591c48780)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct fltmgr::flt_generic_workitem_t*, void*, void*)>*), "_FLT_DEFERRED_IO_WORKITEM.GenericWorkerRoutine", generic_worker_routine, 0x180, 0x40, true, 0x88f496ecadd1ac74)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_DEFERRED_IO_WORKITEM.Context", context, 0x1c0, 0x40, true, 0x1ba14e6787f210c1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::priority_info_t), "_FLT_DEFERRED_IO_WORKITEM.IoPriorityInfo", io_priority_info, 0x200, 0x80, true, 0x3e8da443dc1efea1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_FLT_DEFERRED_IO_WORKITEM.ActivityId", activity_id, 0x280, 0x80, true, 0xd734ca91080f3ad)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_instance_t*), "_FLT_DEFERRED_IO_WORKITEM.Instance", instance, 0x300, 0x40, true, 0x87c53e6a26564120)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_callback_data_t*), "_FLT_DEFERRED_IO_WORKITEM.CallbackData", callback_data, 0x340, 0x40, true, 0x190e3a163d1f93f4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif