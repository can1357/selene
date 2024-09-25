#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::fltp_workitem_t), "_FLT_GENERIC_WORKITEM.FltWork", flt_work, 0x0, 0x40, true, 0xa2770cbcafcc62c6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::work_queue_type_t), "_FLT_GENERIC_WORKITEM.QueueType", queue_type, 0x140, 0x20, true, 0xcc3d9cd12b6fdb36)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct fltmgr::flt_deferred_io_workitem_t*, struct fltmgr::flt_callback_data_t*, void*)>*), "_FLT_GENERIC_WORKITEM.DeferredWorkerRoutine", deferred_worker_routine, 0x180, 0x40, true, 0x97bbd09f322e4afa)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct fltmgr::flt_generic_workitem_t*, void*, void*)>*), "_FLT_GENERIC_WORKITEM.GenericWorkerRoutine", generic_worker_routine, 0x180, 0x40, true, 0x4f1717893d416c91)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FLT_GENERIC_WORKITEM.Context", context, 0x1c0, 0x40, true, 0xa272d98b46159fe2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::priority_info_t), "_FLT_GENERIC_WORKITEM.IoPriorityInfo", io_priority_info, 0x200, 0x80, true, 0x91ac106c1407a97e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_FLT_GENERIC_WORKITEM.ActivityId", activity_id, 0x280, 0x80, true, 0xfe92d7537d546b65)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::flt_object_t*), "_FLT_GENERIC_WORKITEM.FltObject", flt_object, 0x300, 0x40, true, 0xfd2bc7b47e8f9b1d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif