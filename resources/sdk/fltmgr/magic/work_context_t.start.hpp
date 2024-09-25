#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fltmgr::fltp_workitem_t), "_WORK_CONTEXT.FltWork", flt_work, 0x0, 0x40, true, 0xb371a3b50d01ba54)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_WORK_CONTEXT.SyncOpRoutine", sync_op_routine, 0x140, 0x40, true, 0x9a829c95ea240ee3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WORK_CONTEXT.Parameter", parameter, 0x180, 0x40, true, 0x5ac1d279551947b3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_WORK_CONTEXT.SyncEvent", sync_event, 0x1c0, 0xc0, true, 0x856fc5da93f7dd8e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WORK_CONTEXT.Status", status, 0x280, 0x20, true, 0xec0368b013552a36)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fltmgr::fltp_work_queue_type_t), "_WORK_CONTEXT.QueueType", queue_type, 0x2a0, 0x20, true, 0x520a919a4670304e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::priority_info_t), "_WORK_CONTEXT.IoPriorityInfo", io_priority_info, 0x2c0, 0x80, true, 0x891d9c73e3cb6a9f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif