#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WORK_QUEUE_ITEM.List", list, 0x0, 0x80, true, 0x4b5ee7a1fca1883c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_WORK_QUEUE_ITEM.WorkerRoutine", worker_routine, 0x80, 0x40, true, 0x9f92a1e2c38a49e7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_WORK_QUEUE_ITEM.Parameter", parameter, 0xc0, 0x40, true, 0x5d932d391e24dff8)
#else
#define _m00
#define _m01
#define _m02
#endif